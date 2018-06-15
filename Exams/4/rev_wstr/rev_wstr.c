/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 12:28:15 by exam              #+#    #+#             */
/*   Updated: 2018/06/14 13:42:35 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c)
{
	write (1, &c, 1);
}

void ft_putstr(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
	{
		ft_putchar(s[i]);
		s[i] = '\0';
		i++;
	}
}
int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
}

char *ft_strrchr(int i, char *s)
{
	//int i;
	//i = ft_strlen(s);
	while (s[i] == '\0' || s[i] == ' ' || s[i] == '\t')
		i--;
	while (i >= 0 && (s[i] != ' ' && s[i] != '\t'))
	{
		i--;
	}
//	printf("c%i\n", i);
	return (s + i + 1);
}

int	ft_chrcount(char *s)
{
	int i;
	int count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t')
			count++;
		i++;
	}	
	return (count);
}
int main(int argc, char **argv)
{
	int i;
	char *s;
	int c; 

//	char s[] = "1 2 3 4 5 6";
	if (argc == 2)
	{
		s = argv[1];
		c = ft_chrcount(s);
		i = ft_strlen(s);
		while (c > 0)
		{
			s = ft_strrchr(ft_strlen(s), s);
			ft_putstr(s);	
			write (1, " ", 1);
			c--;
		//	printf(" %s\n", ft_strrchr(i, s));
		}
	}	
	write (1, "\n", 1);
}
