/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:48:42 by anmauffr          #+#    #+#             */
/*   Updated: 2018/12/17 16:02:45 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_printf(const char * restrict format, ...)
{
	int		i;
	int		preci;
	int		champ;
	char	*str;
	va_list	ap;

	va_start(ap, format);
	i = -1;
	while (format[++i])
		if (format[i] == '%')
		{
			i++;
			if ((champ = (format[i] >= '0' && format[i] <= '9' ?
			ft_atoi(&format[i]) : 1)) < 1)
				return (FALSE);
			while (format[i] >= '0' && format[i] <= '9')
				i++;
			if (format[i] == 'c')
			{
				while (champ - 1 > 0)
				{
					ft_putchar(' ');
					champ--;
				}
				ft_putchar(va_arg(ap, int));
			}
			else if (format[i] == 's')
				ft_putstr(va_arg(ap, char *), -1, champ);
			else if (format[i] == 'p')
				ft_puthex_int_p(va_arg(ap, int), champ);
			else if (format[i] == 'd' || format[i] == 'i')
			{
				if (!(str = ft_itoa(va_arg(ap, int))))
					return (FALSE);
				ft_putstr(str, -1, champ);
				free(str);
			}
			else if (format[i] == 'o')
				ft_putstr(ft_putoct_int(va_arg(ap, int)), -1, champ);
			else if (format[i] == 'u')
				ft_putstr(ft_itoa(va_arg(ap, int)), -1, champ);
			else if (format[i] == 'x' || format[i] == 'X')
				ft_putstr(ft_puthex_int(va_arg(ap, int),
				format[i] - 23), -1, champ);
			else if (format[i] == 'f')
				ft_putnbr_float1(va_arg(ap, double), 6, champ);
			else if (format[i] == '%')
				ft_putchar('%');
			else if (format[i] == 'h' && format[i + 1] == 'h' && (i += 2))
				if (format[i] == 'd' || format[i] == 'i')
					i++;
				else if (format[i] == 'o')
					i++;
				else if (format[i] == 'u')
					i++;
				else if (format[i] == 'x' || format[i] == 'X')
					i++;
				else
				return (FALSE);
			else if (format[i] == 'h' && i++)
				if (format[i] == 'd' || format[i] == 'i')
					ft_putnbr_short(va_arg(ap, int), 1);
				else if (format[i] == 'o')
					ft_putoct_short(va_arg(ap, int));
				else if (format[i] == 'u')
					ft_putnbr_short(va_arg(ap, int), 2);
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_short(va_arg(ap, int), format[i] - 23);
				else
					return (FALSE);
			else if (format[i] == 'l' && format[i + 1] == 'l' && (i += 2))
				if (format[i] == 'd' || format[i] == 'i')
					ft_putnbr_long_long(va_arg(ap, int), 1);
				else if (format[i] == 'o')
					ft_putoct_long_long(va_arg(ap, int));
				else if (format[i] == 'u')
					ft_putnbr_long_long(va_arg(ap, int), 2);
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_long_long(va_arg(ap, int), format[i] - 23);
				else
					return (FALSE);
			else if (format[i] == 'l' && i++)
				if (format[i] == 'd' || format[i] == 'i')
					ft_putnbr_long(va_arg(ap, int), 1, champ);
				else if (format[i] == 'o')
					ft_putoct_long(va_arg(ap, int));
				else if (format[i] == 'u')
					ft_putnbr_long(va_arg(ap, int), 2, champ);
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_long(va_arg(ap, int), format[i] - 23);
				else if (format[i] == 'f')
					ft_putnbr_float1(va_arg(ap, double), 6, champ);
				else
					return (FALSE);
			else if (format[i] == 'L' && i++)
				ft_putnbr_float_ld1(va_arg(ap, long double), 6);
			else if (format[i] == '.' && i++)
			{
				preci = ft_atoi(&format[i]);
				while (format[i] >= '0' && format[i] <= '9')
					i++;
				if (format[i] == 'd' || format[i] == 'i')
				{
					champ++;
					while (--champ > preci)
						ft_putchar(' ');
					if (!(str = ft_itoa(va_arg(ap, int))))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
				}
				else if (format[i] == 'o')
				{
					champ++;
					while (--champ > preci)
						ft_putchar(' ');
					if (!(str = ft_putoct_int(va_arg(ap, int))))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
				}
				else if (format[i] == 'u')
				{
					champ++;
					while (--champ > preci)
						ft_putchar(' ');
					if (!(str = ft_itoa(va_arg(ap, int))))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
				}
				else if (format[i] == 'x' || format[i] == 'X')
				{
					champ++;
					while (--champ > preci)
						ft_putchar(' ');
					if (!(str = ft_puthex_int(va_arg(ap, int), format[i] - 23)))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
				}
				else if (format[i] == 'f')
					ft_putnbr_float1(va_arg(ap, double), preci, champ);
				else if (format[i] == 's')
					ft_putstr(va_arg(ap, char *), preci, champ);
				else
					return (FALSE);
			}
			else
				return (FALSE);
		}
		else
			ft_putchar(format[i]);
	va_end(ap);
	return (TRUE);
}

int		main(void)
{
	float		age;

	age = 12.123;
	printf("Vrai: Je m'appelle %10s, j'ai %lf ans \n", "Antoine", age);
	ft_printf("Mien: Je m'appelle %10s, j'ai %lf ans \n", "Antoine", age);
	return (0);
}
