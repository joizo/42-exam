/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 12:57:49 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/10/30 13:01:23 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <unistd.h>

t_list		*sort_list(t_list *list, int (*cmp)(int, int))
{
	int		tmp_data;
	t_list	*tmp;

	tmp = list;
	while (list->next != NULL)
	{
		if (((*cmp)(list->data, list->next->data)) == 0)
		{
			tmp_data = list->data;
			list->data = list->next->data;
			list->next->data = tmp_data;
			list = tmp;
		}
		else
			list = list->next;
	}
	list = tmp;
	return (list);
}