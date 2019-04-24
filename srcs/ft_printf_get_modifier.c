/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_modifier.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 15:10:50 by judumay           #+#    #+#             */
/*   Updated: 2019/04/24 17:59:05 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

void			ft_printf_get_modifier(t_printf *p, const char *format)
{
	if (format[p->index] == 'h')
	{
		if (p->modifier == FT_PRINTF_H)
			p->modifier = FT_PRINTF_HH;
		else if (p->modifier < FT_PRINTF_H)
			p->modifier = FT_PRINTF_H;
	}
	if (format[p->index] == 'l')
	{
		if (p->modifier == FT_PRINTF_L)
			p->modifier = FT_PRINTF_LL;
		else if (p->modifier < FT_PRINTF_L)
			p->modifier = FT_PRINTF_L;
	}
	if (format[p->index] == 'L')
		p->modifier = FT_PRINTF_FL;
	++p->index;
}
