/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 15:40:53 by acastril          #+#    #+#             */
/*   Updated: 2021/07/11 11:06:27 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char	*dest, char	*src)
{
	char	*d;

	d = dest;
	while (*d != 0)
		d++;
	while (*src != 0)
		*d++ = *src++;
	*d = 0;
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "abc";
	char	str2[] = "def";
	char	*i;

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);	
	i = ft_strcat(str1, str2);
	printf("Returns: %s\n", str1);
	return (0);
}
*/
