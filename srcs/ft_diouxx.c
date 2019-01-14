/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diouxx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:32:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 12:21:58 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_diouxx(__int32_t champ, va_list ap, __int8_t k, __int32_t preci)
{
	if (k == 'd' || k == 'i')
		ft_d_i_(ap, champ, preci);
	else if (k == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), -1, champ);
	else if (k == 'u')
		ft_u(ap, champ);
	else if (k == 'x' || k == 'X')
		ft_x(va_arg(ap, __uint32_t), k - 23, -1, champ);
	else
		return (FALSE);
	return (TRUE);
}
