/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:48:42 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/08 18:03:30 by anmauffr         ###   ########.fr       */
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
	int	precie;
	char	*str;
	char	*tmp;
	va_list	ap;

	precie = 0;
	champ = 0;
	va_start(ap, format);
	i = -1;
	while (format[++i])
		if (format[i] == '%')
		{
			i++;
			if ((champ = (format[i] >= '0' && format[i] <= '9' ? ft_atoi(&format[i]) : 1)) < 1)
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
				tmp = NULL;
				if (!(str = ft_itoa(va_arg(ap, int), tmp)))
					return (FALSE);
				free(tmp);
				ft_putstr(str, -1, champ);
				free(str);
				str = NULL;
			}
			else if (format[i] == 'o')
				ft_putoct_int(va_arg(ap, int), -1);
			else if (format[i] == 'u')
				ft_putnbr_unsi(va_arg(ap, unsigned int));
			else if (format[i] == 'x' || format[i] == 'X')
				ft_puthex_int(va_arg(ap, unsigned int), format[i] - 23, -1);
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
					ft_puthex_long(va_arg(ap, long long unsigned int), format[i] - 23);
				else
					return (FALSE);
			else if (format[i] == 'l' && i++)
				if (format[i] == 'd' || format[i] == 'i')
					ft_putnbr_int(va_arg(ap, int));
				else if (format[i] == 'o')
					ft_putoct_int(va_arg(ap, long int), -1);
				else if (format[i] == 'u')
					ft_putnbr_unsi(va_arg(ap, long unsigned int));
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_int(va_arg(ap, long unsigned int), format[i] - 23, -1);
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
					precie = preci;
					while (precie-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, preci, champ);
					free(str);
					str = NULL;
				}
				/*else if (format[i] == 'o')
				{
					champ++;
					while (--champ > preci)
						ft_putchar(' ');
					if (!(str = ft_putoct_int(va_arg(ap, int), 0)))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
					str = NULL;
				}*/
				else if (format[i] == 'u')
				{
					champ++;
					while (--champ > preci)
						ft_putchar(' ');
					if (!ft_itoa(va_arg(ap, int), str))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
					str = NULL;
				}
				/*else if (format[i] == 'x' || format[i] == 'X')
				{
					champ++;
					while (--champ > preci)
						ft_putchar(' ');
					if (!(str = ft_puthex_int(va_arg(ap, int), format[i] - 23, 0)))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
					str = NULL;
				}*/
				else if (format[i] == 'o')
					ft_putoct_int(va_arg(ap, int), preci);
				else if (format[i] == 'u')
				{
					if (!(str = ft_itoa_unsi(va_arg(ap, unsigned int))))
						return (FALSE);
					while (preci-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1, 0);
					free(str);
					str = NULL;
				}
				else if (format[i] == 'x' || format[i] == 'X')
					ft_puthex_int(va_arg(ap, unsigned int), format[i] - 23, preci);
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

int main(void)	//	int value = -2147483648 / 2147483647
{				//	unsigned int value = 0 / 4294967295
	int	age = 125;	//	short int value = -32768 / 32767
	char			nom[] = "Antoine";	//	short unsigned int = 0 / 65535

	printf(   "Vrai: Je m'appelle %2.25s, j'ai %4.1d ans \n", nom, age);
	ft_printf("Mien: Je m'appelle %2.25s, j'ai %4.1d ans \n", nom, age);
	return (0);
}
