/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cspdiouxxhhllhll.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 17:05:16 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 17:57:48 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_check_flag(const char *restrict format, int i, int champ, va_list ap)
{
	if (format[i] == '%' && i++)
	{
		if ((champ = format[i] >= '0' && format[i] <= '9' ?
		ft_atoi(&format[i]) : 1) < 1)
			;
		while (format[i] >= '0' && format[i] <= '9')
			i++;
		ft_cspdiouxxhhllhll(champ, ap, format, i);
		if ((format[i] == 'h' && format[i + 1] == 'h') || (format[i] == 'l'
		&& format[i + 1] == 'l'))
			i += 2;
		else if ((format[i] == 'h' || format[i] == 'l' || format[i] == 'L')
		|| (format[i] == '.'))
			i++;
	}
	else
		ft_putchar(format[i]);
	return (i);
}

int		ft_cspdiouxxhhllhll(int champ, va_list ap,
const char *restrict format, int i)
{
	if (format[i] == 'c' || format[i] == 's' || format[i] == 'p')
		ft_csp(champ, ap, format[i]);
	else if (format[i] == 'd' || format[i] == 'i' || format[i] == 'o'
	|| format[i] == 'u' || format[i] == 'x' || format[i] == 'X')
		ft_diouxx(champ, ap, format[i]);
	else if (format[i] == 'f')
		ft_putnbr_float1(va_arg(ap, double), 6, champ);
	else if (format[i] == '%')
		ft_putstr("%", -1, champ);
	else if ((format[i] == 'h' && format[i + 1] == 'h') || (
	(format[i] == 'l' && format[i + 1] == 'l') && (i += 2)))
		ft_hhll(champ, ap, format[i]);
	else if ((format[i] == 'h' || format[i] == 'l'
	|| format[i] == 'L') && i++)
		ft_lhl(champ, ap, format[i]);
	else if (format[i] == '.' && i++)
		i = ft_printf_point(champ, ap, format, i);
	return (TRUE);
}