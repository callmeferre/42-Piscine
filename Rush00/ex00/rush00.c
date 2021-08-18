/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/26 12:26:09 by acastril          #+#    #+#             */
/*   Updated: 2021/06/27 17:03:34 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	writerow(char first_last, char mid, int	x)
{
	int		col;

	col = 0;
	while (col++ < x)
	{
		if (col == 1 || col == x)
		{
			ft_putchar(first_last);
		}
		else
			ft_putchar(mid);
	}
	ft_putchar('\n');
}

void	rush(int	x, int	y)
{
	int	row;

	row = 0;
	while (row++ < y)
	{
		if (row == 1 || row == y)
		{
			writerow('o', '-', x);
		}
		else
			writerow('|', ' ', x);
	}
}
