/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comprobacion.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalenzu <cvalenzu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 12:09:27 by cvalenzu          #+#    #+#             */
/*   Updated: 2021/07/14 11:09:48 by cvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comprobacion(char **matrix, int candidato_x, int candidato_y, int tamano, char obstaculo)
{
	int x;
	int y;
	int comprobacion;

	comprobacion = 1;
	y = candidato_y;
	while(y < candidato_y + tamano)
	{
		x = candidato_x;
		while(x < candidato_x + tamano)
		{
			if(matrix[x][y] == obstaculo)
			{
				comprobacion = 0;
				break ;
			}
			x++;
		}
		y++;
	}
	return (comprobacion);
}
