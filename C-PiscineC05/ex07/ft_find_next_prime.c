/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:54:44 by acastril          #+#    #+#             */
/*   Updated: 2021/07/12 12:00:43 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find(int	nb)
{
	int	i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (ft_find(nb + 1));
		i++;
	}
	return (nb);
}

int	ft_find_next_prime(int	nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
			return (ft_find(nb));
		i++;
	}
	return (nb);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Nex prime:\n");
	printf("0 = %d (expected 0)\n", ft_find_next_prime(1));
	printf("2 = %d (expected 2)\n", ft_find_next_prime(2));
	printf("7 = %d (expected 7)\n", ft_find_next_prime(7));
	printf("42 = %d (expected 43)\n", ft_find_next_prime(42));
	printf("89 = %d (expected 89)\n", ft_find_next_prime(89));
	return (0);
}
*/