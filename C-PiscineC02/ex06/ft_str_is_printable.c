/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 13:56:19 by acastril          #+#    #+#             */
/*   Updated: 2021/07/01 16:09:44 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char	*str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if ((*c >= 32 && *c <= 126))
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
	char str1[] = 45;
	char str2[] = 3;
	char str3[] = "";

	printf("str printable: %d\n", ft_str_is_printable(str1));
	printf("str no printable: %d\n", ft_str_is_printable(str2));
	printf("str vacio: %d\n", ft_str_is_printable(str3));
}
*/
