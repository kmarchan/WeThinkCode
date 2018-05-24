/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:15:52 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/24 14:22:49 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
void	ft_bzero(void *b, size_t n);
void	ft_putchar(char c);
void	ft_putendl(const char *s);
void	ft_putstr(const char *s);
void	ft_putnbr(int n);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char *s2, size_t n);
char	*ft_strcpy(char *des, char *src);
char	*ft_strdup(const char *src);
char	*ft_strrev(char *s);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *hay, const char *ned, size_t n);
char	*ft_strcpy(char *des, char *src);
char	*ft_strncpy(char *s1, char *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *s1, const char *s2, size_t dlen);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_isupper(int c);
int		ft_islower(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *s);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);

#endif
