/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotstring.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/26 05:43:53 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/26 07:41:21 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int fstwordlength(char *s)
{
	int i;
	i = 0;
	while (s[i] != '\0' && (s[i] == ' ' || s[i] == '\t'))
	{
		i++;
	}
	while (s[i] != '\0' && (s[i] != ' ' && s[i] != '\t'))
	{
		i++;
	}
	return (i);
}	

int	main(int argc, char **argv)
{
	if (argc >= 2)
	{
		char *s;
		s = argv[1];
		int i;  
		int l;
		l = fstwordlength(s);
		i = l + 1;
		while (s[i] != '\0')
		{
			while (s[i] == ' ' || s[i] == '\t')
			{
				if (s[i - 1] != ' ' && s[i - 1] != '\t')
					ft_putchar(' ');
				i++;
			}
			ft_putchar(s[i]);
			i++;
		}
		ft_putchar(' ');
		i = 0;
		while (i <= l -1)
		{
			if (s[i] != ' ' && s[i] != '\t')
			{
				ft_putchar(s[i]);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
