/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 16:11:47 by acastril          #+#    #+#             */
/*   Updated: 2021/07/01 16:57:55 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if (*c >= 'A' && *c <= 'Z')
			*c = *c + 32;
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
	printf("str en minusculas: %s\n", ft_strlowcase(str));
}
*/
