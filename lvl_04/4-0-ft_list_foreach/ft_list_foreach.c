/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 09:16:56 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/10/30 12:54:30 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

// int main (void)
// {
//     t_list *tmp;

//     tmp = (t_list *)malloc(sizeof(t_list));
//     tmp->next = (t_list *)malloc(sizeof(t_list));
//     tmp->next->next = NULL;

//     tmp->data = 5;
//     tmp->data->next = 10;

//     return (0);
// }