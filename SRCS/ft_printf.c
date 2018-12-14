#include <ft_header.h>
#include <stdarg.h>
#include <stdlib.h>

int		ft_printf(const char *format,...)
{
	int		i;
	va_list	ap;

	va_start(ap,format);
	i = -1;
	while(format[++i])
		if (format[i] == '%')
			if (format[++i] == 'd' || format[i] == 'i')
				ft_putnbr(va_arg(ap, int));
			else if (format[i] == 'c')
				ft_putchar(va_arg(ap, int));
			else if (format[i] == 's')
				ft_putstr(va_arg(ap, char *));
			else if (format[i] == 'p')
				ft_deci_hexa(va_arg(ap, int));
			else
				return (FALSE);
		else
			ft_putchar(format[i]);
	va_end(ap);
	return (TRUE);
}

#include <stdio.h>

int main(void)
{
	int		age = 1;
	char	nom[] = "Antoine Mauffret";

	printf("Vrai: Je m'appelle %s, j'ai %i ans\n", nom, age);
	ft_printf("Mien: Je m'appelle %s, j'ai %i ans\n", nom, age);
	return (0);
}