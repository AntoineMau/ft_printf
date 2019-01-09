/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:48:42 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/09 13:42:12 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_printf(const char *restrict format, ...)
{
	int		i;
	int		preci;
	int		champ;
	char	*str;
	char	*tmp;
	va_list	ap;

	va_start(ap, format);
	i = -1;
	while (format[++i])
	{
		champ = 0;
		tmp = NULL;
		if (format[i] == '%')
		{
			i++;
			if ((champ = format[i] >= '0' && format[i] <= '9' ?
			ft_atoi(&format[i]) : 1) < 1)
				;
			while (format[i] >= '0' && format[i] <= '9')
				i++;
			if (format[i] == 'c')
			{
				while (champ-- - 1 > 0)
					ft_putchar(' ');
				ft_putchar(va_arg(ap, int));
			}
			else if (format[i] == 's')
				ft_putstr(va_arg(ap, char *), -1, champ);
			else if (format[i] == 'p')
				ft_puthex_int_p(va_arg(ap, int), champ);
			else if (format[i] == 'd' || format[i] == 'i')
			{
				tmp = NULL;
				if (!(str = ft_itoa(va_arg(ap, int), tmp)))
					return (FALSE);
				free(tmp);
				ft_putstr(str, -1, champ);
				free(str);
				str = NULL;
			}
			else if (format[i] == 'o')
				ft_putoct_int(va_arg(ap, int), -1, champ);
			else if (format[i] == 'u')
			{
				tmp = NULL;
				if (!(str = ft_itoa_unsi(va_arg(ap, int), tmp)))
					return (FALSE);
				free(tmp);
				ft_putstr(str, -1, champ);
				free(str);
				str = NULL;
			}
			else if (format[i] == 'x' || format[i] == 'X')
				ft_puthex_int(va_arg(ap, unsigned int), format[i] - 23, -1,
				champ);
			else if (format[i] == 'f')
				ft_putnbr_float1(va_arg(ap, double), 6, champ);
			else if (format[i] == '%')
				ft_putstr("%", -1, champ);
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
					ft_putnbr_short(va_arg(ap, int));
				else if (format[i] == 'o')
					ft_putoct_short(va_arg(ap, int), preci);
				else if (format[i] == 'u')
					ft_putnbr_short_unsi(va_arg(ap, int));
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_short(va_arg(ap, int), format[i] - 23);
				else
					return (FALSE);
			else if (format[i] == 'l' && format[i + 1] == 'l' && (i += 2))
				if (format[i] == 'd' || format[i] == 'i')
					ft_putnbr_long(va_arg(ap, long long int));
				else if (format[i] == 'o')
					ft_putoct_long(va_arg(ap, long long unsigned int));
				else if (format[i] == 'u')
					ft_putnbr_long_unsi(va_arg(ap, long long unsigned int));
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_long(va_arg(ap, long long unsigned int),
					format[i] - 23);
				else
					return (FALSE);
			else if (format[i] == 'l' && i++)
				if (format[i] == 'd' || format[i] == 'i')
					ft_putnbr_int(va_arg(ap, int));
				else if (format[i] == 'o')
					ft_putoct_int(va_arg(ap, long int), -1, champ);
				else if (format[i] == 'u')
					ft_putnbr_unsi(va_arg(ap, long unsigned int));
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_int(va_arg(ap, long unsigned int), format[i] - 23,
					-1, champ);
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
				if (format[i] == 's')
					ft_putstr(va_arg(ap, char *), preci, champ);
				else if (format[i] == 'd' || format[i] == 'i')
				{
					tmp = NULL;
					if (!(str = ft_itoa(va_arg(ap, int), tmp)))
						return (FALSE);
					free(tmp);
					preci = str[0] == '-' ? preci + 1 : preci;
					if (preci > ft_strlen(str))
					{
						preci = preci - ft_strlen(str);
						while (preci > 0)
						{
							str = ft_preci_int(str, "0\0");
							preci--;
						}
					}
					ft_putstr(str, -1, champ);
					free(str);
					str = NULL;
				}
				else if (format[i] == 'o')
					ft_putoct_int(va_arg(ap, int), preci, champ);
				else if (format[i] == 'u')
				{
					tmp = NULL;
					if (!(str = ft_itoa_unsi(va_arg(ap, unsigned int), tmp)))
						return (FALSE);
					if (preci > ft_strlen(str))
					{
						preci = preci - ft_strlen(str);
						while (preci > 0)
						{
							str = ft_preci_int(str, "0\0");
							preci--;
						}
					}
					ft_putstr(str, -1, champ);
					free(str);
					str = NULL;
				}
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_int(va_arg(ap, unsigned int), format[i] - 23,
					preci, champ);
				else if (format[i] == 'f')
					ft_putnbr_float1(va_arg(ap, double), preci, 0);
				else if (format[i] == 'h' && i++)
					if (format[i] == 'd' || format[i] == 'i')
					{
						if (!ft_itoa(va_arg(ap, int), str))
							return (FALSE);
						while (preci-- > ft_strlen(str))
							ft_putchar('0');
						ft_putstr(str, -1, 0);
						free(str);
						str = NULL;
					}
					else if (format[i] == 'o')
						ft_putoct_short(va_arg(ap, int), preci);
					else if (format[i] == 'u')
						;
					else if (format[i] == 'x' && format[i] == 'X')
						;
					else
						return (FALSE);
				else if (format[i] == '%')
					ft_putstr("%", -1, champ);
				else
					return (FALSE);
			}
			else
				return (FALSE);
		}
		else
			ft_putchar(format[i]);
	}
	va_end(ap);
	return (TRUE);
}

int		main(void)
{
	float	age;

	/*age = 123.0000;
	printf(   "Vrai: J'ai %f ans\n", age);
	ft_printf("Mien: J'ai %f ans\n", age);
	*/
	return (0);
}

/*
	int value = -2147483648 / 2147483647
	unsigned int value = 0 / 4294967295
	short int value = -32768 / 32767
	short unsigned int = 0 / 65535
*/
