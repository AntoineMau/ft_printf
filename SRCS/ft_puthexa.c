/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:31:29 by anmauffr          #+#    #+#             */
/*   Updated: 2018/12/17 15:11:00 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

int		ft_puthex_int_p(int nb, int champ)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 15)))
		return (FALSE);
	i = 0;
	while (i < 8)
	{
		if (nb % 16 < 10)
			str[i] = nb % 16 + '0';
		else
			str[i] = nb % 16 + 'a' - 10;
		nb /= 16;
		i++;
	}
	str[i++] = 'f';
	str[i++] = 'f';
	str[i++] = 'f';
	str[i++] = '7';
	str[i++] = 'x';
	str[i++] = '0';
	str[i] = '\0';
	ft_putstr(ft_strrev(str), -1, champ);
	return (TRUE);
}

char	*ft_puthex_int(int nb, int letter)
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
	return (ft_strrev(str));
}

int		ft_puthex_short(short nb, int letter)
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
	ft_putstr(ft_strrev(str), -1, 0);
	return (TRUE);
}

int		ft_puthex_long(long nb, int letter)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 20)))
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
	ft_putstr(ft_strrev(str), -1, 0);
	return (TRUE);
}

int		ft_puthex_long_long(long long nb, int letter)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 20)))
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
	ft_putstr(ft_strrev(str), -1, 0);
	return (TRUE);
}