/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:29:47 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/09 18:03:18 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

int		ft_putoct_int(unsigned int nb, int preci, int champ)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	if (preci > ft_strlen(str))
	{
		preci = preci - ft_strlen(str);
		while (preci > 0)
		{
			str = ft_preci_int("0\0", str);
			preci--;
		}
	}
	ft_putstr(ft_strrev(str), -1, champ);
	free(str);
	return (TRUE);
}

int		ft_putoct_short(short unsigned int nb, int preci)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 7)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	while (preci-- > ft_strlen(str))
		ft_putchar('0');
	ft_putstr(ft_strrev(str), -1, 0);
	free(str);
	return (TRUE);
}

int		ft_putoct_long(long long unsigned int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 100)))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0)
	{
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
	ft_putstr(ft_strrev(str), -1, 0);
	return (TRUE);
}
