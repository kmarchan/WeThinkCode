/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moment.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/18 08:32:58 by kmarchan          #+#    #+#             */
/*   Updated: 2018/07/18 13:08:01 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * write a function
 * takes seconds as parameter and returns a string with description of time elapsed. 
 * seconds, minutes, hours, days, months.
 * requires, itoa and strcat.
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int str_len(char *str)
{
	 int i = 0;
	 while (str[i] != '\0')
	 {
		 i++;
	 }
	 return (i);
}

int	intlen(unsigned int n)
{
	unsigned int t;
	t = n;
	int count = 0;
	if (n == 0)
		return (1);
	while (t)
	{
		t /= 10;
		count ++;
	}
	return (count);
}

char *ft_itoa(unsigned int n)
{
	char *num;
	int i;
	if (n == 0)
		return ("0");
	if (n == 2147483647)
		return ("2147483647");
	i = intlen(n);
	num = (char *)malloc(sizeof(char) * intlen(n) + 1);
	num[i] = '\0';
	while (n > 0)
	{
		num[--i] = (n % 10) + '0';
		n /= 10;
	}
	return (num);
}

char *strjoin(char *pre, char *suf)
{
	char *ret;
	ret = (char *)malloc(sizeof(char) * str_len(pre) + str_len(suf) + 1);
	int i = 0;
	int j = 0;
	while (pre[i] != '\0')
	{
		ret[i] = pre[i];
		i++;
	}
	while (suf[j] != '\0')
	{
		ret[i] = suf[j];
		i++;
		j++;
	}
	ret[i] = '\0';
	return (ret);
}

char	*moment(unsigned int duration)
{
	char *ret;
	char *unit;
	char *time;
	if (duration < 60)
	{
		if (duration == 1)
			return ("1 second ago.");
		unit = " seconds ago";
		time = ft_itoa(duration);
	}
	else if (duration >= 60  && duration < 3600)
	{
		if (duration >= 60 && duration < 120)
			return ("1 minute ago.");
		unit = " minutes ago.";
		time = ft_itoa(duration / 60);
	}
	else if (duration >= 3600 && duration < 86400)
	{
		if (duration >= 3600 && duration < 7200)
			return ("1 hour ago.");
		unit = " hours ago.";
		time = ft_itoa(duration / 3600);
	}	
	else if (duration >= 86400 && duration < 2592000)
	{
		if (duration >= 86400 && duration < 172800)
			return ("1 day ago.");
		unit = " days ago.";
		time = ft_itoa(duration /86400);
	}
	else if (duration >= 2592000 && duration <  5184000)
		return ("1 month ago.");
	else 
	{
		unit = " months ago.";
		time = ft_itoa(duration / 259200);
	}
	ret = strjoin(time, unit);
	return (ret);
}

int	main(int argc, char **argv)
{
	(void)argc;
	char *ret;
	int dur;
	dur = atoi(argv[1]);
	ret = moment(dur);
	printf("dur = %d\n", dur);
	printf("%s\n", ret);
   return (0);	
}
