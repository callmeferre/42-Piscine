/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 10:26:04 by acastril          #+#    #+#             */
/*   Updated: 2021/07/01 13:39:53 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char	*str)
{
	char	len;

	len = 0;
	while (*str != 0)
	{
		len++;
		str++;
	}
	return (len);
}
