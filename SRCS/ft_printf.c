#include <ft_header.h>
#include <stdarg.h>

int		ft_printf(char *str,...)
{
	int		i;
	va_list	ap;

	va_start(ap,str);
	i = -1;
	while(str[++i])
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'd')
				ft_putnbr(va_arg(ap, int));
			else if (str[i] == 'c')
				ft_putchar(va_arg(ap, int));
			else if (str[i] == 's')
				ft_putstr(va_arg(ap, char *));
			else
				return (FALSE);
		}
		else
			ft_putchar(str[i]);
	va_end(ap);
	return (TRUE);
}

int main(void)
{
	int		age = 20;
	char	nom[] = "Antoine";
	ft_printf("\n--->Je m'appelle %s, j'ai %d ans\n",nom,age);
	return (0);
}