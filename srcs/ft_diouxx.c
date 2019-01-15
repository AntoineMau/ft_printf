/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_diouxx.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:32:54 by judumay           #+#    #+#             */
/*   Updated: 2019/01/15 15:46:32 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_diouxx(__int32_t *tab, va_list ap, __int8_t k)
{
	if (k == 'd' || k == 'i')
		ft_d_i_(ap, tab);
	else if (k == 'o')
		ft_putoct_int(va_arg(ap, __int32_t), tab);
	else if (k == 'u')
		ft_u(ap, tab);
	else if (k == 'x' || k == 'X')
		ft_x(va_arg(ap, __uint32_t), k - 23, tab);
	else
		return (FALSE);
	return (TRUE);
}
