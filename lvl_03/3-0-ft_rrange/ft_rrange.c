/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rrange.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/30 22:54:43 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/06/30 22:54:51 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Assignment name  : ft_rrange
// Expected files   : ft_rrange.c
// Allowed functions: malloc
// --------------------------------------------------------------------------------

// Write the following function:

// int     *ft_rrange(int start, int end);

// It must allocate (with malloc()) an array of integers, fill it with consecutive
// values that begin at end and end at start (Including start and end !), then
// return a pointer to the first value of the array.

// Examples:

// - With (1, 3) you will return an array containing 3, 2 and 1
// - With (-1, 2) you will return an array containing 2, 1, 0 and -1.
// - With (0, 0) you will return an array containing 0.
// - With (0, -3) you will return an array containing -3, -2, -1 and 0.

#include <stdlib.h>
#include <stdio.h>

int	*ft_rrange(int start, int end)
{
	int *mass;
	int i;

	if (start > end)
		mass = (int *)malloc(sizeof(int) * ((start - end) + 1));
	else
		mass = (int *)malloc(sizeof(int) * ((end - start) + 1));

	i = 0;
	while (end != start)
	{
		mass[i++] = end;
		(end < start) ? end++ : end--;

		// if (end < start)
		// 	end++;
		// else
		// 	end--;
	}
	mass[i] = end;
	return (mass);
}
int main (int a_c, char **a_v)
{
	int st = atoi(a_v[1]);
	int en = atoi(a_v[2]);
	int len = 0;
	int i = 0;
	int *mass;

	if (a_c > 2)
		len =  (st > en) ? (st - en + 1) : (en - st + 1);
		printf("len: %d\n", len);
		printf("------\n");
	mass = ft_rrange(st, en);
	while(i < len)
	{
		printf("%d\n", mass[i]);
		i++;
	}
	return (0);
}
