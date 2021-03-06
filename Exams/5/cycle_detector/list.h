/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 10:22:29 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/26 10:23:32 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 
typedef struct     s_list
    {
        int            data;
        struct s_list  *next;
    }                  t_list;

int cycle_detector(t_list *list);
