/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/23 01:44:57 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/10/23 01:45:00 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void    ft_putstr(char *str)
{
    while(*str)
    {
        ft_putchar(*str);
        str++;
    }
}

void    ft_putnbr(int nb)
{
    char c;

    if (nb < 0)
    {
        ft_putchar('-');
        nb = nb * (-1);
    }
    if (nb < 10)
    {
        c = nb + 48;
       ft_putchar(c);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}

int ft_atoi(char *str)
{
    int i;
    int minus;
    int num;

    i = 0;
    minus = 1;
    num = 0;
    while (str[i] <= ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            minus *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9')
    {
        num = num * 10 + str[i] - 48;
        i++;
    }
    return (num * minus);
}

void ft_tab_multi(int num)
{
    int i;
    i = 1;
    while (i <= 9)
    {
        ft_putnbr(i);
	    ft_putstr(" x ");
		ft_putnbr(num);
		ft_putstr(" = ");
        ft_putnbr(num * i);
		ft_putchar('\n');
        i++;
    }
}

int main (int a_c, char **a_v)
{
    if (a_c == 2)
        ft_tab_multi(ft_atoi(a_v[1]));
    else
        ft_putchar('\n');
    return (0);
}