#include "ft_putchar.c"

void	rush(int x, int y)
{
	int 	i;
	int 	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if ((i == 0 && j == 0) || (i == 0 && j == x-1))
				ft_putchar('A');
			else if ((i == y-1 && j == x - 1)|| (i == y - 1 && j == 0))
				ft_putchar('C');
			else if (((j == 0 || j == x - 1) && (i >= 1 && i <= x - 1)) || ((i == 0 || i == y - 1) && (j >=1 && j <= x - 1)))
				ft_putchar('B');
			else
				ft_putchar(' ');
			
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int main()
{
	rush (15, 10);
	return (0);
}