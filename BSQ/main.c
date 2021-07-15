#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int		ft_error_1(int	filas, char	*chars);
int		ft_error_2(char	*chars, char	**matrix, int	len, char *file, int filas);
void	ft_putchar(char	c);
int		ft_strcmp(char	*s1, char	*s2);
void	algoritmia(int ancho, int alto, char **matrix, char *chars);



char	**ft_matrix(char	**matrix, char	*file)
{
	int		x;
	int		y;
	char	c;
	int		fopen;

	y = 0;
	x = 0;
	fopen = open(file, O_RDONLY);
	while (read(fopen, &c, 1))
	{
		if (c == '\n')
			break ;
	}
	while (read(fopen, &c, 1))
	{
		if (c != '\n')
		{
			matrix[x][y] = c;
			y++;
		}
		else
		{
			matrix[x][y] = c;
			y = 0;
			x++;
		}
	}
	matrix[x][y] = '\0';
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
	int		i;
	int		x;
	int		width;
	char 	**matrix;

	i = 0;
	width = ft_width(fl);
	close(fl);
	//arr = malloc(sizeof(char *) * (filas));
	//matrix = (char **)malloc((width + 1)*sizeof(char *));
	matrix = malloc(sizeof(char *) * (filas + 1));
	x = 0;
	while (x < filas)
	{
		matrix[x] = malloc(sizeof(char) * (width + 1));
		x++;
	}
	matrix[x] = malloc(sizeof(char));
	
	matrix = ft_matrix(matrix, file);
	printf("%d \n", filas);
	if ((ft_error_2(chars, matrix, width, file, filas) != 0) && filas)
		printf("pasa");//algoritmia(width, filas, matrix, chars);
	else
		write(1, "map error\n", 11);
	free(matrix);
}

void	ft_read_first_line(char	*file)
{
	int		filas;
	char	c;
	char	chars[3];
	int		i;
	int	fopen;

	fopen = open(file, O_RDONLY);
	i = 0;
	read(fopen, &c, 1);
	filas = (int) c - '0';
	while (read(fopen, &c, 1))
	{
		if (c == '\n')
			break ;
		chars[i] = c;
		i++;
	}
	if (ft_error_1(filas, chars) != 0)
		ft_check_tab(fopen, filas, chars, file);
	else
		write(1, "map error\n", 11);
	printf("firstline\n");
}

int	main(int	argc, char	**argv)
{
	int	i;

	i = 1;
	if (argc > 1)
	{		
		while (i < argc)
		{
			ft_read_first_line(argv[i]);
			if (i != argc - 1)
				write(1, "\n", 1);
			i++;
		}
	}
	return (0);
}
