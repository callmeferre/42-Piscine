/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:36:50 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:36:52 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int	ft_error_1(int	filas, char	*chars)
{
	if (chars[0] == chars[1] || chars[1] == chars[2] || chars[2] == chars[0])
		return (0);
	if (chars[2] < 32 || chars[2] == 127 || chars[2] == '\0')
		return (0);
	if (chars[1] < 32 || chars[1] == 127 || chars[1] == '\0')
		return (0);
	if (chars[0] < 32 || chars[0] == 127 || chars[0] == '\0')
		return (0);
	if ((filas != '\0') || 1 < filas || filas < 9)
		return (1);
	return (0);
}

int	ft_error_2(char	*chars, char	**matrix, int	len, int filas)
{
	int	len_prev;
	int	col;
	int	row;

	len_prev = len;
	row = 0;
	while (row < filas)
	{
		len = 0;
		col = 0;
		while (matrix[row][col] != '\n' && matrix[row][col] != '\0')
		{	
			if ((matrix[row][col] == chars[0] && row <= filas) ||
			(matrix[row][col] == chars[1] && row <= filas))
				len++;
			else
				return (0);
			col++;
		}
		row++;
		if (len != len_prev || len == 0)
			return (0);
		len_prev = len;
	}
	return (len_prev);
}
