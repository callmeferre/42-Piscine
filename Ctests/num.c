#include <unistd.h>

void	num(void)
{
	int	num;

	num = 93;
	while(num < 123)
	{
		write(1, &num, 1);
	}
}

int	main(void)
{
	num();
	return (0); 
}
