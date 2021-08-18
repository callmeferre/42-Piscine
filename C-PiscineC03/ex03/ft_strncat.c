/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 09:46:40 by acastril          #+#    #+#             */
/*   Updated: 2021/07/08 16:09:08 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char	*dest, char	*src, unsigned int	nb)
{
	unsigned int	i;
	char			*c;

	i = 0;
	c = dest;
	while (*c)
		c++;
	while (*src && i++ < nb)
		*c++ = *src++;
	*c = 0;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	s1[] = "abc";
	char	s2[] = "defg";
	char	s3[] = "abc";
	unsigned int	n;

	n = 3;
	ft_strncat(s1, s2, n);
	printf("Returns: %s\n", s1);
	printf("strcat: %s\n", strncat(s3, s2, n));
	return (0);
}
*/
