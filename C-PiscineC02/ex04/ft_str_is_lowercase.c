/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 12:51:30 by acastril          #+#    #+#             */
/*   Updated: 2021/07/06 15:38:59 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char	*str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if ((*c >= 'a' && *c <= 'z'))
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
	char str1[] = "asdfas";
	char str2[] = "rSDFadfS";
	char str3[] = "";

	printf("str lowercase: %d\n", ft_str_is_lowercase(str1));
	printf("str no lowercase: %d\n", ft_str_is_lowercase(str2));
	printf("str vacio: %d\n", ft_str_is_lowercase(str3));
}
*/
