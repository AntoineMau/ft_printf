/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_char.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/04 03:17:08 by mapandel          #+#    #+#             */
/*   Updated: 2017/03/28 00:50:32 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_line		*ft_init_list(t_line *list, const int fd)
{
	t_line		*start;
	t_line		*previous;

	start = list;
	previous = NULL;
	while (list && list->fd != fd)
	{
		previous = list;
		list = list->next;
	}
	if (!list)
	{
		if (!(list = ft_memalloc(sizeof(t_line))))
			return (NULL);
		list->fd = fd;
	}
	if (previous)
		previous->next = list->next;
	if (list != start)
		list->next = start;
	return (list);
}

static int			ft_check_buf(char *buf, t_line *list, char **line, char c)
{
	char	*tmp;

	tmp = ft_strdup(*line);
	ft_strdel(line);
	if (ft_strrchr(buf, '\n'))
	{
		*line = ft_strcjoin(tmp, buf, c);
		list->save = ft_strsub(buf, (unsigned int)ft_strclen(buf, c) + 1,
			ft_strlen(buf) - ft_strclen(buf, c));
		ft_strdel(&buf);
		ft_strdel(&tmp);
		return (1);
	}
	*line = ft_strjoin(tmp, buf);
	ft_strclr(buf);
	ft_strdel(&tmp);
	return (0);
}

static int			ft_end_gnl(t_line *list, char **line, char *buf)
{
	ft_strdel(&buf);
	if (**line)
		return (1);
	list->fd = 0;
	return (0);
}

int					get_next_char(const int fd, char **line, char c)
{
	static t_line	*list = NULL;
	char			*buf;
	long			i;

	i = 0;
	if (!line || BUFF_SIZE < 1 || fd < 0 || read(fd, 0, 0)
		|| !(*line = ft_strnew(0))
		|| !(list = ft_init_list(list, fd)))
		return (-1);
	if (list->save && ft_check_buf(list->save, list, line, c))
		return (1);
	ft_strdel(&list->save);
	if (!(buf = ft_strnew(BUFF_SIZE)))
		return (-1);
	while ((i = read(fd, buf, BUFF_SIZE)))
	{
		buf[i] = '\0';
		if (ft_check_buf(buf, list, line, c))
			return (1);
		if (i < BUFF_SIZE)
			break ;
	}
	if (ft_end_gnl(list, line, buf))
		return (1);
	return (0);
}
