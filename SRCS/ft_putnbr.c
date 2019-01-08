/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:32:35 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/08 16:36:51 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

void	ft_putnbr_int(int nbr)
{
	if (nbr == -2147483648)
		ft_putstr("-2147483648", -1, 0);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_int(-nbr);
	}
	nbr >= 10 ? ft_putnbr_int(nbr / 10) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_short(short nbr)
{
	if (nbr == -32768)
		ft_putstr("-32768", -1, 0);
	else if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_short(-nbr);
	}
	nbr >= 10 ? ft_putnbr_short(nbr / 10) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

void	ft_putnbr_short_unsi(short unsigned int nbr)
{
	nbr >= 10 ? ft_putnbr_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

void	ft_putnbr_unsi(unsigned int nbr)
{
	nbr >= 10 ? ft_putnbr_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

void	ft_putnbr_long_unsi(long long unsigned int nbr)
{
	nbr >= 10 ? ft_putnbr_long_unsi(nbr / 10) : nbr;
	ft_putchar(nbr % 10 + '0');
}

void	ft_putnbr_long(long long nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_long(-nbr);
	}
	nbr >= 10 ? ft_putnbr_long(nbr / 10) : nbr;
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

void	ft_putnbr_float1(double nbr, int preci, int champ)
{
	int		i;
	int		j;
	char	*str = NULL;
	char	*tmp = NULL;

	str = ft_itoa_float((long long int)nbr, tmp);
	free(tmp);
	i = 0;
	i = ft_strlen(str);
	if (preci > 0)
		str[i++] = '.';
	j = -1;
	while (++j < preci)
	{
		nbr > 9 ? nbr -= (int)nbr : nbr;
		nbr *= 10;
		if ((int)nbr % 10 < 0 || (int)nbr % 10 > 9)
			str[i++] = '0';
		else if (j == preci - 1 && ((int)(nbr * 10) % 10) >= 5
		&& (int)nbr % 10 < 9)
			str[i++] = (int)nbr % 10 + 1 + '0';
		else
			str[i++] = (int)nbr % 10 + '0';
	}
	str[i] = '\0';
	j = -1;
	i = 0;
	while (str[++j] != '.' && str[j])
		;
	while (str[++j])
		i++;
	if (i == preci)
	{
		ft_putstr(str, -1, champ);
		free(str);
		return ;
	}
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
		ft_putstr(str, -1, champ);
	}
	free(str);
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

void	ft_putnbr_float_ld1(long double nbr, int preci)
{
	int		i;

	ft_putnbr_float_ld2(nbr);
	ft_putchar('.');
	i = 0;
	while (i < preci)
	{
		nbr *= 10;
		if (i == preci - 1 && ((int)(nbr * 10) % 10) >= 5)
			ft_putchar((int)nbr % 10 + 1 + '0');
		else
			ft_putchar((int)nbr % 10 + '0');
		i++;
	}
}
