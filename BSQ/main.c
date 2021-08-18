/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mruiz-ja <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 13:35:00 by mruiz-ja          #+#    #+#             */
/*   Updated: 2021/07/15 13:35:07 by mruiz-ja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int		ft_error_1(int	filas, char	*chars);
int		ft_error_2(char	*chars, char	**matrix, int	len, int filas);
void	ft_putchar(char	c);
int		ft_strcmp(char	*s1, char	*s2);
void	algoritmia(int ancho, int alto, char **matrix, char *chars);
int		ft_filas(char	*chars, int	i, char *first_line);
char	*ft_getfile(void);
void	ft_skip_first(char	**matrix, char *file, int	fopen);

char	**ft_matrix(char	**matrix, char	*file)
{
	int		col;
	int		row;
	char	c;
	int		fopen;

	col = 0;
	row = 0;
	fopen = open(file, O_RDONLY);
	while (read(fopen, &c, 1) && c != '\n')
		;
	while (read(fopen, &c, 1))
	{
		if (c != '\n')
			matrix[row][col++] = c;
		else
		{
			matrix[row++][col] = c;
			col = 0;
		}
	}
	matrix[row][col] = '\0';
	close(fopen);
	return (matrix);
}

int	ft_width(int	fl)
{
	char	c;
	int		i;

	i = 0;
	while (read(fl, &c, 1))
	{
		if (c == '\n')
			break ;
		i++;
	}
	return (i);
}

void	ft_check_tab(int	fl, int	filas, char	*chars, char	*file)
{
	int		row;
	int		width;
	char	**matrix;

	width = ft_width(fl);
	close(fl);
	matrix = malloc(sizeof(char *) * (filas + 1));
	row = 0;
	while (row < filas)
	{
		matrix[row] = malloc(sizeof(char) * (width + 1));
		row++;
	}
	matrix[row] = malloc(sizeof(char));
	matrix = ft_matrix(matrix, file);
	if ((ft_error_2(chars, matrix, width, filas) != 0) && filas)
		algoritmia(width, filas, matrix, chars);
	else
		write(1, "map error\n", 11);
	free(matrix);
}

void	ft_read_first_line(char	*file, int	fopen)
{
	int		filas;
	char	c;
	char	first_line[50];
	char	chars[3];
	int		i;

	fopen = open(file, O_RDONLY);
	i = 0;
	while (read(fopen, &c, 1))
	{
		if (c == '\n')
			break ;
		first_line[i] = c;
		i++;
	}
	filas = ft_filas(chars, i, first_line);
	if (ft_error_1(filas, chars) != 0)
		ft_check_tab(fopen, filas, chars, file);
	else
		write(1, "map error\n", 11);
}

int	main(int	argc, char	**argv)
{
	int	i;
	int	fopen;

	i = 1;
	fopen = 0;
	if (argc > 1)
	{		
		while (i < argc)
		{
			ft_read_first_line(argv[i], fopen);
			if (i != argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	else
	{
		ft_read_first_line(ft_getfile(), fopen);
	}
	return (0);
}
