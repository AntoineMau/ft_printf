/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:06:51 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 11:50:47 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

void	ft_putnbr_float2(long double nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_float2(-nbr);
	}
	nbr >= 10 ? ft_putnbr_float2(nbr / 10) : nbr;
	ft_putchar((__int64_t)nbr % 10 + '0');
}

void	ft_putnbr_float1(long double nbr, __int32_t preci, __int32_t champ)
{
	__int32_t	i;
	__int32_t	j;
	char		*str;

	str = NULL;
	str = ft_itoa_float((__int64_t)nbr, str);
	i = 0;
	i = ft_strlen(str);
	if (preci > 0)
		str[i++] = '.';
	j = -1;
	while (++j < preci)
	{
		nbr > 9 ? nbr -= (__int32_t)nbr : nbr;
		nbr *= 10;
		if ((__int32_t)nbr % 10 < 0 || (__int32_t)nbr % 10 > 9)
			str[i++] = '0';
		else if (j == preci - 1 && ((__int32_t)(nbr * 10) % 10) >= 5
		&& (__int32_t)nbr % 10 < 9)
			str[i++] = (__int32_t)nbr % 10 + 1 + '0';
		else
			str[i++] = (__int32_t)nbr % 10 + '0';
	}
	str[i] = '\0';
	ft_putnbr_float1_suite(str, preci, champ, j);
}

void	ft_putnbr_float1_suite(char *str, __int32_t preci,
__int32_t champ, __int32_t j)
{
	__int32_t	i;

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
	nbr >= 0 ? ft_putchar((__int32_t)nbr % 10 + '0') : nbr;
}

void	ft_putnbr_float_ld1(long double nbr, __int32_t preci)
{
	__int32_t	i;

	ft_putnbr_float_ld2(nbr);
	ft_putchar('.');
	i = 0;
	while (i < preci)
	{
		nbr *= 10;
		if (i == preci - 1 && ((__int32_t)(nbr * 10) % 10) >= 5)
			ft_putchar((__int32_t)nbr % 10 + 1 + '0');
		else
			ft_putchar((__int32_t)nbr % 10 + '0');
		i++;
	}
}
