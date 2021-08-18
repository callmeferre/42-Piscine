/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:39:19 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:39:22 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

void	imprimir(int ancho, int alto, char **matrix)
{
	int	col;
	int	row;

	col = 0;
	row = 0;
	while (row < alto)
	{
		col = 0;
		while (col < ancho)
		{
			write(1, &matrix[row][col], 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}
