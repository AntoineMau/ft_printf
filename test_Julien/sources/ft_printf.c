/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/30 10:21:36 by mapandel          #+#    #+#             */
/*   Updated: 2019/01/21 16:27:12 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

int		ft_printf(char *format, ...)
{
	t_printf		*p;
	int				ret;

	p = NULL;
	ret = 0;
	if (!format || !(p = init_t_printf(p)))
		return (-1);
	va_start(p->ap, format);
	ft_printf_display(p, format);
	va_end(p->ap);
	ret = p->ret;
	if (p->error == 1)
		ret = -1;
	reset_t_printf(p);
	del_t_printf(p);
	return (ret);
}
