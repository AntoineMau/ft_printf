/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hhll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:48:11 by judumay           #+#    #+#             */
/*   Updated: 2019/01/16 12:01:42 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_hhll(__int32_t *tab, va_list ap, const char *restrict format,
	__int32_t i)
{
	if (format[i] == 'h')
		ft_hh(tab, ap, format, i);
	else if (format[i] == 'l')
		ft_ll(tab, ap, format, i);
	else
		return (FALSE);
	return (TRUE);
}
