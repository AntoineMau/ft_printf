/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lhl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:52:36 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 08:30:00 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_lhl(__int32_t champ, va_list ap, __int8_t k)
{
	if (k == 'h')
		ft_h(champ, ap, k);
	else if (k == 'l')
		;
	else if (k == 'L')
		ft_putnbr_float_ld1(va_arg(ap, long double), 6);
	else
		return (FALSE);
	return (TRUE);
}
