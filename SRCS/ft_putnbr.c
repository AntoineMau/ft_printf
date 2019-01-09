/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:32:35 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/09 17:04:02 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

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
	char	*str;

	str = NULL;
	str = ft_itoa_float((long long int)nbr, str);
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
	ft_putnbr_float1_suite(str, preci, champ, j);
}

void	ft_putnbr_float1_suite(char *str, int preci, int champ, int j)
{
	int i;

	j = -1;
	i = 0;
	while (str[++j] != '.' && str[j])
		;
	while (str[++j])
		i++;
	if (i < preci && str[--i] == '9')
	{
		while (str[i] == '9')
		{
			str[i] == '9' ? str[i--] = '0' : str[i];
			str[i] == '.' ? i-- : str[i];
		}
		str[i]++;
	}
	ft_putstr(str, -1, champ);
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
