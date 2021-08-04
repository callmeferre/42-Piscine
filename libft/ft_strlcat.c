/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/28 17:51:00 by acastril          #+#    #+#             */
/*   Updated: 2021/07/30 10:25:38 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t len)
{
	size_t	i;
	char	*c;

	i = len;
	c = (char *)src;
	if (i)
	{
		while (*dest)
			dest++;
		while (--i)
		{
			*dest++ = *(char *)src++;
		}
	}
	if (i == 0)
	{
		if (len != 0)
			*dest = '\0';
		while (*src != 0)
			src++;
	}
	return (dest - c);
}
