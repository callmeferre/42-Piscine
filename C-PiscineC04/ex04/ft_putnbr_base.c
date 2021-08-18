/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/09 10:47:11 by acastril          #+#    #+#             */
/*   Updated: 2021/07/12 10:00:38 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	c)
{
	write(1, &c, 1);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

int	ft_error_check(char	*base, int	len)
{
	int	i;
	int	j;

	i = 0;
	if (*base == 0 || len <= 1)
		return (0);
	while (base[i])
	{
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base [j])
				return (0);
			j++;
		}
		if (base[i] == '-' || base[i] == '+')
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int	nbr, char	*base)
{
	unsigned int	len;
	unsigned int	n;

	len = ft_strlen(base);
	if (ft_error_check(base, len) == 0)
		return ;
	if (nbr < 0)
	{
		n = (unsigned int) -nbr;
		ft_putchar('-');
	}
	else
		n = (unsigned int) nbr;
	if (n < len)
	{
		ft_putchar(base[n]);
	}
	else
	{
		ft_putnbr_base(n / len, base);
		ft_putnbr_base(n % len, base);
	}
}
