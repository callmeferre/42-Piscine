/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 13:10:10 by acastril          #+#    #+#             */
/*   Updated: 2021/07/29 14:33:11 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*t_dest;
	unsigned char	*t_src;

	if (dest < src)
	{
		t_dest = (unsigned char *)dest;
		t_src = (unsigned char *)src;
		while (len--)
		{
			*t_dest++ = *t_src;
		}		
	}
	if (dest > src)
	{
		t_dest = (unsigned char *)dest + (len - 1);
		t_src = (unsigned char *)src + (len - 1);
		while (len--)
		{
			*t_dest-- = *t_src--;
		}
	}
	return (dest);
}
