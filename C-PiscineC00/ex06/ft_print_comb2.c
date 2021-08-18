/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/25 13:41:36 by acastril          #+#    #+#             */
/*   Updated: 2021/06/29 13:18:05 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	ft_write(int n1, int n2)
{
	ft_putchar(n1 / 10 + '0');
	ft_putchar(n1 % 10 + '0');
	ft_putchar(' ');
	ft_putchar(n2 / 10 + '0');
	ft_putchar(n2 % 10 + '0');
	if (n1 < 98 || n2 < 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0 - 1;
	while (n1++ < 98)
	{
		n2 = n1;
		while (n2++ < 99)
		{
			ft_write(n1, n2);
		}
	}
}
