/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   biggest_pal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 10:17:13 by exam              #+#    #+#             */
/*   Updated: 2018/07/12 10:52:49 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int 	ft_strlen(char *str)
{
	int i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int pal_len(char *str, int i)
{
	int f;
	int b;
	int c;
	c = 1;
	f = i + 1;
	b = i - 1;
	while (b >= 0 && str[f] != '\0')
	{
		if (str[b] == str[i])
		{
			b--;
			c++;
		}
		if (str[f] == str[i])
		{
			f++;
			c++;
		}
		if (str[b] == str[f])
		{
			c += 2;
			f++;
			b--;
		}
		else 
			break;
	}
	return (c);
}

int main(int argc, char ** argv)
{
	int i = 0;
	int len = 0;
	int largest = 0;
	char *str;
	if (argc == 2)
	{
		str = argv[1];
		while (str[i] != '\0')
		{
			
			if (len <= pal_len(str, i))
			{
				len = pal_len(str, i);
				largest = i;
			}
			i++;
		}
		i = largest - ((len)/2);
		while (len--)
		{
			ft_putchar(str[i]);
			i++;
		}	
	}
	ft_putchar('\n');
}
