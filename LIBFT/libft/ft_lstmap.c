/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <kmarchan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 18:12:11 by kmarchan          #+#    #+#             */
/*   Updated: 2018/08/26 12:07:37 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *new1;

	if (!lst || !f)
		return (NULL);
	new = f(lst);
	new1 = new;
	lst = lst->next;
	while (lst != NULL)
	{
		new->next = (t_list *)ft_memalloc(sizeof(lst->content_size));
		new->next = f(lst);
		if (!new)
			return (NULL);
		lst = lst->next;
		new = new->next;
		new->next = NULL;
	}
	new = new1;
	return (new);
}
