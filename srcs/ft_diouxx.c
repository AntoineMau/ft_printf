/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diouxx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:32:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/18 15:22:29 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_diouxx(__int32_t *tab, va_list ap, const char *restrict format,
__int32_t i)
{
	if (format[i] == 'd' || format[i] == 'i')
		ft_d_i_(ap, tab);
	else if (format[i] == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), tab);
	else if (format[i] == 'u')
		ft_u(ap, tab);
	else if (format[i] == 'x' || format[i] == 'X')
		ft_x(va_arg(ap, __uint32_t), format[i] - 23, tab, 0);
	else
		return (FALSE);
	return (TRUE);
}
