/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 23:20:46 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/11/12 23:20:50 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

int ascending(int a, int b)
{
	return (a <= b);
}

void print_list(t_list *tmp)
{
	t_list *a;

	a = tmp;
	while (tmp != NULL)
	{
		printf("%d\n", tmp->data);
		tmp = tmp->next;
	}
	tmp = a;
}

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int temp_data;

	tmp = lst;

	while (lst->next != NULL)
	{

		if (((*cmp)(lst->data, lst->next->data)) == 0)
		{
			temp_data = lst->data;
			lst->data = lst->next->data;
			lst->next->data = temp_data;
			lst = tmp;
		}
		else
			lst = lst->next;
	}
	lst = tmp;
	return (lst);
}

int main (void)
{
	t_list *tmp;

	tmp = (t_list *)malloc (sizeof(t_list));
	tmp->next = (t_list *)malloc (sizeof(t_list));
	tmp->next->next = (t_list *)malloc (sizeof(t_list));
	tmp->next->next->next = (t_list *)malloc (sizeof(t_list));
	tmp->next->next->next->next = NULL;

	tmp->data = 5;
	tmp->next->data = 45;
	tmp->next->next->data = 6;
	tmp->next->next->next->data = 53;

    print_list(tmp);
    sort_list(tmp, ascending);
	print_list(tmp);

	return (0);
}