/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 18:09:49 by acastril          #+#    #+#             */
/*   Updated: 2021/06/29 18:14:34 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int	a, int	b, int	*div, int	*mod)
{
	*div = a / b;
	*mod = a % b;
}