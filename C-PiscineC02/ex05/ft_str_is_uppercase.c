/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:57:39 by acastril          #+#    #+#             */
/*   Updated: 2021/07/01 12:59:02 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char	*str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if ((*c >= 'A' && *c <= 'Z'))
			c++;
		else
			return (0);
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char str1[] = "SDFSA";
	char str2[] = "DDrieuh74k-,";
	char str3[] = "";

	printf("str numerico: %d\n", ft_str_is_uppercase(str1));
	printf("str no numerico: %d\n", ft_str_is_uppercase(str2));
	printf("str vacio: %d\n", ft_str_is_uppercase(str3));
}
*/
