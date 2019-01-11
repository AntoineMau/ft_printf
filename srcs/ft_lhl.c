/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lhl.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:52:36 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 16:56:58 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

int		ft_lhl(int champ, va_list ap, char k)
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
