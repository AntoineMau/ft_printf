/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mapandel <mapandel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/17 22:59:26 by mapandel          #+#    #+#             */
/*   Updated: 2017/04/27 02:04:15 by mapandel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		ft_putwchar2(wchar_t wc)
{
	char	tmp;

	tmp = (char)((wc >> 18) + 240);
	write(1, &tmp, 1);
	tmp = (char)(((wc >> 12) & 63) + 128);
	write(1, &tmp, 1);
	tmp = (char)(((wc >> 6) & 63) + 128);
	write(1, &tmp, 1);
	tmp = (char)((wc & 63) + 128);
	write(1, &tmp, 1);
}

void			ft_putwchar(wchar_t wc)
{
	char	tmp;

	if (wc < 128)
		write (1, &wc, 1);
	else if (wc >= 128 && wc < 2048)
	{
		tmp = (char)((wc >> 6) + 192);
		write(1, &tmp, 1);
		tmp = (char)((wc & 63) + 128);
		write(1, &tmp, 1);
	}
	else if (wc >= 2048 && wc < 65536)
	{
		tmp = (char)((wc >> 12) + 224);
		write(1, &tmp, 1);
		tmp = (char)(((wc >> 6) & 63) + 128);
		write(1, &tmp, 1);
		tmp = (char)((wc & 63) + 128);
		write(1, &tmp, 1);
	}
	else if (wc >= 65536 && wc <= 1114111)
		ft_putwchar2(wc);
}
