/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/11 07:07:11 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/11 08:54:53 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <strings.h>

int count_word(char *str)
{
	int i = 0;
	int c = 0;
	if (str[0] != ' ' && str[0] != '\t' && str[i] != '\n')
		c++;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			if (str[i-1] != ' ' && str[i-1] != '\t' && str[i-1] != '\n')
				c++;
		i++;
	}
	return (c);
}
	
int ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int ft_wordlen(char *str)
{
	int i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		i++;
	}
	return (i + 1);
}

char *ft_strchr(char *str)
{
	int i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
	{
		i++;
	}
	while ((str[i] == ' ' || str[i] == '\t' || str[i] == '\n') && str[i] != '\0')
	{
		i++;
	}
//	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
//	{
//		i++;
//	}
	return (str + i);
}

char **ft_split(char *str)
{
	char **ar;
	int e = 0;
	int w = 0;
	int i = 0;
	w = count_word(str);
	ar = (char **)malloc(sizeof(char *) * w + 1);
	while (e < w)
	{
		if (e > 0)
		{
			str= ft_strchr(str);
		}
		ar[e] = (char *)malloc(sizeof(char) * ft_wordlen(str) + 1);
		i = 0;
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
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
/*
#include <unistd.h>
int main()
{

	char *str;
	str = "     one\ttwo\n three four five";
	char **ar;
	int e = 0;
	int i = 0;
	ar = ft_split(str);
	while (ar[e] != NULL)
	{
		i = 0;
		while (i < 6)
		{
			write(1, &ar[e][i], 1);
			i++;
		}
		printf("%s\n", ar[e]);
		e++;

	}
	return (0);
}*/
