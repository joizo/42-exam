/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck3.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/08 21:37:30 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/11/09 00:00:19 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	chekstr(char *str)
{
	while (*str)
	{
		if (*str == '\\' && *(str + 1) == 'n')
		{
			write(1, "\n", 1);
			str++;
		}
		else if (*str != '>' && *str != '<' && *str != '+' && *str != '-' &&
		*str != '[' && *str != ']' && *str != '.')
			write(1, str, 1);
		str++;
	}
}

void	brainfuck(char *str)
{
	char	*ptr;
	int		i;

	i = 0;
	ptr = (char *)malloc(sizeof(char) * 2048);
	while (*str && i++ < 4096)
	{
		if (*str == '>')
			ptr++;
		if (*str == '<')
			ptr--;
		if (*str == '+')
			(*ptr)++;
		if (*str == '-')
			(*ptr)--;
		if (*str == '[' && *ptr == 0)
			while (*str != ']')
				str++;
		if (*str == ']' && *ptr != 0)
			while (*str != '[')
				str--;
		if (*str == '.')
			write(1, ptr, 1);
		str++;
	}
}

int		strorfuck(char *str)
{
	int chek;

	chek = 0;
	while (*str)
	{
		if (*str != '>' && *str != '<' && *str != '+' && *str != '-' &&
		*str != '[' && *str != ']' && *str != '.')
			chek = 1;
		str++;
	}
	return (chek);
}

int		main(int a_c, char **a_v)
{
	if (a_c == 2)
	{
		if (strorfuck(a_v[1]) == 1)
			chekstr(a_v[1]);
		else
			brainfuck(a_v[1]);
	}
	else
		write(1, "\n", 1);
	return (0);
}
