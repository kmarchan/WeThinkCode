/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rostring.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 05:55:40 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/11 06:55:08 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * ROSTRING:
 * take the first word and print it at the end. 
 * words must be separated by only one ' '. 
 * write, malloc, free allowed.
 * only the first argument must be used. other arguments ignored. 
 */
#include <unistd.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			ft_putchar(' ');
		else if (str[i] > 31 && str[i] < 127)
			ft_putchar(str[i]);
		i++;
	}
}

char *clear_spaces(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t')
			if (str[i+1] == ' ' || str[i+1] == '\t' || str[i+1] == '\0')
			{
				str[i] = 31;
			}
		i++;
	}
//	ft_putstr(str);
	return (str);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		ft_putchar('\n');
	if (argc >= 2)
	{
		char *str;
		int i;

		i = 0;
		str = argv[1];
		str = clear_spaces(argv[1]);
		while (str[i] == ' ' || str[i] == '\t' || str[i] == 31)
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\t' && str[i] != 31 && str[i] != '\0')
		{
			i++;
		}
		while (str[i] == ' ' || str[i] == '\t' || str[i] == 31)
			i++;
		ft_putstr(str+i);
		if (str[i] != '\0')
			ft_putchar(' ');
		i = 0;
//first word
		while ((str[i] == ' ' || str[i] == '\t' || str[i] == 31) && str[i] != '\0')
		{
			i++;
		}
		while (str[i] != ' ' && str[i] != '\t' && str[i] != 31 && str[i] != '\0')
		{
			if (str[i] != ' ' && str[i] != '\t' && str[i] != 31)
				ft_putchar(str[i]);
			i++;
		}
	}
	return (0);
}
