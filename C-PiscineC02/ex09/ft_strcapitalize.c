/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/02 09:37:16 by acastril          #+#    #+#             */
/*   Updated: 2021/07/05 17:44:53 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char	*str)
{
	char	*c;

	c = str;
	while (*c != 0)
	{
		if (*c >= 'A' && *c <= 'Z')
			*c = *c + 32;
		c++;
	}
	return (str);
}

char	*ft_strcapitalize(char	*str)
{
	char	*c;

	c = ft_strlowcase(str);
	while (*c != 0)
	{
		if (*c >= 'a' && *c <= 'z')
		{
			if (*(c - 1) < '0' || *(c - 1) > '9')
			{
				if (*(c - 1) < 'A' || *(c - 1) > 'Z')
				{
					if (*(c - 1) < 'a' || *(c - 1) > 'z')
						*c = *c - 32;
				}
			}
		}
		c++;
	}
	return (str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "salut, coMMent TU vas ? 42moTs quarAntAe-deux; ciNqUaNtE+et+un";

	printf("str: %s\n", str);
	printf("str capitalized: %s\n", ft_strcapitalize(str));
}
*/
