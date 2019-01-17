/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:34:04 by judumay           #+#    #+#             */
/*   Updated: 2019/01/17 17:12:09 by judumay          ###   ########.fr       */
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
		ft_putstr_s(va_arg(ap, char *), tab, 0);
	else if (format[i] == 'p')
		ft_x_p(va_arg(ap, __int32_t), tab);
	else
		return (FALSE);
	return (TRUE);
}
