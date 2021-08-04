/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:53:51 by acastril          #+#    #+#             */
/*   Updated: 2021/07/30 10:26:01 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t len)
{
	char	*c;
	size_t	r;

	c = src;
	r = len;
	if (len != 0)
	{
		while (--r != 0)
		{
			*dest = *src;
			if (*dest == '\0')
				break ;
			dest++;
			src++;
		}
	}
	if (r == 0)
	{
		if (len != 0)
			*dest = '\0';
		while (*src != 0)
			src++;
	}
	return (src - c);
}
