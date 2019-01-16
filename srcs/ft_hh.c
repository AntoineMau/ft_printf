/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:53:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/16 16:50:04 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

__int32_t	ft_hh(__int32_t *tab, va_list ap, const char *restrict format,
	__int32_t i)
{
	char	*str;
	char	*tmp;

	str = NULL;
	tmp = NULL;
	if ((format[++i] == 'd' || format[i] == 'i'))
		ft_d_i_short(ap, tab);
	else if (format[i] == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), tab);
	else if (format[i] == 'u')
		ft_u_long(ap, tab);
	else if (format[i] == 'x' || format[i] == 'X')
		ft_x(va_arg(ap, __uint32_t), format[i] - 23, tab, 0);
	else
		return (FALSE);
	return (TRUE);
}
