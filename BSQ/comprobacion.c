/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobacion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:37:50 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:37:53 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	comprobacion(char **matrix, int *coord, int tamano, char obstaculo)
{
	int	col;
	int	row;

	row = coord[1];
	while (row < coord[1] + tamano)
	{
		col = coord[0];
		while (col < coord[0] + tamano)
		{
			if (matrix[row][col] == obstaculo)
			{		
				return (0);
			}
			col++;
		}
		row++;
	}
	return (1);
}
