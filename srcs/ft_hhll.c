/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hhll.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:48:11 by judumay           #+#    #+#             */
/*   Updated: 2019/01/15 15:53:24 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

__int32_t	ft_hhll(__int32_t *tab, va_list ap, __int8_t k)
{
	printf("\nk: %c\n", k);
	if (k == 'h')
		ft_hh(tab, ap, k);
	else if (k == 'l')
		ft_ll(tab, ap, k);
	else
		return (FALSE);
	return (TRUE);
}
