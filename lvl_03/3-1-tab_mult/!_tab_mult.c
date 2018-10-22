/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 10:04:27 by exam              #+#    #+#             */
/*   Updated: 2018/07/03 12:08:28 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h> // !!!!!!!
#include <stdio.h>  // !!!!!!!!

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int minus;

	i = 0;
	res = 0;
	minus = 1;
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
		res = res + (int)str[i] - '0';
		i++;
	}
	return (res * minus);
}

char *ft_itoa_m(int nb)
{
	while (nb != 0)
		ft_itoa_m (nb % 10)
}

int main (int a_c, char **a_v)
{
	char  i;
	char *n;

	i = 48;
	n = NULL;
	if (a_c == 2)
	{
		while (i++ < 57)
			{
				write (1, &i, 1);
				write (1, " x ", 3);
				write (1, a_v[1], 1);
				write (1, " = ", 3);
				n = ft_itoa_m(ft_atoi(i) * ft_atoi(a_v[1]));
				write (1, "\n", 1);
				//printf("%d x %s = %d\n", i, a_v[1], i * ft_atoi(a_v[1]));
			}
	}
	write (1, "\n", 1);
	return (0);
}
