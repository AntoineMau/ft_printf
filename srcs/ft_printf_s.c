/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:05:35 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/23 12:05:35 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static t_printf		*ft_printf_s_precision(t_printf *p)
{
	if (p->precision != -1 && (size_t)p->precision < ft_strlen(p->conv_ret))
	{
		if (!(p->conv_ret = ft_strsub_leakless(p->conv_ret, 0,
			(size_t)p->precision)))
		{
			p->error = -1;
			return (p);
		}
	}
	return (p);
}

static t_printf		*ft_printf_s_champ(t_printf *p)
{
	size_t		tmp;
	char		*str;
	char		*buf;

	if (p->champ != -1 && (size_t)p->champ > ft_strlen(p->conv_ret)
		&& (tmp = (size_t)p->champ - ft_strlen(p->conv_ret)))
	{
		if (!(str = ft_strnew(tmp))
			&& (p->error = -1))
			return (p);
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

t_printf			*ft_printf_s(t_printf *p)
{
	char	*str;

	if (!(p->conv == FT_PRINTF_S && p->modifier != FT_PRINTF_L))
		return (p);
	if (!(str = va_arg(p->ap, char*)))
	{
		if (!(p->conv_ret = ft_strdup("(null)"))
			&& (p->error = -1))
			return (p);
	}
	else if (!(p->conv_ret = ft_strdup(str))
		&& (p->error = -1))
		return (p);
	p = ft_printf_s_precision(p);
	if (p->error)
		return (p);
	p = ft_printf_s_champ(p);
	if (p->error)
		return (p);
	ft_putstr(p->conv_ret);
	p->ret += ft_strlen(p->conv_ret);
	return (p);
}
