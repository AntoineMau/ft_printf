/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:53:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/16 12:35:49 by anmauffr         ###   ########.fr       */
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
	if ((format[++i] == 'd' || format[i] == 'i')) //&& tab[0]++) //ft_d_i_short
		ft_putstr(ft_itoa(va_arg(ap, __int32_t), str), tab);
	else if (format[i] == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), tab);
	else if (format[i] == 'u')
	{
		tmp = NULL;
		if (!(str = ft_itoa_unsi(va_arg(ap, __int32_t), tmp)))
			return (FALSE);
		free(tmp);
		ft_putstr(str, tab);
		free(str);
		str = NULL;
	}
	else if (format[i] == 'x' || format[i] == 'X')
		ft_x(va_arg(ap, __uint32_t), format[i] - 23, tab);
	else
		return (FALSE);
	return (TRUE);
}
