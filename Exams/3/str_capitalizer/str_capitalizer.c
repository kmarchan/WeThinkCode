/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/25 08:05:13 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/25 08:21:25 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putendl(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void	str_capitalizer(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}	
		i++;
	}
	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;
	i++;
	while (str[i] != '\0') 
	{
		if (str[i - 1] == ' ' || str[i -1] == '\t')
		{
			if (str[i] >= 'a' && str[i] <= 'z')
					str[i] = str[i] - 32;
		}
		i++;
	}
	ft_putendl(str);
}

int 	main(int argc, char **argv)
{
	int c = 1;
	if (argc > 1)
	{
		while (c < argc)
		{
			str_capitalizer(argv[c]);
			c++;
		}
	}
	else 
		ft_putchar('\n');
}
