/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lhl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:52:36 by judumay           #+#    #+#             */
/*   Updated: 2019/01/18 15:22:29 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_lhl(__int32_t *tab, va_list ap, const char *restrict format,
__int32_t i)
{
	if (format[i] == 'h')
		ft_h(tab, ap, format, i);
	else if (format[i] == 'l')
		ft_ll(tab, ap, format, i);
	else if (format[i] == 'L')
		ft_putnbr_float_ld1(va_arg(ap, long double), tab);
	else
		return (FALSE);
	return (TRUE);
}
