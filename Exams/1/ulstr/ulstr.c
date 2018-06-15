/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 07:59:34 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/14 08:19:24 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc == 2)
	{
		char *s;
		s = argv[1];
		while (s[i] != '\0')
		{
			if (s[i] >= 'a' && s[i] <= 'z')
			{
				s[i] = (s[i] - 32);
				ft_putchar(argv[1][i]);
			}
			else if (s[i] >= 'A' && s[i] <= 'Z')
			{
				s[i] = (s[i] + 32);
				ft_putchar(argv[1][i]);
			}
			else 
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
