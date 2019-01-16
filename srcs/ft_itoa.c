/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:06:01 by judumay           #+#    #+#             */
/*   Updated: 2019/01/16 16:54:59 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>
#include <string.h>

char		*ft_itoa_unsi(__uint32_t nb, char *str)
{
	__uint8_t	i;

	if (!(str = (char*)malloc(sizeof(*str) * 11)))
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

char		*ft_itoa(__int32_t nb, char *str)
{
	__uint8_t	i;
	__uint8_t	neg;

	if (!(str = (char*)malloc(sizeof(*str) * 12)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	else if (nb == -2147483648)
	{
		free(str);
		return ("-2147483648");
	}
	neg = 0;
	if (nb < 0 && (neg = 1))
		nb = -nb;
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

char		*ft_itoa_short(__int32_t nb, char *str)
{
	__uint8_t	i;
	__uint8_t	neg;

	if (!(str = (char*)malloc(sizeof(*str) * 12)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	else if (nb == -32768)
	{
		free(str);
		return ("-32768");
	}
	neg = 0;
	if (nb < 0 && (neg = 1))
		nb = -nb;
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

char		*ft_itoa_long(__int64_t nb, char *str, __uint8_t neg)
{
	__uint8_t	i;
	__uint64_t	unb;

	if (!(str = (char*)malloc(sizeof(*str) * 21)))
		return (FALSE);
	unb = nb;
	if (nb < 0 && (neg = 1))
		unb = -nb;
	if ((i = 0) && unb == 0)
		str[i++] = '0';
	else if (unb == 9223372036854775808ULL)
	{
		free(str);
		return ("-9223372036854775808");
	}
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

char		*ft_itoa_unsi_long(__uint64_t nb, char *str)
{
	__uint8_t	i;

	if (!(str = (char*)malloc(sizeof(*str) * 21)))
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
