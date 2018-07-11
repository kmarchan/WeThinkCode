/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:52:06 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/10 16:43:02 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int j;
	for (unsigned int i = 0; i < size; i++)
	{
		for (j = 0; j < (size - 1); j++)
		{
			if (tab[j + 1] < tab[j])
			{
						
				int temp;
				temp = tab[j+1];
				tab[j+1] = tab[j];
				tab[j] = temp;
		
			}
		}
	}
//	return (tab);
}
/*
int main()
{
	int tab[7] = {1, 4, 6, 6, 9, 7, 3};
	sort_int_tab(tab, 7);
	int n = 0;
	while (n < 7)
	{
		printf("%d ", tab[n]);
		n++;
	}
	return (0);
}*/
