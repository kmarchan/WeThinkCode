/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 08:21:56 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/14 08:42:38 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}
int	main(int argc, char **argv)
{
	int f;
	int s;
	int a;

	if (argc == 3)
	{
		a = 1;
		while (a <= 2)
		{
			f = 0;
			while (argv[a][f] != '\0')
			{
				s = f + 1;
				while (argv[a][s] != '\0')
				{	
					if (argv[a][f] == argv[a][s])
						argv[a][s] = '-';
					s++;
				}
				f++;
			}
			a++;
		}
		f = 0;
		while (argv[1][f] != '\0')
		{
			s = 0;
			while (argv[2][s] != '\0')
			{	
				if (argv[1][f] == argv[2][s])
					argv[2][s] = '-';
				s++;
			}
			f++;
		}
		a = 1;
		f = 0;
		while (a <= 2)
		{
			f = 0;
			while (argv[a][f] != '\0')
			{
				if (argv[a][f] != '-')
					ft_putchar(argv[a][f]);
				f++;;
			}
			a++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
