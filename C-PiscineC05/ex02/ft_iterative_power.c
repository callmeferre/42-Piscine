/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 11:13:47 by acastril          #+#    #+#             */
/*   Updated: 2021/07/11 12:33:11 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int	nb, int	power)
{
	int	n;

	n = 1;
	if (power < 0)
		return (0);
	while (power > 0)
	{
		n *= nb;
		power--;
	}
	return (n);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Power 4 of: 4\n");
	printf("Expected result: 256\n");
	printf("Result: %d\n", ft_iterative_power(4, 4));
	printf("------------\n");
	printf("Power 9 of: 6\n");
	printf("Expected result: 10077696\n");
	printf("Result: %d\n", ft_iterative_power(6, 9));
	printf("------------\n");
	printf("Power 5 of: -4\n");
	printf("Expected result: -1024\n");
	printf("Result: %d\n", ft_iterative_power(-4, 5));
	printf("------------\n");
	printf("Power -5 of: 4\n");
	printf("Expected result: 0\n");
	printf("Result: %d\n", ft_iterative_power(4, -5));
	printf("------------\n");
	printf("Power 2 of: 42\n");
	printf("Expected result: 1764\n");
	printf("Result: %d\n", ft_iterative_power(42, 2));
	printf("------------\n");
	printf("Power 0 of: 0\n");
	printf("Expected result: 1\n");
	printf("Result: %d\n", ft_iterative_power(0, 0));
	printf("------------\n");
}
*/