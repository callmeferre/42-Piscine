/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   imprimir.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalenzu <cvalenzu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:02:02 by cvalenzu          #+#    #+#             */
/*   Updated: 2021/07/13 20:16:55 by cvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	imprimir(int ancho, int alto, char **matrix)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < alto)
	{
		x = 0;
		while (x < ancho)
		{
			write(1, &matrix[x][y], 1);
			x++;
		}
		write(1, "\n", 1);
		y++;
	}
}
