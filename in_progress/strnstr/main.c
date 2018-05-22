/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 09:46:07 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/22 09:57:27 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main()
{
	char str[] = "fluffy";
	char find[] = "uf";
	ft_putstr(ft_strnstr(str, find, 3));
	ft_putstr(strnstr(str, find, 3));
	return (0);
}
