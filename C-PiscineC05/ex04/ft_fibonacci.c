/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:20:47 by acastril          #+#    #+#             */
/*   Updated: 2021/07/12 09:29:58 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int	index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

/*
#include <stdio.h>

int	main(void)
{
    printf("Fibonacci 0 to 8: 0 1 1 2 3 5 8 13 21\n");
    printf("Function returns: ");
	printf("%d ", ft_fibonacci(0));
    printf("%d ", ft_fibonacci(1));
    printf("%d ", ft_fibonacci(2));
    printf("%d ", ft_fibonacci(3));
    printf("%d ", ft_fibonacci(4));
    printf("%d ", ft_fibonacci(5));
    printf("%d ", ft_fibonacci(6));
    printf("%d ", ft_fibonacci(7));
    printf("%d ", ft_fibonacci(8));
    printf("\n");

	return (0);
}
*/