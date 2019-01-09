/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:35:06 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/09 15:19:36 by judumay          ###   ########.fr       */
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

char	*ft_itoa_float(__int64_t nb, char *str)
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
