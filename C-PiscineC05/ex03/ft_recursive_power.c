/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 12:37:10 by acastril          #+#    #+#             */
/*   Updated: 2021/07/12 13:29:36 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int	nb, int	power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*
#include <stdio.h>

int	main(void)
{
	printf("Power 4 of: 4\n");
	printf("Expected result: 256\n");
	printf("Result: %d\n", ft_recursive_power(4, 4));
	printf("------------\n");
	printf("Power 9 of: 6\n");
	printf("Expected result: 10077696\n");
	printf("Result: %d\n", ft_recursive_power(6, 9));
	printf("------------\n");
	printf("Power 5 of: -4\n");
	printf("Expected result: -1024\n");
	printf("Result: %d\n", ft_recursive_power(-4, 5));
	printf("------------\n");
	printf("Power -5 of: 4\n");
	printf("Expected result: 0\n");
	printf("Result: %d\n", ft_recursive_power(4, -5));
	printf("------------\n");
	printf("Power 2 of: 42\n");
	printf("Expected result: 1764\n");
	printf("Result: %d\n", ft_recursive_power(42, 2));
	printf("------------\n");
	printf("Power 0 of: 0\n");
	printf("Expected result: 1\n");
	printf("Result: %d\n", ft_recursive_power(0, 0));
	printf("------------\n");
}
*/
