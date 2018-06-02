/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tpatter <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 10:33:46 by tpatter           #+#    #+#             */
/*   Updated: 2018/05/31 17:47:14 by tpatter          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>

int	main(void)
{
	int		i;
	void	*test;
	char	str[700];
	char	*str2;

	strcpy(str, "Hello World!");
	test = memset(str, 'x', 7);
	printf("%s\n", test);
	strcpy(str, "Hello World!");
	ft_memset(str, 'x', 7);
	printf("%s\n", test);

	i = 0;
	strcpy(str, "Hello World!");
	bzero(str + 2, 4);
	printf("%s\n", str);
	while (i < 12)
	{
		write(1, str + i, 1);
		write(1, "\n", 1);
		i++;
	}
	i = 0;
	strcpy(str, "Hello World!");
	ft_bzero(str + 2, 4);
	printf("%s\n", str);
	while (i < 12)
	{
		write(1, str + i, 1);
		write(1, "\n", 1);
		i++;
	}

	strcpy(str, "HELLO WORLD");
	str2 = str + 1;
	printf("%s\n%s\n", str, str2);
	printf("%s\n%s\n%s\n", memcpy(str2, str, 5), str, str2);
	strcpy(str, "HELLO WORLD");
	str2 = str + 1;
	printf("%s\n%s\n", str, str2);
	printf("%s\n%s\n%s\n", ft_memcpy(str2, str, 5), str, str2);

	write(1, "\n", 1);
	strcpy(str, "HELLO WORLD");
	str2 = str + 1;
	printf("%s\n%s\n", str, str2);
	printf("%s\n%s\n%s\n", memmove(str2, str, 5), str, str2);
	strcpy(str, "HELLO WORLD");
	str2 = str + 1;
	printf("%s\n%s\n", str, str2);
	printf("%s\n%s\n%s\n", ft_memmove(str2, str, 5), str, str2);

	write(1, "\n", 1);
	str2 = "This is a test that I am testing";
	strcpy(str, "Taj Mahal is a historic monument in India.");
	char buffer[61];
	char *pdest;
	printf("Source: %s\n", str);
	pdest = memccpy(buffer, str, 'c', 42);
	*pdest = '\0';
	printf("Result: %s\n", buffer);
	str2 = "This is a test that I am testing";
	strcpy(str, "Taj Mahal is a historic monument in India.");
	printf("Source: %s\n", str);
	pdest = ft_memccpy(buffer, str, 'c', 42);
	*pdest = '\0';
	printf("Result: %s\n", buffer);

	write(1, "\n", 1);
	printf("Result: %s\n", memchr(str, 'c', 42));
	printf("Result: %s\n", ft_memchr(str, 'c', 42));

	char	*newstr1 = "HeLlo";
	char	*newstr2 = "Hello";
	write(1, "\n", 1);
	printf("%d, %s, %s\n", memcmp(newstr1, newstr2, 5), newstr1, newstr2);
	printf("%d, %s, %s\n", ft_memcmp(newstr1, newstr2, 5), newstr1, newstr2);

	write(1, "\n", 1);
	strcpy(str, "We are working on strlen now");
	printf("%zu, %s\n", strlen(str), str);
	printf("%zu, %s\n", ft_strlen(str), str);

	write(1, "\n", 1);
	newstr1 = strdup(str);
	strcpy(str, "We are working on strdup now");
	printf("%s, %s\n", str, newstr1);
	newstr1 = ft_strdup(str);
	strcpy(str, "We are working on ft_strdup now");
	printf("%s, %s\n", str, newstr1);

	write(1, "\n", 1);
	strcpy(str, "We are working on strcpy now");
	printf("%s\n", str);
	ft_strcpy(str, "We are working on ft_strcpy now");
	printf("%s\n", str);

	write(1, "\n", 1);
	strncpy(str, "strncpy", 10);
	printf("%s\n", str);
	ft_strncpy(str, "ft_strncpy", 11);
	printf("%s\n", str);

	char	str3[40] = "Hello ";
	char	str4[40] = "General ";
	write(1, "\n", 1);
	printf("%s\n", strcat(str3, "there "));
	printf("%s\n", ft_strcat(str4, "Kenobi!"));

	strcpy(str3, "Hello ");
	strcpy(str4, "General ");
	write(1, "\n", 1);
	printf("%s\n", strncat(str3, "there ", 4));
	printf("%s\n", ft_strncat(str4, "Kenobi!", 4));

	strcpy(str3, "Hello ");
	strcpy(str4, "Hello ");
	write(1, "\n", 1);
	printf("%lu, ", strlcat(str3, "there", 2));
	printf("%s\n", str3);
	printf("%lu, ", ft_strlcat(str4, "there", 2));
	printf("%s\n", str4);

	strcpy(str3, "Hello there");
	strcpy(str4, "Hello there");
	write(1, "\n", 1);
	printf("%s\n", strchr(str3, 'e'));
	printf("%s\n", ft_strchr(str4, 'e'));

	strcpy(str3, "Hello there");
	strcpy(str4, "Hello there");
	write(1, "\n", 1);
	printf("%s\n", strrchr(str3, 'e'));
	printf("%s\n", ft_strrchr(str4, 'e'));

	strcpy(str3, "This is the haystack not the needle");
	strcpy(str4, "hay");
	write(1, "\n", 1);
	printf("%s\n", strstr(str3, str4));
	printf("%s\n", ft_strstr(str3, str4));

	strcpy(str3, "This is the haystack not the needle");
	strcpy(str4, "the needle");
	write(1, "\n", 1);
	printf("%s\n", strnstr(str3, str4, 40));
	printf("%s\n", ft_strnstr(str3, str4, 40));

	strcpy(str3, "This is the haystack not the needle");
	strcpy(str4, "the needle");
	write(1, "\n", 1);
	printf("%d, %s, %s\n", strcmp(str3, str4), str3, str4);
	printf("%d, %s, %s\n", ft_strcmp(str3, str4), str3, str4);

	strcpy(str3, "Hello My Name");
	strcpy(str4, "Hello MyxName");
	write(1, "\n", 1);
	printf("%d, %s, %s\n", strncmp(str3, str4, 2), str3, str4);
	printf("%d, %s, %s\n", ft_strncmp(str3, str4, 2), str3, str4);

	strcpy(str3, "\n06050");
	write(1, "\n", 1);
	printf("%d, %s\n", atoi(str3), str3);
	printf("%d, %s\n", ft_atoi(str3), str3);

	write(1, "\n", 1);
	printf("%d, %s\n", isalpha('x'), "x");
	printf("%d, %s\n", ft_isalpha('x'), "x");

	write(1, "\n", 1);
	printf("%d, %s\n", isdigit('9'), "9");
	printf("%d, %s\n", ft_isdigit('9'), "9");

	write(1, "\n", 1);
	printf("%d, %s\n", isalnum('!'), "!");
	printf("%d, %s\n", ft_isalnum('!'), "!");

	char	c = (char)48;
	write(1, "\n", 1);
	printf("%d, %c\n", isascii(c), c);
	printf("%d, %c\n", ft_isascii(c), c);

	c = (char)127;
	write(1, "\n", 1);
	printf("%d, %c\n", isprint(c), c);
	printf("%d, %c\n", ft_isprint(c), c);

	c = 'a';
	write(1, "\n", 1);
	printf("%c, %c\n", toupper(c), c);
	printf("%c, %c\n", ft_toupper(c), c);
	
	c = 'A';
	write(1, "\n", 1);
	printf("%c, %c\n", tolower(c), c);
	printf("%c, %c\n", ft_tolower(c), c);

	write(1, "\n", 1);
	ft_putnbr(1234567890);
	write(1, "\n", 1);
	ft_putnbr(-2147483647 -1);
	printf("\n%d", -2147483647 -1);
	write(1, "\n", 1);
	ft_putnbr(0);
	write(1, "\n", 1);

	return (0);
}
