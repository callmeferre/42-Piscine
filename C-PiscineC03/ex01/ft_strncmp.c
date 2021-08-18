/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 12:16:12 by acastril          #+#    #+#             */
/*   Updated: 2021/07/06 16:46:54 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char	*s1, char	*s2, unsigned int	n)
{
	while (n != 0 && *s1 != 0 && *s2 != 0 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	if (n)
		return (*s1 - *s2);
	else
		return (0);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "abcdefg";
	char	str2[] = "abcdxyz";
	unsigned int	n;

	n = 4;
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("n: %d\n", n);
	printf("Return: %d\n", ft_strncmp(str1, str2, n));
	printf("strncmp returns: %d\n", strncmp(str1, str2, n));
}
*/
