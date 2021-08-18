/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:01:01 by acastril          #+#    #+#             */
/*   Updated: 2021/07/12 11:29:37 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Prime = 1, no prime = 0\n");
	printf("0 = %d (expected 0)\n", ft_is_prime(0));
	printf("2 = %d (expected 1)\n", ft_is_prime(2));
	printf("7 = %d (expected 1)\n", ft_is_prime(7));
	printf("42 = %d (expected 0)\n", ft_is_prime(42));
	printf("89 = %d (expected 1)\n", ft_is_prime(89));
	return (0);
}
*/