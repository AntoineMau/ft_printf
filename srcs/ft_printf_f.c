/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:04:45 by anmauffr          #+#    #+#             */
/*   Updated: 2019/02/01 15:49:35 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static long double	ft_printf_f_get_arg(t_printf *p)
{
	double	ret;

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
		&& (tmp = (size_t)p->champ - ft_strlen(p->conv_ret) + 1))
	{
		if ((((nbr < 0 && p->flags->zero) || (((p->flags->plus && nbr >= 0)
			|| p->flags->space) && p->flags->zero)) && !p->flags->less) ||
			p->conv_ret[0] == '-')
			--tmp;
		if (nbr > 0)
			tmp--;
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

static t_printf		*ft_printf_f_flags2(t_printf *p, long double tmp)
{
	char		*str;
	char		*buf;

	buf = NULL;
	if ((str = ft_strnew(1)) && p->flags->plus && tmp >= 0)
	{
		if ((str[0] = '+') && (p->conv_ret[0] == '0' && tmp != 0 &&
		(ft_strlen(p->conv_ret) == (size_t)p->champ)))
		{
			p->conv_ret[0] = '+';
			buf = ft_strdup(p->conv_ret);
		}
		else
			buf = ft_strjoin(str, p->conv_ret);
		ft_strdel(&p->conv_ret);
		p->conv_ret = buf;
	}
	ft_strdel(&str);
	return (p);
}

static t_printf		*ft_printf_f_flags(t_printf *p, long double tmp)
{
	int		i;

	i = 0;
	p = ft_printf_f_flags2(p, tmp);
	if (p->flags->zero && tmp < 0)
	{
		while (p->conv_ret[i] != '-')
			i++;
		p->conv_ret[i] = '0';
		p->conv_ret[0] = '-';
	}
	if (p->flags->zero && p->flags->plus && tmp > 0)
		p->conv_ret[0] = '+';
	(tmp > 0 && p->flags->space && !p->flags->plus) ? p->conv_ret = ft_strjoin(" ", p->conv_ret) : 0;
	return (p);
}

static double	ft_dabs(double n)
{
	return (n < 0 ? -n : n);
}

#include <stdio.h>

static int		ldtoa_fill(double n, t_printf *p, long long value, int pe)
{
	long long		len;
	char			*s;
	int				i;
	int				j;

	j = 0;
	i = p->precision;
	len = pe - 1 - p->precision;
	s = (char*)malloc(sizeof(char) * p->precision + len + 1);
	s[len + p->precision + 1] = '\0';
	while (p->precision--)
	{
		s[len + p->precision + 1] = value % 10 + ((value % 10 < 10) ? '0' : 0);
		value /= 10;
	}
	s[len] = '.';
	value = (long long)(n < 0 ? -n : n);
	while (++p->precision < len)
	{
		s[len - p->precision - 1] =
		value % 10 + ((value % 10 < 10) ? '0' : 102);
		value /= 10;
	}
	(n < 0) ? s[0] = '-' : 0;
	free(p->conv_ret);
	p->conv_ret = s;
	p->precision = 0;
	while (p->conv_ret[p->precision] != '.' && p->conv_ret[p->precision])
		p->precision++;
	j += p->precision;
	p->precision = 0;
	while (p->precision <= i && p->conv_ret[p->precision])
		p->precision++;
	if (p->precision == i)
		p->conv_ret[p->precision] = '\0';
	if (i > 16)
	{
		j = -1;
		while (p->conv_ret[++j] != '.')
			;
		j++;
		while (p->conv_ret[j])
			p->conv_ret[j++] = '\0';
		p->precision--;
		ft_dtoa_printf(n, p, p->flags->hash);
	}
	return (i);
}

int				ft_putdouble(double n, t_printf *p)
{
	long long	tmp;
	long long	len;
	double		decimal;
	long long	value;
	long long	pe;

	if (p->precision == -1)
		p->precision = 6;
	len = 1;
	tmp = (long long)(n < 0 ? -n : n);
	while (tmp && ++len)
		tmp /= 10;
	pe = p->precision + len + ((n < 0) ? 1 : 0);
	decimal = ft_dabs(n);
	decimal = (decimal - (long long)(ft_dabs(n))) * ft_pow(10, p->precision + 1);
	decimal = ((long long)decimal % 10 > 4) ? decimal / 10 + 1 : decimal / 10;
	value = (long long)decimal;
	pe = ldtoa_fill(n, p, value, pe);
	return (pe);
}

t_printf			*ft_printf_f(t_printf *p)
{
	double		tmp;
	int			i;

	if (!(p->conv == FT_PRINTF_F))
		return (p);
	tmp = ft_printf_f_get_arg(p);
	if (tmp != 0)
		i = ft_putdouble(tmp, p);
	else
	{
		if (p->precision < 0 && (p->precision = 6))
			p->conv_ret = ft_dtoa_printf(tmp, p, p->flags->hash);
		else
			p->conv_ret = ft_dtoa_printf(tmp, p, p->flags->hash);
	}
	if (p->error)
		return (p);
	if (!(p->flags->zero && !p->flags->less))
		p = ft_printf_f_flags(p, tmp);
	if (p->error)
		return (p);
	if (i == 0 && !p->flags->hash)
	{
		while (p->conv_ret[i])
		{
			if (p->conv_ret[i] == '.')
				p->conv_ret[i] = '\0';
			i++;
		}
		i = 0;
	}
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
