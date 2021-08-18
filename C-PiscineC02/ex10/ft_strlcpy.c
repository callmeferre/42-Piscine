/char * ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 11:51:17 by acastril          #+#    #+#             */
/*   Updated: 2021/07/07 13:51:25 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	char			*c;
	unsigned int	r;

	c = src;
	r = size;
	if (r != 0)
	{
		while (--r != 0)
		{
			*dest = *src;
			if (*dest == '\0')
				break ;
			dest++;
			src++;
		}
	}
	if (r == 0)
	{
		if (size != 0)
			*dest = '\0';
		while (*src != 0)
			src++;
	}
	return (src - c);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	dest[10];
	char	src[] = "illoooooo";
	unsigned int size = 4;

	printf("Antes del cambio: %s\n", dest);
	printf("Return: %d\n", ft_strlcpy(dest, src, size));
	printf("Despues del cambio: %s\n", dest);

	printf("========TEEEEST STRLCPY========\n");
	char	dest2[10];
	char	src2[] = "illoooooo";
	unsigned int size2 = 4;

	printf("Antes del cambio: %s\n", dest2);
	printf("Return: %lu\n", strlcpy(dest2, src2, size2));
	printf("Despues del cambio: %s\n", dest2);
	return (0);
}
*/
