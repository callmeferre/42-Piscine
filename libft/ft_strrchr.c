/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/29 12:28:54 by acastril          #+#    #+#             */
/*   Updated: 2021/07/29 15:27:27 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int	c)
{
	int	i;

	i = ft_strlen(str);
	while (i > 0)
	{
		if (str[i] == c)
			return ((char *)str);
		i--;
	}
	if (str[i] == c)
		return ((char *)str);
	return (0);
}
