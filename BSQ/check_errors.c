#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int	ft_error_1(int	filas, char	*chars)
{
	if (chars[0] == chars[1] || chars[1] == chars[2] || chars[2] == chars[0])
		return (0);
	if (chars[2] < 32 || chars[2] == 127 || chars[2] == '\0')
		return (0);
	if (chars[1] < 32 || chars[1] == 127 || chars[1] == '\0')
		return (0);
	if (chars[0] < 32 || chars[0] == 127 || chars[0] == '\0')
		return (0);
	if ((filas != '\0') || 1 < filas || filas < 9)
		return (1);
	return (0);
}

/*int	ft_table_first(char	*chars, char **matrix)
{
	int	i;

	i = 0;
	while (**matrix != '\n')
	{
		if (**matrix == chars[0] || **matrix == chars[1])
			i++;
	}
	return (i);
}*/

int	ft_error_2(char	*chars, char	**matrix, int	len, char *file, int filas)
{
	int	len_prev;
	int	i;
	int	x;
	int	y;
	int	fopen;
	char c;

	len_prev = len;
	//i = ft_table_first(chars, matrix);
	i = 0;
	x = 0;
	fopen = open(file, O_RDONLY);
	while (read(fopen, &c, 1))
	{
		if (c == '\n')
			break ;
	}
	while (x < filas)
	{
		len = 0;
		y = 0;
		while (matrix[x][y] != '\n' && matrix[x][y] != '\0')
		{	
			printf("%c", matrix[x][y]);	
			if ((matrix[x][y] == chars[0] && x <= filas) || (matrix[x][y] == chars[1] && x <= filas))
				len++;				 
			else
				return (0);
			y++;
		}
		printf("\n");
		x++;
		printf("%d %d\n", len, len_prev);
	if (len != len_prev || len == 0)
			return (0);;
		len_prev = len;
	}
	close(fopen);
	return (len_prev);
}

