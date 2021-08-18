/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:24:22 by acastril          #+#    #+#             */
/*   Updated: 2021/07/01 12:48:43 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char	*str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if ((*c >= '0' && *c <= '9'))
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
	char str1[] = "12324";
	char str2[] = "rieuh74k-,";
	char str3[] = "";

	printf("str numerico: %d\n", ft_str_is_numeric(str1));
	printf("str no numerico: %d\n", ft_str_is_numeric(str2));
	printf("str vacio: %d\n", ft_str_is_numeric(str3));
}
*/
