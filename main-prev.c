#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
void ft_putchar (char c)
{
    write (1, &c, 1);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i]) == (s2[i]))
	{
		s1++;
		s2++;
	}
	return (s1[i] - s2[i]);
}

void ft_read_first_line(int fopen)
{
    int filas;
    char x;
    char vacio;
    char obstaculo;
    char lleno;

    read(fopen, &x, 1);
    filas = (int) x;
    printf("%d\n", filas - '0');
    read (fopen, &vacio,1);
    printf("%c\n", vacio);
    read (fopen, &obstaculo,1);
    printf("%c\n", obstaculo);
    read (fopen, &lleno,1);
    printf("%c\n", lleno);
    read (fopen, &x,1);
}

int ft_check_table(int  fopen, char *cont)
{
    char *c;
    int j;
    int i;
    
    i = 0;
    c = NULL;
    printf("init");
    while (read(fopen, c, 1))
        {
            
            j = 0;
            while ((ft_strcmp(c, "\n") > 0) && read(fopen, c, 1))
            {
                printf("init");
                printf("c: %c\n", *c);
                printf("paso por while i: %d\n", i);
                printf("paso por while j: %d\n", j);
                *cont = *c;
                
                cont++;
                j++;
            }
            i++;
        }
    printf("cont tiene: %c\n", *cont);
    printf("i: %d\n", i);
    printf("j: %d\n", j);
    return (1);
}

void    imprimir (int imax, int jmax,char **arr)
{
    int i;
    int j;

    i = 1; 
    while (i != imax)
    {
        j = 0;
        while (j != jmax)
        {
            ft_putchar(arr[i][j]);
            j++;
        }
        i++;
    }
}

int main (int argc, char **argv)
{
    char    *cont;
    int fopen;

    cont = 0;
    if (argc > 1)
    {
        
        fopen = open(argv[1], O_RDONLY);
        printf("abril");
        ft_read_first_line(fopen);
        if (ft_check_table(fopen, cont) != 0)
        {
            printf("check");
        }
        close(fopen);
    }
   // imprimir(i, j, arr);
    return(0);
    
}