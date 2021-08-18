/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 10:43:35 by acastril          #+#    #+#             */
/*   Updated: 2021/07/11 12:29:15 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int	nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Factorial operation of: 4\n");
	printf("Expected result: 24\n");
	printf("Result: %d\n", ft_recursive_factorial(4));
	printf("------------\n");
	printf("Factorial operation of: 6\n");
	printf("Expected result: 720\n");
	printf("Result: %d\n", ft_recursive_factorial(6));
	printf("------------\n");
	printf("Factorial operation of: -4\n");
	printf("Expected result: 0\n");
	printf("Result: %d\n", ft_recursive_factorial(-4));
	printf("------------\n");
	printf("Factorial operation of: 12\n");
	printf("Expected result: 479001600\n");
	printf("Result: %d\n", ft_recursive_factorial(12));
	printf("------------\n");
}
*/