/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:02:11 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/21 14:47:05 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

void		ft_reset(t_printf *p, const char *restrict format)
{
	p->plus = 0;
	p->minus = 0;
	p->space = 0;
	p->hash = 0;
	p->preci = -1;
	p->champ = 0;
	p->zero = 0;
	p->length = 0;
	p->ret = 0;
	p->modifier = FT_PRINTF_NO_MODIFIERS;
	p->conv = FT_PRINTF_WAIT_INPUT;
	p->tmpchar = 0;
	ft_strdel(&p->conv_ret);
}

void		ft_init(t_printf *p, const char *restrict format)
{
	p->plus = 0;
	p->minus = 0;
	p->space = 0;
	p->hash = 0;
	p->preci = -1;
	p->champ = 0;
	p->i = 0;
	p->zero = 0;
	p->length = 0;
	p->format = (char*)format;
}

int32_t		ft_check(char *format)
{
	int32_t		i;
	t_printf	t;

	i = -1;
	ft_init(&t, format);
	while (t.format[++i])
		if (t.format[i] == '%' && i++)
		{
			while (t.format[i] == '+' || t.format[i] == '-' ||
			t.format[i] == ' ')
			{
				t.space = t.format[i] == ' ' && t.plus == 0 ? 1 : 0;
				t.format[i] == '-' ? t.minus = 1 : 0;
				t.format[i] == '+' ? t.plus = 1 : 0;
				i++;
			}
			t.format[i] >= '0' && t.format[i] <= '9' ? t.champ = ft_atoi(&t.format[i]) : 0;
			while (t.format[i] >= '0' && t.format[i] <= '9')
				i++;
			if (t.format[i] == '.' && (t.preci = ft_atoi(&t.format[++i])))
				while (t.format[i] >= '0' && t.format[i] <= '9')
					i++;
			if ((t.format[i] == 'l' || t.format[i] == 'h' || t.format[i] == 'L'))
				i++;
			if ((t.format[i] == 'l' || t.format[i] == 'h') && t.format[i - 1] != 'L')
				i++;
			if ((t.format[i] == 'c' || t.format[i] == 'p') && t.format[i - 1] != 'l' && t.format[i - 1] != 'h' && t.format[i - 1] != 'L' && t.preci == -1)
				;
			else if ((format[i] == 's' || format[i] == '%') && t.format[i - 1] != 'l' && t.format[i - 1] != 'h' && t.format[i - 1] != 'L')
				;
			else if ((t.format[i] == 'd' || t.format[i] == 'i' || t.format[i] == 'o' || t.format[i] == 'u' || t.format[i] == 'u') && t.format[i - 1] != 'L')
				;
			else if (t.format[i] == 'f' && (format[i - 1] != 'h' || (format[i - 1] == 'l' && format[i - 2] != 'l')))
				;
			else
			{
				printf("FAILED\n");
				return (FALSE);
			}
		}
	printf("WIN\n");
	return (TRUE);
}

int			ft_printf(const char *restrict format, ...)
{
	t_printf	p;
	ft_init(&p, format);
	va_start(p.ap, format);
	ft_check(p.format);
	ft_checkflags(&p);
	va_end(p.ap);
	return (p.length);
}

int		main(void)
{
	printf("Bonjour: % +10.25d", 25);
	ft_printf("Bonjour: %10.25d", 25);
	return (0);
}

/*
** char : -128 / 127
** uchar : 0 / 255
**
** int | long : -2147483648 / 2147483647
** uint | ulong : 0 / 4294967295
**
** short : -32768 / 32767
** ushort : 0 / 65535
**
** llong: 9223372036854775807 / -9223372036854775808
** ullong : 0 / 18446744073709551615
*/
