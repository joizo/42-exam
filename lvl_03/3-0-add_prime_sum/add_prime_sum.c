
// Assignment name  : add_prime_sum
// Expected files   : add_prime_sum.c
// Allowed functions: write, exit
// --------------------------------------------------------------------------------

// Write a program that takes a positive integer as argument and displays the sum
// of all prime numbers inferior or equal to it followed by a newline.

// If the number of arguments is not 1, or the argument is not a positive number,
// just display 0 followed by a newline.

// Yes, the examples are right.

// Examples:

// $>./add_prime_sum 5
// 10
// $>./add_prime_sum 7 | cat -e
// 17$
// $>./add_prime_sum | cat -e
// 0$
// $>

#include <stdlib.h>
#include <unistd.h>

int ft_atoi(const char *str)
{
	int i;
	int minus;
	int res;

	i = 0;
	minus = 1;
	res = 0;

	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') 
		|| (str[i] == '\f') || (str[i] == ' ') || (str[i] == '\r'))
		i++;

	if (str[i] == '-')
		minus = -1;

	if ((str[i] == '+') || (str[i] == '-'))
		i++;
	while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10;
			res = res + ((int)str[i] - '0');
			i++;
		}
	return (res * minus);
}

void ft_putnbr(int nb)
{
	char c;

	if (nb < 0)
	{
		nb = nb * (-1);
		write(1, "-", 1);
	}
	if (nb < 10)
	{
		c = nb + '0';
		write(1, &c, 1);
	}
	else
	{
		ft_putnbr(nb / 10); //"42" отделяем 4 от 42 -> "4"
		ft_putnbr(nb % 10); //"42" отделяем 2 от 42 -> "2"
	}
}
