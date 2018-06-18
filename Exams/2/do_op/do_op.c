/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 08:38:50 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/13 08:53:52 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int sum;

	sum = 0;
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			sum = (atoi(argv[1]) + atoi(argv[3]));
		if (argv[2][0] == '-')
			sum = (atoi(argv[1]) - atoi(argv[3]));
		if (argv[2][0] == '*')
			sum = (atoi(argv[1]) * atoi(argv[3]));
		if (argv[2][0] == '/')
			sum = (atoi(argv[1]) / atoi(argv[3]));
		if (argv[2][0] == '%')
			sum = (atoi(argv[1]) % atoi(argv[3]));
		printf("%d", sum);
	}
	printf("\n");
}
