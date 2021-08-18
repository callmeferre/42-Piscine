/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:29:29 by acastril          #+#    #+#             */
/*   Updated: 2021/07/11 13:16:40 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int	nb)
{
	int	factor;

	factor = 1;
	if (nb < 0)
		return (0);
	while (nb)
	{
		factor *= nb;
		nb--;
	}
	return (factor);
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Factorial operation of: 4\n");
	printf("Expected result: 24\n");
	printf("Result: %d\n", ft_iterative_factorial(4));
	printf("------------\n");
	printf("Factorial operation of: 6\n");
	printf("Expected result: 720\n");
	printf("Result: %d\n", ft_iterative_factorial(6));
	printf("------------\n");
	printf("Factorial operation of: -4\n");
	printf("Expected result: 0\n");
	printf("Result: %d\n", ft_iterative_factorial(-4));
	printf("------------\n");
	printf("Factorial operation of: 12\n");
	printf("Expected result: 479001600\n");
	printf("Result: %d\n", ft_iterative_factorial(12));
	printf("------------\n");
}
*/	
