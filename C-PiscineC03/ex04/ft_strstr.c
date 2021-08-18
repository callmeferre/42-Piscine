/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 10:58:50 by acastril          #+#    #+#             */
/*   Updated: 2021/07/08 16:30:38 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char	*str, char	*to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (*to_find == 0)
		return (str);
	while (*(str + i) != 0)
	{
		while (*(to_find + j) == *(str + i + j))
		{
			return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}

/* 
#include <unistd.h>
 #include <stdio.h>

int	main(void)
{
	char	*str;
	char	*to_find;

	str = "Hello world! It's me!";
	to_find = "world";
	printf("Phrase is '%s' --- word to find is '%s'", str, to_find);
	printf("--- and found --> '%s'", ft_strstr(str, to_find));
	return (0);
}
*/
