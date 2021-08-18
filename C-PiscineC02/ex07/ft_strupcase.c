/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 14:01:23 by acastril          #+#    #+#             */
/*   Updated: 2021/07/06 13:00:19 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char	*str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if (*c >= 'a' && *c <= 'z')
			*c = *c - 32;
		c++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char str[] = "igjeoi3oho8735hGGEg38u ug";

	printf("str normal: %s\n", str);
	printf("str en mayusculas: %s\n", ft_strupcase(str));
}
*/
