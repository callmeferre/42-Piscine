/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cvalenzu <cvalenzu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 09:49:44 by cvalenzu          #+#    #+#             */
/*   Updated: 2021/07/14 11:11:18 by cvalenzu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	comprobacion(char **matrix, int candidato_x, int candidato_y, int tamano, char obstaculo);
void	rellena(char **matrix, int candidato_x, int candidato_y, int tamano, char lleno);

void	algoritmia(int ancho, int alto, char **matrix, char *chars)
{
	int tamano;
	int x;
	int y;
	int solucionado;

	if (ancho < alto)
		tamano = ancho;
	else
		tamano = alto;
	solucionado = 0;
	while (tamano >= 1 && !solucionado)
	{
		y = 0;
		while(y + tamano <= alto && !solucionado)
		{
			x = 0;
			while(x + tamano <= ancho && !solucionado)
			{
				if(comprobacion(matrix, x, y, tamano, chars[1]))
				{
					rellena(matrix, x, y, tamano, chars[2]);
					solucionado = 1;
				}
				x++;
			}		
			y++;
		}
		tamano--;
	}
}
