/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:02:11 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/18 17:55:34 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"

/*
char		*ft_flags(void)
{
	int		(*flags[19])(t_printf);

	flags[0] = &ft_moins();
	flags[1] = &ft_plus();
	flags[2] = &ft_zero();
	flags[3] = &ft_hash();
	flags[4] = &ft_space();
	flags[5] = &ft_pourcent();
	flags[6] = &ft_hh();
	flags[7] = &ft_h();
	flags[8] = &ft_ll();
	flags[9] = &ft_l();
	flags[10] = &ft_L();
	flags[11] = &ft_c();
	flags[12] = &ft_s();
	flags[13] = &ft_p();
	flags[14] = &ft_d_i();
	flags[15] = &ft_o();
	flags[16] = &ft_u();
	flags[17] = &ft_x();
	flags[18] = &ft_f();
	return ((*flags)(args));
}
*/

int32_t		ft_atoi(char *str)
{
	uint8_t		i;
	int32_t		nb;
	uint8_t		neg;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	neg = (str[i] == '-' ? -1 : 1);
	str[i] == '-' || str[i] == '+' ? i++ : i;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * neg);
}

void		ft_init(t_printf *p)
{
	p->plus = 0;
	p->minus = 0;
	p->space = 0;
	p->hash = 0;
	p->preci = -1;
	p->champ = 0;
	p->zero = 0;
	p->length = 0;
	p->format = 0;
}

int32_t		ft_check(char *format)
{
	int32_t		i;
	t_printf	t;

	i = -1;
	ft_init(&t);
	t.format = format;
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

	ft_init(&p);
	p.format = (char*)format;
	va_start(p.ap, format);
	ft_check(p.format);
	while (*p.format)
	{
		if (*p.format == '%')
			;//ft_checkflags(&p);
		p.format++;
	}
	va_end(p.ap);
	return (p.length);
}

int		main(void)
{
	printf("Bonjour: %++++++++++10.25dhhh\n", 25);
	ft_printf("vrai: %++++++++++10.25d%hhd");
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
