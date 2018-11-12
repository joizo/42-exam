/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ofedoryc <ofedoryc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/12 21:08:14 by ofedoryc          #+#    #+#             */
/*   Updated: 2018/11/12 21:46:12 by ofedoryc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"
#include <stdlib.h>

t_list *sort_list(t_list *lst, int (*cmp)(int, int))
{
    int temp_data;
    t_list *temp_list;

    temp_list = lst;

    while (lst->next != NULL)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            temp_data = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp_data;
            lst = temp_list;
        }
        else
            lst = lst->next;
    }
    lst = temp_list;
    return (lst);
}
