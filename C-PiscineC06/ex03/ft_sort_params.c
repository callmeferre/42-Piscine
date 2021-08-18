/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acastril <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 15:00:49 by acastril          #+#    #+#             */
/*   Updated: 2021/07/12 15:27:46 by acastril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
	{
		i++;
	}
	return ((int)s1[i] - (int)s2[i]);
}

void	ft_print(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		while (*argv[i])
		{
			write(1, argv[i], 1);
			argv[i]++;
		}
		write (1, "\n", 1);
		i++;
	}
}

int	main(int	argc, char	**argv)
{
	int		i;
	char	*holder;

	i = 1;
	while (i < argc - 1)
	{
		if (ft_strcmp(argv[i], argv [i + 1]) > 0)
		{
			holder = argv[i];
			argv[i] = argv[i + 1];
			argv[i + 1] = holder;
			i = 0;
		}
		i++;
	}
	ft_print(argc, argv);
	return (0);
}
