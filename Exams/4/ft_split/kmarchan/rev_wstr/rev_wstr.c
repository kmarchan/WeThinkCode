/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 11:08:20 by exam              #+#    #+#             */
/*   Updated: 2018/06/28 11:25:02 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <strings.h>

int wordcount(char *str)
{
	int i = 0;
	int c = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] != ' ' && str[i] != '\t') && str[i] != '\0')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\0')
			{
				c++;
			}
		}
		i++;
	}
	return (c);
}

char *ft_strchr(char *str)
{
	while (*str != ' ' && *str != '\t' && *str != '\0')
	{
		str++;
	}
	return(str + 1);
}

int wordlen(char *str)
{
	int i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
			i++;
	}
	return (i);
}

char **ft_split(char *str)
{
	int w;
	int e;
	int i;
	char **ar;
	e = 0;
	w = wordcount(str);
	ar = (char **)malloc(sizeof(char*) * w + 1);
	if (e == 0)
	{
		i = 0;
		ar[e] = (char *)malloc(sizeof(char) * wordlen(str) + 1);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			ar[e][i] = str[i];
			i++;
		}
		ar[e][i] = '\0';
		e++;
	}
	while (e < w)
	{
		i = 0;
		str = ft_strchr(str);
		ar[e] = (char *)malloc(sizeof(char) * wordlen(str) + 1);
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
		{
			ar[e][i] = str[i];
			i++;
		}
		ar[e][i] = '\0';
		e++;
	}
	ar[e] = NULL;
	return (ar);
}

void ft_putchar(char c)
{
	write(1, &c, 1);
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
	char **ar;
	int w;
	if (argc == 2)
	{
		w = wordcount(argv[1]);
		ar = ft_split(argv[1]);
		while (w--)
		{
			ft_putstr(ar[w]);
			if (w != 0)
				ft_putchar(' ');
		}
	}
	ft_putchar('\n');
	return (0);
}
