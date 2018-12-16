/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:32:35 by anmauffr          #+#    #+#             */
/*   Updated: 2018/12/16 22:42:36 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

void	ft_putnbr_int(int nbr, int choix)
{
	if (choix == 1)
	{
		if (nbr == -2147483648)
			ft_putstr("-2147483648", -1);
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_int(-nbr, choix);
		}
	}
	nbr >= 10 ? ft_putnbr_int(nbr / 10, choix) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_short(short nbr, int choix)
{
	if (choix == 1)
	{
		if (nbr == -32768)
			ft_putstr("-32768", -1);
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_short(-nbr, choix);
		}
	}
	nbr >= 10 ? ft_putnbr_short(nbr / 10, choix) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_long(long nbr, int choix)
{
	if (choix == 1)
	{
		if (nbr == -2147483648)
			ft_putstr("-2147483648", -1);
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_short(-nbr, choix);
		}
	}
	nbr >= 10 ? ft_putnbr_short(nbr / 10, choix) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_long_long(long long nbr, int choix)
{
	if (choix == 1)
	{
		if (nbr == -2147483648)
			ft_putstr("-2147483648", -1);
		else if (nbr < 0)
		{
			ft_putchar('-');
			ft_putnbr_short(-nbr, choix);
		}
	}
	nbr >= 10 ? ft_putnbr_short(nbr / 10, choix) : nbr;
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

void	ft_putnbr_float1(double nbr, int arron)
{
	int		i;
	int		j;
	char	*str;
	char	*tmp;

	if (!(str = (char*)malloc(sizeof(*str) * 15)))
		return ;
	tmp = str;
	str = ft_strcpy(tmp, ft_itoa((long)nbr));
	i = ft_strlen(str);
	if (arron > 0)
		str[i++] = '.';
	j = -1;
	while (++j < arron)
	{
		nbr > 1000000000 ? nbr -= (long)nbr : nbr;
		nbr *= 10;
		if ((long)nbr % 10 < 0 || (long)nbr % 10 > 9)
			str[i++] = '0';
		else if (j == arron - 1 && ((long)(nbr * 10) % 10) >= 5
		&& (long)nbr % 10 < 9)
			str[i++] = (long)nbr % 10 + 1 + '0';
		else
			str[i++] = (long)nbr % 10 + '0';
	}
	str[i] = '\0';
	i = ft_strlen(str);
	if (str[--i] == '9')
	{
		while (str[i] == '9')
		{
			if (str[i] == '9')
				str[i--] = '0';
			if (str[i] == '.')
				i--;
		}
		str[i]++;
	}
	ft_putstr(str, -1);
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

void	ft_putnbr_float_ld1(long double nbr, int arron)
{
	int		i;

	ft_putnbr_float_ld2(nbr);
	ft_putchar('.');
	i = 0;
	while (i < arron)
	{
		nbr *= 10;
		if (i == arron - 1 && ((int)(nbr * 10) % 10) >= 5)
			ft_putchar((int)nbr % 10 + 1 + '0');
		else
			ft_putchar((int)nbr % 10 + '0');
		i++;
	}
}
