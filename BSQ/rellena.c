/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rellena.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:39:46 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:39:49 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rellena(char **matrix, int *coord, int tamano, char lleno)
{
	int	col;
	int	row;

	row = coord[1];
	while (row < coord[1] + tamano)
	{
		col = coord[0];
		while (col < coord[0] + tamano)
		{
			matrix[row][col] = lleno;
			col++;
		}
		row++;
	}
}
