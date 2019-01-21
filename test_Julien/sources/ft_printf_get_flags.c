/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_get_flags.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/06 22:17:15 by mapandel          #+#    #+#             */
/*   Updated: 2019/01/21 16:33:01 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

void			ft_printf_get_flag(t_printf *p, const char *format)
{
	if (format[p->index] == '#')
		p->flags->hash = 1;
	else if (format[p->index] == '0')
		p->flags->zero = 1;
	else if (format[p->index] == '-')
		p->flags->less = 1;
	else if (format[p->index] == ' ')
		p->flags->space = 1;
	else if (format[p->index] == '+')
		p->flags->plus = 1;
	++p->index;
}
