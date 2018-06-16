/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/16 11:17:29 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/16 11:59:41 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
int main(int argc, char **argv)
{
	int f;
	int s;
	int l;

	s = 0;
	f = 0;
	if (argc == 3)
	{
		l = ft_strlen(argv[1]);
		while (argv[1][f] != '\0')
		{
			while (argv[2][s] != '\0')
			{
				if (argv[1][f] == argv[2][s])
				{	
					l--;
					f++;
				}
				s++;
			}
			if (l == 0)
			{	
				write (1, "1\n", 2);
				return (1);
			}
			else 
			{
				write (1, "0\n", 2);
				return (0);
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}
