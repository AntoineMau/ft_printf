/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hh.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 14:53:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 08:27:16 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

__int32_t	ft_hh(__int32_t preci, __int32_t champ, va_list ap, __int8_t k)
{
	char	*str;
	char	*tmp;

	str = NULL;
	tmp = NULL;
	if (k == 'd' || k == 'i')
		ft_putstr(ft_itoa(va_arg(ap, __int32_t), str), preci, champ++);
	else if (k == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), -1, champ);
	else if (k == 'u')
	{
		tmp = NULL;
		if (!(str = ft_itoa_unsi(va_arg(ap, __int32_t), tmp)))
			return (FALSE);
		free(tmp);
		ft_putstr(str, -1, champ);
		free(str);
		str = NULL;
	}
	else if (k == 'x' || k == 'X')
		ft_x(va_arg(ap, __uint32_t), k - 23, -1,
	champ);
	else
		return (FALSE);
	return (TRUE);
}
