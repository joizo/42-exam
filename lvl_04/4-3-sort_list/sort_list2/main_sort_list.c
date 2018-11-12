/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_sort_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:37:37 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/11/12 22:15:30 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>
#include <stdio.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int));

void print_list(t_list *lst)
{
    t_list *a;

    a = lst;
    while (lst != NULL)
    {
        printf("%d\n", lst->data);
        lst = lst->next;
    }
    lst = a;
}

int ascending(int a, int b)
{
	return (a <= b);
}

int main (void)
{
    t_list *tmp;

    tmp = (t_list *)malloc(sizeof(t_list));
    tmp->next = (t_list *)malloc(sizeof(t_list));
    tmp->next->next = (t_list *)malloc(sizeof(t_list));
    tmp->next->next->next = NULL;

    tmp->data = 3;
    tmp->next->data = 6;
    tmp->next->next->data = 5;

    print_list(tmp);
    sort_list(tmp, ascending);
    printf("----------------\n");
    print_list(tmp);

    return (0);
}