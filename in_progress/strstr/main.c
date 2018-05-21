/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:12:55 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/21 14:24:30 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *str, char *to_find);

int	main()
{
	char str[] = "fluffy";
	char to_find[] = "uf";
	ft_putstr(ft_strstr(str, to_find));	
	return (0);
}

