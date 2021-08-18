/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 09:40:53 by acastril          #+#    #+#             */
/*   Updated: 2021/07/08 19:23:32 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char	*dest, char	*src, unsigned int	n)
{
	unsigned int	i;

	i = 0;
	while (*(src + i) != 0 && i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	while (i < n)
	{
		dest[i] = 0;
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <unistd.h>
#include <string.h>
int main()
{
	int n = 6;
	char s1[] = "abc";
	char s2[] = "jhgjrerterttertert";
	printf("src: %s\n", s1);
	printf("dest: %s\n", s2);
	printf("n = 6\n");
	printf("la funcion hace: %s\n", strncpy(s2, s1, n));
	ft_strncpy(s2, s1, n);
	printf("src: %s\n", s1);
	printf("dest: %s\n", s2);
	return (0);
}
*/
