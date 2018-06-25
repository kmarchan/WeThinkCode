/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:16:19 by exam              #+#    #+#             */
/*   Updated: 2018/06/21 13:51:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putcstr(char *s)
{
	int i;

	i = 0;
	if (s[i] == '\0' && s[i] == ' ' && s[i] == '\t')
		i++;
	while (s[i] != '\0' && s[i] != ' ' && s[i] != '\t')
	{
		ft_putchar(s[i]);
		i++;
	}
}

int		ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_chrcount(char *s)
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == ' ' || s[i] == '\t')
			c++;
		i++;
	}
	return (c);
}

int next_word(char *s, int count)
{
	int length = ft_strlen(s) -1;
	int index = length;
	while (count > 0)
	{
		printf("1");
		while  ((s[index] != ' ' && s[index] != '\t' && index > 0) || s[index] == '\0')
		{
			printf("2");
			index--;

		}			
		count--;
	}
	return (index);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		char *s;
		s = argv[1];
		//int length = ft_strlen(argv[1]);
		int count = ft_chrcount(argv[1]);
		int words = 0;
	//	while (words < count)
	//	{
			printf("0 %d\n", next_word(s, 0));
			printf("1 %d\n", next_word(s, 1));
			printf("2 %d\n", next_word(s, 2));
			printf("3 %d\n", next_word(s, 3));
		//	words++;
	//	}
	return (words + count);
	}
	return (0);	
}
