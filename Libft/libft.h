/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/17 14:15:52 by kmarchan          #+#    #+#             */
/*   Updated: 2018/05/18 08:02:06 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>

void	*ft_memset(void *b, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	ft_bzero(void *b, size_t n);
void	ft_putchar(char c);
void	ft_putendl(const char *s);
void	ft_putstr(const char *s);
void	ft_putnbr(int n);
char	*ft_strcpy(char *des, char *src);
char	*ft_strdup(char *src);
size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_atoi(const char *s);
int	ft_strcmp(char *s1, char *s2);

#endif
