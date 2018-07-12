/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/28 10:01:13 by exam              #+#    #+#             */
/*   Updated: 2018/06/28 11:01:58 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * this is ft_strsplit. takes a string and splits it into words and puts them into a string  array.
 * what is needed:
 * - wordcount (for malloc)
 * - address of ' ', \n  or '\t'
 * - find the length of the word (for malloc). 
 * - copy each into an element of the array.  
 */
#include <stdlib.h>
#include <strings.h>

int wordcount(char *str)
{
	int i = 0;
	int c = 0;
	while (str[i] != '\0')
	{	
		if ((str[i] != ' ' && str[i] != '\t' && str[i] != '\n') && str[i] != '\0')
		{
			if (str[i + 1] == ' ' || str[i + 1] == '\t' || str[i + 1] == '\n' || str[i + 1] == '\0')
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
	while (*str != ' ' && *str != '\t' && *str != '\n' && *str != '\0')
	{
		str++;
	}
	return(str + 1);
}

int wordlen(char *str)
{
	int i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
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
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
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
		while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
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
