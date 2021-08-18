/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:53:16 by acastril          #+#    #+#             */
/*   Updated: 2021/06/30 13:08:41 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	len;
	int	rev;

	len = 0;
	while (len < size)
	{
		rev = tab[len];
		tab[len] = tab[size - 1];
		tab[size - 1] = rev;
		len ++;
		size--;
	}
}
