/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_h.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 15:15:34 by judumay           #+#    #+#             */
/*   Updated: 2019/01/15 15:55:55 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

__int32_t	ft_h(__int32_t tab[0], va_list ap, __int8_t k)
{
	char	*str;
	char	*tmp;

	str = NULL;
	tmp = NULL;
	if (k == 'd' || k == 'i')
	{
		if (!(str = ft_itoa_short(va_arg(ap, __int32_t), tmp)))
			return (FALSE);
		ft_putstr(str, tab);
	}
	else if (k == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), tab);
	else if (k == 'u')
	{
		if (!(str = ft_itoa_unsi(va_arg(ap, __uint32_t), tmp)))
			return (FALSE);
		ft_putstr(str, tab);
		free(str);
	}
	else if (k == 'x' || k == 'X')
		ft_x(va_arg(ap, __uint32_t), k - 23, tab);
	else
		return (FALSE);
	return (TRUE);
}
