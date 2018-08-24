/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <kmarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 18:12:11 by kmarchan          #+#    #+#             */
/*   Updated: 2018/08/24 18:25:24 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *new1;

	new = NULL;
	new1 = new;
	lst = lst->next;
	while (lst)
	{
		new = (t_list *)ft_memalloc(sizeof(lst->content_size));
		if (!lst)
			return (NULL);
		new = f(lst);
		new->next = NULL;
		lst = lst->next;
	}
	new = new1;
	return (new);
}
