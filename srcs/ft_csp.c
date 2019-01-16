/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:34:04 by judumay           #+#    #+#             */
/*   Updated: 2019/01/16 15:14:46 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t		ft_csp(__int32_t *tab, va_list ap, const char *restrict format,
	__int32_t i)
{
	if (format[i] == 'c')
		ft_c(tab, ap);
	else if (format[i] == 's')
		ft_putstr(va_arg(ap, char *), tab);
	else if (format[i] == 'p')
		ft_x_p(va_arg(ap, __int32_t), tab);
	else
		return (FALSE);
	return (TRUE);
}
