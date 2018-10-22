/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/03 12:29:54 by exam              #+#    #+#             */
/*   Updated: 2018/07/03 13:33:19 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int *res;
	int i;

	if (start > end)
		res = (int *)malloc(sizeof(int) * (start - end + 1));
	else
		res = (int *)malloc(sizeof(int) * (end - start + 1));
	i = 0;
	while (start != end)
	{
		res[i] = start;
		(start > end) ? start-- : start++;
		i++;
	}
	res[i] = start;
	return (res);
}
