/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/23 12:04:45 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/23 15:16:44 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ftprintf.h"

static __int64_t	ft_printf_f_get_arg(t_printf *p)
{
	double	ret;

	ret = 0;
	if (p->modifier == FT_PRINTF_NO_MODIFIERS)
		ret = va_arg(p->ap, double);
	else if (p->modifier == FT_PRINTF_L)
		ret = va_arg(p->ap, long);
	else if (p->modifier == FT_PRINTF_FL)
		ret = va_arg(p->ap, long double);
	return (ret);
}

static t_printf		*ft_printf_f_precision(t_printf *p, __int64_t tmp)
{
	size_t		tmp2;
	char		*str;
	char		*buf;

	if (p->precision != -1 && !p->precision && !tmp)
	{
		str = ft_strnew(0);
		ft_strdel(&p->conv_ret);
		p->conv_ret = str;
	}
	else if (p->precision != -1 && (size_t)p->precision > ft_strlen(p->conv_ret)
		&& (tmp2 = (size_t)p->precision - ft_strlen(p->conv_ret)))
	{
		if (!(str = ft_strnew(tmp2))
			&& (p->error = -1))
			return (p);
		str = ft_strfill(str, '0', tmp2);
		buf = ft_strjoin(str, p->conv_ret);
		if (!buf && (p->error = -1))
			return (p);
		ft_strdel(&p->conv_ret);
		ft_strdel(&str);
		p->conv_ret = buf;
	}
	return (p);
}

static t_printf		*ft_printf_f_champ(t_printf *p, __int64_t nbr)
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
		str = ft_strnew(tmp);
		if (p->flags->zero && p->precision == -1 && !p->flags->less)
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

static t_printf		*ft_printf_f_flags(t_printf *p, __int64_t tmp)
{
	char		*str;
	char		*buf;

	buf = NULL;
	str = ft_strnew(1);
	if (tmp < 0 || (p->flags->plus && tmp >= 0))
	{
		str[0] = '+';
		if (tmp < 0)
			str[0] = '-';
		buf = ft_strjoin(str, p->conv_ret);
		ft_strdel(&p->conv_ret);
		p->conv_ret = buf;
	}
	else if (p->flags->space)
	{
		str[0] = ' ';
		buf = ft_strjoin(str, p->conv_ret);
		ft_strdel(&p->conv_ret);
		p->conv_ret = buf;
	}
	ft_strdel(&str);
	return (p);
}

char	*ft_binaire(double i)
{
	char *bin;
	bin = NULL;
	i = 0;
	return (bin);
}

char	*ft_hexa()
{
	char a[65] = "0100000000110101000000000000000000000000000000000000000000000000";
	char *hexa;
	hexa = a;
	int num = 0;
	do{
		int b = *hexa=='1'?1:0;
		num = (num<<1)|b;
		hexa++;
	} while (*hexa);
	printf("%X\n", num);

	return (hexa);
}

char	*ft_hexatoa(char *hexa)
{
	char *str;

	str = hexa;
	return (str);
}

char	*ft_convert_float(double i)
{
	//char	*str;
	//char	*bin;
	char	*hexa;
	i = 0;

	//bin = ft_binaire(i);
	hexa = ft_hexa();
	printf("hexa : %s", hexa);
	//str = ft_hexatoa(hexa);
	return (hexa);
}

t_printf			*ft_printf_f(t_printf *p)
{
	__int64_t	tmp;

	if (!(p->conv == FT_PRINTF_F))
		return (p);
	if (!(p->conv_ret =
	ft_convert_float((tmp = ft_printf_f_get_arg(p))))
	&& (p->error = -1))
		return (p);
	p = ft_printf_f_precision(p, tmp);
	if (p->error)
		return (p);
	if (!(p->flags->zero && p->precision == -1 && !p->flags->less))
		p = ft_printf_f_flags(p, tmp);
	if (p->error)
		return (p);
	p = ft_printf_f_champ(p, tmp);
	if (p->error)
		return (p);
	if (p->flags->zero && p->precision == -1 && !p->flags->less)
		p = ft_printf_f_flags(p, tmp);
	if (p->error)
		return (p);
	ft_putstr(p->conv_ret);
	p->ret += ft_strlen(p->conv_ret);
	return (p);
}
