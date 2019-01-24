/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:04:45 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/24 15:32:36 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static long double	ft_printf_f_get_arg(t_printf *p)
{
	long double	ret;

	ret = 0;
	if (p->modifier == FT_PRINTF_NO_MODIFIERS)
		ret = va_arg(p->ap, double);
	else if (p->modifier == FT_PRINTF_L)
		ret = va_arg(p->ap, double);
	else if (p->modifier == FT_PRINTF_FL)
		ret = va_arg(p->ap, long double);
	return (ret);
}

static t_printf		*ft_printf_f_champ(t_printf *p, long double nbr)
{
	size_t		tmp;
	char		*str;
	char		*buf;

	if (p->champ != -1 && (size_t)p->champ > ft_strlen(p->conv_ret)
		&& (tmp = (size_t)p->champ - ft_strlen(p->conv_ret)))
	{
		if (((nbr < 0 && p->flags->zero) || (((p->flags->plus && nbr >= 0)
			|| p->flags->space) && p->flags->zero)) && p->precision == -1
			&& !p->flags->less)
			--tmp;
		nbr = 0;
		str = ft_strnew(tmp);
		if (p->flags->zero && !p->flags->less)
			str = ft_strfill(str, '0', tmp);
		else
			str = ft_strfill(str, ' ', tmp);
		if (p->flags->less)
			buf = ft_strjoin(p->conv_ret, str);
		else
			buf = ft_strjoin(str, p->conv_ret);
		ft_strdel(&p->conv_ret);
		ft_strdel(&str);
		p->conv_ret = buf;
	}
	return (p);
}

static t_printf		*ft_printf_f_flags(t_printf *p, long double tmp)
{
	char		*str;
	char		*buf;

	buf = NULL;
	str = ft_strnew(1);
	if ((p->flags->plus && tmp >= 0))
	{
		str[0] = '+';
		if (p->conv_ret[0] == '0')
		{
			p->conv_ret[0] = '+';
			buf = ft_strdup(p->conv_ret);
		}
		else
		{
			buf = ft_strjoin(str, p->conv_ret);
		}
		ft_strdel(&p->conv_ret);
		p->conv_ret = buf;
	}
	else if (p->flags->space && tmp > 0)
	{
		str[0] = ' ';
		buf = ft_strjoin(str, p->conv_ret);
		ft_strdel(&p->conv_ret);
		p->conv_ret = buf;
	}
	ft_strdel(&str);
	return (p);
}

t_printf			*ft_printf_f(t_printf *p)
{
	long double		tmp;
	if (!(p->conv == FT_PRINTF_F))
		return (p);
	tmp = ft_printf_f_get_arg(p);
	if (p->precision == -1)
	{
		if ((!(p->conv_ret = ft_dtoa_printf(tmp, 6))
		&& (p->error = -1)))
			return (p);
	}
	else
		if ((!(p->conv_ret = ft_dtoa_printf(tmp, p->precision))
		&& (p->error = -1)))
			return (p);
	if (p->error)
		return (p);
	if (!(p->flags->zero && !p->flags->less))
		p = ft_printf_f_flags(p, tmp);
	if (p->error)
		return (p);
	p = ft_printf_f_champ(p, tmp);
	if (p->error)
		return (p);
	if (p->flags->zero && !p->flags->less)
		p = ft_printf_f_flags(p, tmp);
	if (p->error)
		return (p);
	ft_putstr(p->conv_ret);
	p->ret += ft_strlen(p->conv_ret);
	return (p);
}
