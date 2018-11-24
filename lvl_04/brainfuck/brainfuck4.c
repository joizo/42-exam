/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck4.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 22:57:14 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/11/12 23:12:23 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void brainfuck(char *str)
{
    char *ptr;

    ptr = (char *)malloc(sizeof(char) * 2048);
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

int main(int a_c, char **a_v)
{
    if (a_c == 2)
        brainfuck(a_v[1]);
    else
        write(1, "\n", 1);
    return(0);
    }