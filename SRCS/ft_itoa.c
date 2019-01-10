/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:35:06 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/10 17:51:02 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

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

char	*ft_itoa(int nb, char *str)
{
	int		i;
	int		neg;

	if (!(str = (char*)malloc(sizeof(*str) * 12)))
		return (FALSE);
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
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_itoa_long(__int64_t nb, char *str)
{
	__uint8_t	i;
	__uint8_t	neg;
	__uint64_t	unb;

	if (!(str = (char*)malloc(sizeof(*str) * 21)))
		return (FALSE);
	neg = 0;
	unb = nb;
	if (nb < 0 && (neg = 1))
		unb = -nb;
	i = 0;
	if (unb == 0)
		str[i++] = '0';
	else if (unb == 9223372036854775808UL)
		return ("-9223372036854775808");
	while (unb > 0)
	{
		str[i++] = unb % 10 + '0';
		unb /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_itoa_float(long nb, char *str)
{
	int		i;
	int		neg;

	if (!(str = (char*)malloc(sizeof(*str) * 99)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	if (neg == 1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}

char	*ft_itoa_unsi(unsigned int nb, char *str)
{
	int		i;

	if (!(str = (char*)malloc(sizeof(*str) * 12)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i++] = nb % 10 + '0';
		nb /= 10;
	}
	str[i] = '\0';
	return (ft_strrev(str));
}
