/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 10:01:18 by acastril          #+#    #+#             */
/*   Updated: 2021/07/06 11:02:54 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char	*str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if ((*c >= 'A' && *c <= 'Z') || (*c >= 'a' && *c <= 'z'))
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
	char str1[] = "wuiofhvmv";
	char str2[] = "rieuh74k-,";
	char str3[] = "";

	printf("str alfabetico: %d\n", ft_str_is_alpha(str1));
	printf("str no alfabetico: %d\n", ft_str_is_alpha(str2));
	printf("str vacio: %d\n", ft_str_is_alpha(str3));
}
*/
