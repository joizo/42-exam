#include <stdio.h>
#include <stdlib.h>

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

// int main (void)
// {
	
// 		printf("%d\n", ft_atoi("48"));
// 		return (0);
// }

int main (int a_c, char **a_v)
{
	if (a_c == 2)
		printf("%d\n", ft_atoi(a_v[1]));
		printf("%d\n", atoi(a_v[1]));

		return (0);
}