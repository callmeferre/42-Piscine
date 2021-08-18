/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 15:19:24 by acastril          #+#    #+#             */
/*   Updated: 2021/07/07 13:01:21 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char	*dest, char *src)
{
	int	i;

	i = 0;
	while (*(src + i) != 0)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = 0;
	return (dest);
}


int main(void)
{
	char test[] = "heyyyyyyyyyyyyyy";
	char test2[] = "letstry";
	char *test3;

	test3 = ft_strcpy(test, test2);
	printf("%s", test3);
	return (0);
}
