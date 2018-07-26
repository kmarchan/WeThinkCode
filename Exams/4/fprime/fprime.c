/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/26 08:00:32 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/26 08:50:23 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
 * find prime factorials
 * put '*' between the numbers
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int in;
	int n = 2;
	if (argc == 2)
	{
		in = atoi(argv[1]);
		if (in == 0)
		{
			printf("0");
		}
		if (in == 1)
		{
			printf("1");
		}
		while (in > n)
		{
			while (in % n == 0)
			{
				printf("%d", n);
				if (in != n)
					printf("*");
				in /= n;
			}
			n++;
		}
		if (in == n)
			printf("%d", n);
	}
	printf("\n");
}
