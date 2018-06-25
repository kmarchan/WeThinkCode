/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pgcd.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 10:03:18 by exam              #+#    #+#             */
/*   Updated: 2018/06/21 10:18:27 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_common(int a, int b)
{
	int c;
	int n;

	n = 2;
	c = 1;
	while (n < a && n < b)
	{
		if (a % n == 0 && b % n == 0)
		{
			c = n;
		}
		n++;
	}
	return (c);
}

int main(int argc, char **argv)
{
	int a;
	int b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d", is_common(a, b));
	}
	printf("\n");
}
