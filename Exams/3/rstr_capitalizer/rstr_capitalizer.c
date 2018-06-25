/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rstr_capitalizer.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 07:30:21 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/25 07:57:47 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putendl(char *s)
{
	int i = 0;
	while (s[i] != '\0')
	{
		ft_putchar(s[i]);
		i++;
	}
	ft_putchar('\n');
}

void rstr_capitalizer(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;	
		}
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == '\0' || str[i + 1] == ' ' || str[i + 1] == '\t')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
		}
		i++;
	}
	ft_putendl(str);
}

int main(int argc, char **argv)
{
	int count;
	count = 1;
	if (argc > 1)
	{
		while (count < argc)
		{
			rstr_capitalizer(argv[count]);
			count++;
		}
		return (1);
	}
	else 
		write (1, "\n", 1);
}
