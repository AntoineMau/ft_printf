/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_precision.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:05:02 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/23 12:05:02 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

void			ft_printf_get_precision(t_printf *p, const char *format)
{
	int		tmp;
	char	tmp_intmax_buffer;
	int		i;

	i = 0;
	++p->index;
	tmp = ft_atoi(&format[p->index]);
	while (format[p->index] == '0')
		++p->index;
	tmp_intmax_buffer = format[p->index];
	while (ft_isdigit(format[p->index + i]) && i < 11)
		++i;
	if (!ft_isdigit(format[p->index]) && !(p->precision = 0))
		return ;
	while (ft_isdigit(format[p->index]))
		++p->index;
	if (tmp < 0 || i > 11 || (i == 10 && tmp_intmax_buffer > '2'))
		return ;
	p->precision = tmp;
}
