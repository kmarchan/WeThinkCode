/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 07:46:41 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/13 08:16:53 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	char *s;

	i = 0;
	if (argc > 1)
	{
		s = argv[1];
		while (s[i] != '\0')
		{
			ft_putchar(s[i]);
			i++;
		}
	}
	write (1, "\n", 1);
}
