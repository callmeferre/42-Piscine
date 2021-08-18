/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 12:36:45 by acastril          #+#    #+#             */
/*   Updated: 2021/07/08 16:32:43 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char	*dest, char	*src, unsigned int	size)
{
	unsigned int	i;
	char			*c;

	i = size;
	c = src;
	if (i)
	{
		while (*dest)
			dest++;
		while (--i)
		{
			*dest++ = *src++;
		}
	}
	if (i == 0)
	{
		if (size != 0)
			*dest = '\0';
		while (*src != 0)
			src++;
	}
	return (src - c);
}
