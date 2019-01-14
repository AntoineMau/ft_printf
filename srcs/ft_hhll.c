/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hhll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:48:11 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 08:27:29 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_hhll(__int32_t champ, va_list ap, __int8_t k)
{
	if (k == 'h')
		ft_hh(-1, champ, ap, k);
	else if (k == 'l')
		ft_ll(champ, ap, k);
	else
		return (FALSE);
	return (TRUE);
}
