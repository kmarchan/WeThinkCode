/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 15:52:06 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/12 07:44:59 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
/*
void	sort_int_tab(int *tab, unsigned int size)
{
	unsigned int j;
	unsigned int i;
	for (i = 0; i < size; i++)
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
*/

void sort_int_tab(int *tab, unsigned int size)
{
    int    i;
    int temp;

    i = 0;
    temp = 0;
    while(i < (int)size)
    {
        if (i + 1 < (int)size && tab[i] > tab[i + 1])
        {
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            sort_int_tab(tab, size);
        }
        i++;
    }        
}
`
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
}
