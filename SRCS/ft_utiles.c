#include <ft_header.h>
#include <stdlib.h>
#include <unistd.h>

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (str[i])
		i++;
	j = -1;
	while (++j < --i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return (str);
}

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_putnbr(int nbr, int choix)
{
	if (choix == 1)
	{
		if (nbr == -2147483648)
			ft_putstr("-2147483648");
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr(-nbr, choix);
		}
	}
	nbr >= 10 ? ft_putnbr(nbr / 10, choix) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_float2(double nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_float2(-nbr);
	}
	nbr >= 10 ? ft_putnbr_float2(nbr / 10) : nbr;
	ft_putchar((long)nbr % 10 + '0');
}

void	ft_putnbr_float1(double nbr, int arrondi)
{
	int		i;

	ft_putnbr_float2(nbr);
	ft_putchar('.');
	i = 0;
	while (i < arrondi)
	{
		nbr -= (long)nbr;
		nbr *= 10;
		if ((long)nbr % 10 < 0 || (long)nbr % 10 > 9)
			ft_putchar('0');
		else if (i == arrondi - 1 && ((long)(nbr * 10) % 10) >= 5)
			ft_putchar((long)nbr % 10 + 1 + '0');
		else
			ft_putchar((long)nbr % 10 + '0');
		i++;
	}
}

void	ft_putnbr_float_ld2(long double nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_float_ld2(-nbr);
	}
	nbr >= 10 ? ft_putnbr_float_ld2(nbr / 10) : nbr;
	nbr >= 0 ? ft_putchar((int)nbr % 10 + '0') : nbr;
}

void	ft_putnbr_float_ld1(long double nbr, int arrondi)
{
	int		i;

	ft_putnbr_float_ld2(nbr);
	ft_putchar('.');
	i = 0;
	while (i < arrondi)
	{
		nbr *= 10;
		if (i == arrondi - 1 && ((int)(nbr * 10) % 10) >= 5)
			ft_putchar((int)nbr % 10 + 1 + '0');
		else
			ft_putchar((int)nbr % 10 + '0');
		i++;
	}
}

int		ft_atoi(const char *str)
{
	int		i;
	int		nb;
	int		neg;

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

char	*ft_itoa(int nb)
{
	int		i;
	int		neg;
	char	*str;

	str = (char*)malloc(sizeof(*str) * 12);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	else if (nb == -2147483648)
		return ("-2147483648");
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i++] = nb % 10;
		nb /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

int		ft_deci_hexa(int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	str[8] = '\0';
	i = 0;
	while (i < 8)
	{
		if (nb % 16 < 10)
			str[i] = nb % 16 + '0';
		else
			str[i] = nb % 16 + 'A' - 10;
		nb /= 16;
		i++;
	}
	ft_putstr(ft_strrev(str));
	return (TRUE);
}

int		ft_deci_hexa_un(int nb, int letter)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
	while (nb > 0)
	{
		if (nb % 16 < 10)
			str[i] = nb % 16 + '0';
		else
			str[i] = nb % 16 + letter - 10;
		nb /= 16;
		i++;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str));
	return (TRUE);
}

int		ft_deci_octal(unsigned int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str));
	return (TRUE);
}
