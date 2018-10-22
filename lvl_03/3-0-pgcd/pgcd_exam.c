/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd_exam.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/22 20:48:24 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/10/22 22:38:40 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	main(int a_c, char **a_v)
{
	int num1;
	int num2;

	if (a_c == 3)
	{
		num1 = atoi(a_v[1]);
		num2 = atoi(a_v[2]);
		if ((num1 > 0) && (num2 > 0))
		{
			while (num1 != num2)
			{
				if (num1 > num2)
					num1 -= num2;
				else
					num2 -= num1;
			}
			printf("%d", num1);
		}
	}
	printf("\n");
	return (0);
}
