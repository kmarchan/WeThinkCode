/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 12:15:57 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/11 14:02:50 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "list.h"
//#include <stdio.h>
//#include <stdlib.h>
/*
int ascending(int a, int b)
{
	return (a <= b);
}
*/
t_list *sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list *tmp;
	int temp;
    temp = 0;
	tmp = lst;
    while(lst->next != 0)
    {
        if ((*cmp)(lst->data, lst->next->data) == 0)
        {
            temp = lst->data;
            lst->data = lst->next->data;
            lst->next->data = temp;
			lst = tmp;
        }
		else
			lst = lst->next;
    }
	lst = tmp;
	return(lst);	
}
/*
int main(void)
{
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	t_list *node4 = (t_list *)malloc(sizeof(t_list));
	t_list *node5 = (t_list *)malloc(sizeof(t_list));
	t_list *node6 = NULL;;

	node1->next = NULL;
	node2->next = node3;
	node3->next = node4;
	node4->next = node5;
	node5->next = NULL;

	node1->data = 0;
	node2->data = 4;
	node3->data = 0;
	node4->data = 170;
	node5->data = 10;

	node6 = sort_list(node6, ascending);
	while (node6)
	{
		printf("%d\n", node1->data);
		node1 = node1->next;
	}
	return (0);

}*/
