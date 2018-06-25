/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/24 14:56:20 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/25 13:08:22 by kmarchan         ###   ########.fr       */
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
				if (in % n == 0)
				{
					printf("%d", n);
					if (n == in)
						return(1);
					printf("*");
					in /= n;
					n = 1;
				}
				n++;
			}
		}	
	
	printf("\n");
	return (1);
}
