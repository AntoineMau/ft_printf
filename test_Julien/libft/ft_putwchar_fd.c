/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 23:06:46 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/27 02:04:44 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putwchar_fd2(wchar_t wc, int fd)
{
	char	tmp;

	tmp = (char)((wc >> 18) + 240);
	write(fd, &tmp, 1);
	tmp = (char)(((wc >> 12) & 63) + 128);
	write(fd, &tmp, 1);
	tmp = (char)(((wc >> 6) & 63) + 128);
	write(fd, &tmp, 1);
	tmp = (char)((wc & 63) + 128);
	write(fd, &tmp, 1);
}

void			ft_putwchar_fd(wchar_t wc, int fd)
{
	char	tmp;

	if (wc < 128)
		write (fd, &wc, 1);
	else if (wc >= 128 && wc < 2048)
	{
		tmp = (char)((wc >> 6) + 192);
		write(fd, &tmp, 1);
		tmp = (char)((wc & 63) + 128);
		write(fd, &tmp, 1);
	}
	else if (wc >= 2048 && wc < 65536)
	{
		tmp = (char)((wc >> 12) + 224);
		write(fd, &tmp, 1);
		tmp = (char)(((wc >> 6) & 63) + 128);
		write(fd, &tmp, 1);
		tmp = (char)((wc & 63) + 128);
		write(fd, &tmp, 1);
	}
	else if (wc >= 65536 && wc <= 1114111)
		ft_putwchar_fd2(wc, fd);
}
