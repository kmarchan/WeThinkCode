/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 09:57:02 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/23 14:31:37 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memccpy(void *des, const void *src, int c, size_t n)
{
	unsigned char	*a;
	unsigned char	*b;
	size_t			i;

	i = -1;
	a = (unsigned char *)src;
	b = (unsigned char *)des;
	if (ft_strcmp((char *)src, "") == 0)
	{	
		while (i < n)//a != (unsigned char *)des + n && i <  n - 1)
		{
			if (*a == (unsigned char)c)
			{
				*b = *a;
				return (des + 1);
			}
			*b++ = *a++;
			i++;
		}
	}
	else 
	{
		*b = '\0';
		return (des);
	}
//	if (i < n)
//	{
//		*b  = '\0';
//		return (des + 1);
//	}
	return (NULL);
}

int main(void)
{
    char    src[] = "test basic du memccpy !";
    char    buff1[22];
    memset(buff1, 0, sizeof(buff1));
    char    *r1 = memccpy(buff1, src, 'm', 2);
    char    *r2 = ft_memccpy(buff1, src, 'm', 2);
  //  char    *r1 = memccpy(buff1, src, 'm', 22);
  //  char    *r2 = ft_memccpy(buff1, src, 'm', 22);
    printf("PC  %s\nMY  %s", r1, r2);
}
