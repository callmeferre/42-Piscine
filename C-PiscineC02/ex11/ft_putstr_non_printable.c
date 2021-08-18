/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 10:54:51 by acastril          #+#    #+#             */
/*   Updated: 2021/07/06 11:12:56 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

void	write_hex(char	c)
{
	char	hex1;
	char	hex2;

	if (c < 0)
	{
		c = 256 + c;
	}
	hex1 = c / 16;
	hex2 = c % 16;
	ft_putchar('\\');
	if (hex1 < 10)
		ft_putchar(hex1 + '0');
	else
		ft_putchar(hex1 + 87);
	if (hex2 < 10)
		ft_putchar(hex2 + '0');
	else
		ft_putchar(hex2 + 87);
}

void	ft_putstr_non_printable(char	*str)
{
	while (*str != 0)
	{
		if (*str < 32 || *str == 127)
			write_hex(*str);
		else
			ft_putchar(*str);
		str++;
	}
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Coucou\ntu \tvas\n bien ?";

	printf("%s\n", str);
	ft_putstr_non_printable(str);
	printf("\n");
}
*/
