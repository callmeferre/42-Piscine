/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/04 13:11:47 by acastril          #+#    #+#             */
/*   Updated: 2021/08/04 15:43:05 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_get_len(int	n)
{
	size_t	len;

	len = 0;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_free_str(size_t len, char *str, int n, int neg)
{
	str[len] = '\0';
	while (len--)
	{
		str[len] = n % 10 + '0';
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	int		neg;
	size_t	len;
	char	*str;

	neg = 0;
	if (n < 0)
		neg = 1;
	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_get_len(n);
	len += neg;
	str = (char *)malloc(sizeof(char) * len);
	ft_free_str(len, str, n, neg);
	return (str);
}
