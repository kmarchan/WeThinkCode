/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/19 12:20:05 by exam              #+#    #+#             */
/*   Updated: 2018/07/26 17:15:21 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnstr(char *str, int n)
{
	int i = 0;
	while (str[i] != '\0' && n--)
	{
		ft_putchar(str[i]);
		i++;
	}
}

int start(char *str, int i)
{
	int f = i+1;
	int b = i-1;
	int l = 0;
		if (str[i] == str[f] && str[f] != '\0')
		{
			f++;
		}
		if (str[i] == str[b] && b > 0)
		{
			b--;
			l++;
		}
		while (str[b] == str[f] && b >= 0 && str[f] != '\0')
		{
			b--;
			f++;
			l++;
		}
	return (l);
}

int pal_len(char *str, int i)
{
	int f = i+1;
	int b = i-1;
	int l = 1;
		if (str[i] == str[f] && str[f] != '\0')
		{
			f++;
			l++;
		}
		if (str[i] == str[b] && b >= 0)
		{
			b--;
			l++;
		}
		while (str[b] == str[f])
		{
			b--;
			f++;
			l += 2;
		}
	return (l);
}

int str_len(char *str)
{
	int i = 0;
	while (str[i+1] != '\0')
	{
		if (str[i] == str[i+1])
			i++;
		else 
			return(0);
	}
	return (1);
}

void ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int main(int argc, char **argv)
{
	int score = 0;
	int pal = 0;
	int ret = 0;
	int i = 0;
	if (argc == 2)
	{
		char *str;
		str = argv[1];
		if (str_len(str))
		{
			ft_putstr(str);
			ft_putchar('\n');
			return (0);
		}
		while(str[i] != '\0')
		{
			pal = pal_len(str, i);
			if (pal >= score)
			{
				score = pal;
				ret = (i - start(str, i));	
			}
			i++;
		}
		ft_putnstr(str+ret, score);
	}	
	ft_putchar('\n');
	return (1);
}
