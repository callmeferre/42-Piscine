void	rellena(char **matrix, int candidato_x, int candidato_y, int tamano, char lleno)
{
	int x;
	int y;

	y = candidato_y;
	while(y < candidato_y + tamano)
	{
		x = candidato_x;
		while(x < candidato_x + tamano)
		{
			matrix[x][y] = lleno;
			x++;
		}
		y++;
	}
}
