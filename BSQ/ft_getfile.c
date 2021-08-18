/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getfile.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:38:28 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:38:30 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

char	*ft_getfile(void)
{
	char	buff;
	int		file;

	file = open("tempfile", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (file < 0)
		return (NULL);
	while (read(STDIN_FILENO, &buff, 1) != 0)
		write(file, &buff, 1);
	close (file);
	return ("tempfile");
}
