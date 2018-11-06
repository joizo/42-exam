/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 14:24:39 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/11/06 22:58:44 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	brainfuck(char *str)
{
	char *ptr;

	ptr = (char*)malloc(sizeof(char) * 2048);
	while (*str)
	{
		if (*str == '>')
			ptr++;
		else if (*str == '<')
			ptr--;
		else if (*str == '+')
			(*ptr)++;
		else if (*str == '-')
			(*ptr)--;
		else if (*str == '[' && *ptr == 0)
			while (*str != ']')
				str++;
		else if (*str == ']' && *ptr != 0)
			while (*str != '[')
				str--;
		else if (*str == '.')
			write(1, ptr, 1);
		str++;
	}
}

int		main(int a_c, char **a_v)
{
	if (a_c == 2)
		brainfuck(a_v[1]);
	write(1, "\n", 1);
	return (0);
}
