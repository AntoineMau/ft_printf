/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preflags.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 11:25:24 by judumay           #+#    #+#             */
/*   Updated: 2019/01/21 14:10:23 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void		ft_printf_get_flag(t_printf *p)
{
	if (p->format[p->i] == '#')
		p->hash = 1;
	else if (p->format[p->i] == '0')
		p->zero = 1;
	else if (p->format[p->i] == '-')
		p->minus = 1;
	else if (p->format[p->i] == ' ')
		p->space = 1;
	else if (p->format[p->i] == '+')
		p->plus = 1;
	++p->i;
}

static void		ft_pritnf_get_conv2(t_printf *p)
{
	if (p->format[p->i] == 's')
		p->conv = FT_PRINTF_S;
	else if (p->format[p->i] == 'u')
		p->conv = FT_PRINTF_U;
	else if (p->format[p->i] == 'x')
		p->conv = FT_PRINTF_X;
	else if (p->format[p->i] == 'X')
		p->conv = FT_PRINTF_XX;
	else if (p->format[p->i] == '%')
		p->conv = FT_PRINTF_PERCENT;
	else
		p->conv = FT_PRINTF_WAIT_INPUT;

void		t_printf_get_conv(t_printf *p, const char *format)
{
	if (p->format[p->i] == 'c')
		p->conv = FT_PRINTF_C;;
	else if (p->format[p->i] == 'd' || p->format[p->i] == 'i')
		p->conv = FT_PRINTF_D;
	else if (p->format[p->i] == 'o')
		p->conv = FT_PRINTF_O;
	else if (p->format[p->i] == 'p')
		p->conv = FT_PRINTF_P;
	else
		ft_pritnf_get_conv2(p, format);
}

void		ft_printf_get_number(t_printf *p)
{
	int		tmp;

	p->champ = ft_atoi(&p->format[p->i]);
	while (ft_isdigit(p->format[p->i]))
		++p->i;
}

void		ft_printf_get_preci(t_printf *p)
{
	int		tmp;

	p->preci = ft_atoi(&p->format[p->i]);
	while (ft_isdigit(p->format[p->i]))
		++p->i;
}

void		ft_printf_get_modifier(t_printf *p)
{
	if (p->format[p->i] == 'h')
		;
	else if (p->format[p->i] == 'l')
		;
	else if (p->format[p->i] == 'L')
		;
}

t_printf		*ft_printf_conv(t_printf *p)
{
	int		i;

	i = 0;
	while (i < 11 && !p->error)
		p = p->tab_ptr[i++](p);
	return (p);
}
