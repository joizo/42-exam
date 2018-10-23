/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 23:01:54 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/10/22 23:01:56 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putstr(char *str)
{
    while(*str)
    {
        write(1, &*str, 1);
        str++;
    }
}

void    ft_putnbr(int nb)
{
    char c;

    if (nb == -2147483648)
    {
        ft_putstr("-2147483648");
        return ;
    }
    if (nb < 0)
    {
        write(1, "-", 1);
        nb = nb * (-1);
    }
    if (nb < 10)
    {
        c = nb + 48;
        write(1, &c, 1);
    }
    else
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
}