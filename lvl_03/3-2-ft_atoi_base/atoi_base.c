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
