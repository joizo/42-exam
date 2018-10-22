#include <unistd.h>
#include <stdlib.h>

void ft_double_mass(int i, int j)
{
	//char **mass;
	int ii;
	int jj;

	// mass = NULL;
	// jj = 0;

	ii = 0; //столбец
	while (ii < i)
	{
		jj = 0; // обнуляем строку
		while (jj < j)
		{
			write(1, "@", 1);
			jj++;
		}
		write(1, "\n", 1);
		ii++;
	}
}

int main (int a_c, char **a_v)
{
	if (a_c > 1)
	{
		ft_double_mass(atoi(a_v[1]), atoi(a_v[2]));
		return (0);
	}
}