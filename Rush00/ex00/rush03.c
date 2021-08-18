/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 10:54:07 by acastril          #+#    #+#             */
/*   Updated: 2021/06/27 17:10:19 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char	c);

void	writerow(char first, char mid, char	last, int	x)
{
	int		col;

	col = 0;
	while (col++ < x)
	{
		if (col == 1 || col == x)
		{
			ft_putchar(first);
		}
		else if
		{
			 ft_putchar(last);
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
			writerow('A', '-', 'C', x);
		}
		else
			writerow('B', ' ', 'B', x);
	}
}
