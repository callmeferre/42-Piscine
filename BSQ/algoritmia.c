/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algoritmia.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:36:03 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:36:06 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		comprobacion(char **matrix, int *coord, int tamano, char obstaculo);
void	rellena(char **matrix, int *coord, int tamano, char lleno);
void	imprimir(int ancho, int alto, char **matrix);

int	algoritmia_3(char **matrix, int *coord, int tam, char *chars)
{
	if (comprobacion(matrix, coord, tam, chars[1]))
	{
		rellena(matrix, coord, tam, chars[2]);
		return (1);
	}
	return (0);
}

int	algoritmia_2(int ancho, int alto)
{
	if (ancho < alto)
		return (ancho);
	else
		return (alto);
}

void	algoritmia(int ancho, int alto, char **matrix, char *chars)
{
	int	tam;
	int	col;
	int	solucionado;
	int	coord[2];

	tam = algoritmia_2(ancho, alto);
	solucionado = 0;
	while (tam >= 1 && !solucionado)
	{
		coord[1] = 0;
		while (coord[1] + tam <= alto && !solucionado)
		{
			col = 0;
			while (col + tam <= ancho && !solucionado)
			{	
				coord[0] = col++;
				solucionado = algoritmia_3(matrix, coord, tam, chars);
			}		
			coord[1]++;
		}
		tam--;
	}
	if (solucionado)
		imprimir(ancho, alto, matrix);
}
