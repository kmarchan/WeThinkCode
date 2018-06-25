/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 14:56:20 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/25 13:03:53 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_fact(int n, int in)
{
	if (in % n == 0)
		return (1);
	else 
		return (0);
}

int	main(int argc, char **argv)
{
	int in;
	int n;

	if (argc == 2)
	{
		in = (atoi(argv[1]));
		n = 2;
		if (in == 1)
			printf("1");
		if (in < 0)
			return (0);
		while(n <= in)
		{
			if (is_fact(n, in))
			{
				if (in != n)
				{
					if (in != atoi(argv[1]))
						printf("*");
					printf("%d", n);
				}
				in = in / n;
				if (in % n == 0)
				{
					if (n != in)
						printf("*");
					printf("%d", n);
				}
			}
			n++;
		}	
	}
	printf("\n");
}
