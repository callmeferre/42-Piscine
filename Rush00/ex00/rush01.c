 /* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 11:08:50 by acastril          #+#    #+#             */
/*   Updated: 2021/06/27 17:05:17 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	writerow(char first, char mid, char	last, int	x)
{
	int		col;

	col = 0;
	while (col++ < x)
	{
		if (col == 1)
		{
			ft_putchar(first);
		}
		else if (col == x)
		{
			 ft_putchar(last);
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
		if (row == 1)
		{
			writerow('/', '*', '\\', x);
		}
		else if (row == y)
		{
			writerow('\\', '*', '/', x);
		}
		else
			writerow('*', ' ', '*', x);
	}
}
