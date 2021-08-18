/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:36:12 by acastril          #+#    #+#             */
/*   Updated: 2021/07/12 11:00:00 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_calc_root(int	nb, int n)
{
	if (n * n == nb)
		return (n);
	if (n >= 46341)
		return (0);
	return (ft_calc_root(nb, n + 1));
}

int	ft_sqrt(int	nb)
{
	if (nb <= 0)
		return (0);
	return (ft_calc_root(nb, 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Square root of: 9\n");
	printf("Expected result: 3\n");
	printf("Result: %d\n", ft_sqrt(9));
	printf("------------\n");
	printf("Square root of: 25\n");
	printf("Expected result: 5\n");
	printf("Result: %d\n", ft_sqrt(25));
	printf("------------\n");
	printf("Square root of: 42\n");
	printf("Expected result: 0\n");
	printf("Result: %d\n", ft_sqrt(42));
	printf("------------\n");
}
*/
