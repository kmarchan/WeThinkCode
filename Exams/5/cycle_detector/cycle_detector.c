/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cycle_detector.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:08:31 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/26 10:32:13 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

int		cycle_detector(t_list *list)
{
	t_list *l1;
	t_list *l2;
	l1 = list;
	l2 = list;
	while (l1 && l2 && l2->next)
	{
		l1 = l1->next;
		l2 = l2->next->next;
		if (l1 == l2)
			return (1);
	}
	return (0);
}
/*
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	t_list *node1 = (t_list *)malloc(sizeof(t_list));
	t_list *node2 = (t_list *)malloc(sizeof(t_list));
	t_list *node3 = (t_list *)malloc(sizeof(t_list));
	t_list *node4 = (t_list *)malloc(sizeof(t_list));
	t_list *node5 = (t_list *)malloc(sizeof(t_list));
	t_list *node6 = NULL;;

	node1->next = node2;
	node2->next = node3;
	node3->next = node4;
	node4->next = node1;
	node5->next = NULL;

	node1->data = 0;
	node2->data = 4;
	node3->data = 0;
	node4->data = 170;
	node5->data = 10;

	printf("%d\n", cycle_detector(node1));
	while (node6)
	{
		printf("%d\n", node1->data);
		node1 = node1->next;
	}
	return (0);
}
*/
