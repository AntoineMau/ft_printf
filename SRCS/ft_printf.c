/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:48:42 by anmauffr          #+#    #+#             */
/*   Updated: 2018/12/16 19:49:06 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdarg.h>

int		ft_printf(const char *format,...)
{
	int		i;
	int		arron;
	char	*str;
	va_list	ap;

	va_start(ap,format);
	i = -1;
	while(format[++i])
		if (format[i] == '%')
			if (format[++i] == 'c')
				ft_putchar(va_arg(ap, int));
			else if (format[i] == 's')
				ft_putstr(va_arg(ap, char *), -1);
			else if (format[i] == 'p')
				ft_deci_hexa(va_arg(ap, int));
			else if (format[i] == 'd' || format[i] == 'i')
				ft_putnbr_int(va_arg(ap, int), 1);
			else if (format[i] == 'o')
				ft_putoct_int(va_arg(ap, int));
			else if (format[i] == 'u')
				ft_putnbr_int(va_arg(ap, int), 2);
			else if (format[i] == 'x' || format[i] == 'X')
				ft_puthex_int(va_arg(ap, int), format[i] - 23);
			else if (format[i] == 'f')
				ft_putnbr_float1(va_arg(ap, double), 6);
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
					i++;
				else if (format[i] == 'x' || format[i] == 'X')
					i++;
				else
				return (FALSE);
			else if (format[i] == 'l' && format[i + 1] == 'l' && (i += 2))
				if (format[i] == 'd' || format[i] == 'i')
					i++;
				else if (format[i] == 'o')
					i++;
				else if (format[i] == 'u')
					i++;
				else if (format[i] == 'x' || format[i] == 'X')
					i++;
				else
					i++;
			else if (format[i] == 'l' && i++)
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
			else if (format[i] == 'L' && i++)
				ft_putnbr_float_ld1(va_arg(ap, long double), 6);
			else if (format[i] == '.' && i++)
			{
				arron = atoi(&format[i]);
				while (format[i] >= '0' && format[i] <= '9')
					i++;
				if (format[i] == 'd' || format[i] == 'i')
				{
					if (!(str = ft_itoa(va_arg(ap, int))))
						return(FALSE);
					while (arron-- > ft_strlen(str))
						ft_putchar('0');
					ft_putstr(str, -1);
					free(str);
				}
				else if (format[i] == 'f')
					ft_putnbr_float1(va_arg(ap, double), arron);
				else if (format[i] == 's')
					ft_putstr(va_arg(ap, char *), arron);
				else
					return (FALSE);
			}
			else
				return (FALSE);
		else
			ft_putchar(format[i]);
	va_end(ap);
	return (TRUE);
}

int main(void)
{
	unsigned int	age = -32768;
	char			nom[] = "Antoine";

	printf("Vrai: Je m'appelle %s, j'ai %p ans \n", nom, age);
	ft_printf("Mien: Je m'appelle %s, j'ai %hi ans \n", nom, age);
	return (0);
}