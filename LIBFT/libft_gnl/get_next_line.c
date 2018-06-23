/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmarchan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 07:45:48 by kmarchan          #+#    #+#             */
/*   Updated: 2018/06/13 07:31:56 by kmarchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int			read_line(int fd, char *buf, t_ins *node)
{
	int				in;
	int				count;

	count = 0;
	if (node->ovr != NULL)
	{
		ft_strcat(node->hold, node->ovr);
		ft_strclr(node->ovr);
	}
	if (ft_chrcount(node->hold, '\n') == 0)
	{
		while ((in = read(fd, buf, BUFF_SIZE)) > 0)
		{
			count++;
			buf[in] = '\0';
			ft_strcat(node->hold, buf);
			if (ft_strchr(buf, '\n'))
				break ;
		}
		ft_bzero(buf, BUFF_SIZE + 1);
	}
	if (count > 0)
		return (1);
	else
		return (0);
}

int			remaining(t_ins *node, char *ptr, char **line)
{
	int				cont;

	cont = 0;
	*line = ft_strdup(node->hold);
	if (node->hold[0] != '\0')
		cont = 1;
	ft_strclr(node->hold);
	if (ptr)
	{
		ft_strcat(node->ovr, ptr + 1);
		cont = 1;
	}
	return (cont);
}

int			manage_line(t_ins *node, int fd, char *buf, char **line)
{
	int				in;
	char			*ptr;
	int				n;
	int				cont;

	cont = 0;
	ptr = NULL;
	n = 0;
	in = read_line(fd, buf, node);
	if (ft_strchr(node->hold, '\n'))
	{
		ptr = ft_strchr(node->hold, '\n');
		*ptr = '\0';
		n++;
	}
	if ((cont = remaining(node, ptr, line)) != 0)
		return (cont);
	else
		ft_strcat(node->ovr, buf);
	if (node->hold[0] != '\0')
		cont = 1;
	if (in > 0 || n > 0 || cont == 1)
		return (1);
	return (0);
}

int			get_next_line(const int fd, char **line)
{
	int				in;
	char			buf[BUFF_SIZE + 1];
	static t_ins	*node;

	in = 0;
	ft_bzero(buf, BUFF_SIZE + 1);
	if (fd < 0 || !line || read(fd, 0, 0) < 0)
		return (-1);
	if (!node)
		node = (t_ins*)ft_memalloc(sizeof(t_ins));
	if (!node->hold)
		node->hold = (char *)ft_memalloc(sizeof(char) * 55000);
	if (!node->ovr)
		node->ovr = (char *)ft_memalloc(sizeof(char) * 55000);
	in = manage_line(node, fd, buf, line);
	if (in > 0)
		return (1);
	else
		return (0);
}
