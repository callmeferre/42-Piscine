/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 11:18:06 by acastril          #+#    #+#             */
/*   Updated: 2021/07/07 13:50:20 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char	*s1, char	*s2)
{
	while (*s1 != 0 && *s2 != 0 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "acb";
	char	str2[] = "acb";

	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
	printf("Return: %d\n", ft_strcmp(str1, str2));
	printf("strcmp returns: %d\n", strcmp(str1, str2));
}
*/
