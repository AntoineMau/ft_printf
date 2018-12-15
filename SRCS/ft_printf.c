#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

#include <stdio.h>

int		ft_printf(const char *format,...)
{
	int		i;
	va_list	ap;

	va_start(ap,format);
	i = -1;
	while(format[++i])
		if (format[i] == '%')
			if (format[++i] == 'c')
				ft_putchar(va_arg(ap, int));
			else if (format[i] == 's')
				ft_putstr(va_arg(ap, char *));
			else if (format[i] == 'p')
				ft_deci_hexa(va_arg(ap, int));
			else if (format[i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(ap, int), 1);
			else if (format[i] == 'o')
				ft_deci_octal(va_arg(ap, int));
			else if (format[i] == 'u')
				ft_putnbr(va_arg(ap, int), 2);
			else if (format[i] == 'x')
				ft_deci_hexa_un(va_arg(ap, int), 'a');
			else if (format[i] == 'X')
				ft_deci_hexa_un(va_arg(ap, int), 'A');
			else if (format[i] == '%')
				ft_putchar('%');
			else if (format[i] == 'f')
				ft_putnbr_float1(va_arg(ap, double), 6);
			else if (format[i] == 'L' && i++)
				ft_putnbr_float_ld1(va_arg(ap, long double), 6);
			else if (format[i] == 'l' && format[i + 1] == 'l')
				;
			else if (format[i] == 'l')
				;
			else if (format[i] == 'h' && format[i + 1] == 'h')
				;
			else if (format[i] == 'h')
				;
			else if (format[i] == '.')
			{
				ft_putnbr_float1(va_arg(ap, double), atoi(&format[++i]));
				while (format[i] >= '0' && format[i] <= '9')
					i++;
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
	double	age = 12147483647.12345;
	char	nom[] = "Antoine";

	printf("Vrai: Je m'appelle %s, j'ai %f ans \n", nom, age);
	ft_printf("Mien: Je m'appelle %s, j'ai %f ans \n", nom, age);
	return (0);
}