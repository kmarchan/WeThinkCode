/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 12:28:15 by exam              #+#    #+#             */
/*   Updated: 2018/06/16 16:09:42 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int  ft_strrchr(int count, int i, char *s)
{
	while (count--)
	{
		while (s[i] == '\0' || s[i] == ' ' || s[i] == '\t')
			i--;
		while (i >= 0 && (s[i] != ' ' && s[i] != '\t'))
		{
			i--;
		}
	}
	return (i + 1);
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
	return (count + 1);
}
int main(int argc, char **argv)
{
	int i;
	int l;
	int count;
	int pos;
	int c;
	char *s;	

	count = 0;
	if (argc == 2)
	{
		s = argv[1];
		c = ft_chrcount(s);
		i = ft_strlen(s);
		l = ft_strlen(argv[1]);
		while (c--)
		{	
			pos = ft_strrchr(count, i, s);
			if (pos < l)
			{
				ft_putstr(s + pos);	
				write (1, " ", 1);
			}
			if (count == ft_chrcount(argv[1]) - 1)
				ft_putstr(argv[1]);
			count++;
		}
	}	
	write (1, "\n", 1);
}
