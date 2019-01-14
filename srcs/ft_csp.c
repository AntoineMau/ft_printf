/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_csp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:34:04 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 12:29:02 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t		ft_csp(__int32_t champ, va_list ap, __int8_t k, __int32_t preci)
{
	if (k == 'c')
		ft_c(champ, ap);
	else if (k == 's')
		ft_putstr(va_arg(ap, char *), preci, champ);
	else if (k == 'p')
		ft_x_p(va_arg(ap, __int32_t), champ);
	else
		return (FALSE);
	return (TRUE);
}
