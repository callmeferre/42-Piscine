/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpers.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:39:05 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:39:08 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include<stdio.h>

int	ft_atoi(char *str);

int 	ft_filas(char	*chars, int	i, char *first_line)
{
	int		n;
	int		m;
	char	num[20];

	n = 0;
	m = 0;
	while (n < i - 3)
	{
		num[n] = first_line[n];
		n++;
	}
	num[n] = '\0';
	while (n < i)
	{
		chars[m] = first_line[n];
		m++;
		n++;
	}
	chars[m] = '\0';
	return (ft_atoi(num));
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i]) == (s2[i]))
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}
