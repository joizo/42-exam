// Assignment name  : print_hex
// Expected files   : print_hex.c
// Allowed functions: write
// --------------------------------------------------------------------------------

// Write a program that takes a positive (or zero) number expressed in base 10,
// and displays it in base 16 (lowercase letters) followed by a newline.

// If the number of parameters is not 1, the program displays a newline.

// Examples:

// $> ./print_hex "10" | cat -e
// a$
// $> ./print_hex "255" | cat -e
// ff$
// $> ./print_hex "5156454" | cat -e
// 4eae66$
// $> ./print_hex | cat -e
// $

#include <unistd.h>

int	ft_atoi(const char *str)
{
	int i;
	int minus;
	int res;

	i = 0;
	minus = 1;
	res = 0;
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == ' ' || str[i] == '\r')
		i++;

	if (str[i] == '-')
	 		minus = -1;

	if (str[i] == '-' || str[i] == '+')
		i++;
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10;
		res = res + ((int)str[i] - '0');
		i++;
	}
	return (res * minus);
}

// void print_hex(int p)
// {
// 	if (p >= 16)
// 		print_hex(p / 16); //рекурсия нужна чтобы вывести число в обратном порядке
// 	p = p % 16;
// 	p = p + ((p < 10) ? '0' : 'a' - 10); //переводим число в "char" из ascii
// 	write (1, &p, 1);
// }

void	print_hex(int p)
{
	char *str;

	str = "0123456789abcdef";
	if (p >= 16)
		print_hex(p / 16);
	write(1, &str[p % 16], 1);
}

int main(int a_c, char **a_v)
{
	if(a_c == 2)
		print_hex(ft_atoi(a_v[1]));
		write(1, "\n", 1); 
	return (0);
}
