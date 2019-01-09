/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:31:29 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/09 11:24:56 by anmauffr         ###   ########.fr       */
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
	free(str);
	return (TRUE);
}

int		ft_puthex_int(unsigned int nb, int letter, int preci, int champ)
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
		if (nb % 16 < 10)
			str[i] = nb % 16 + '0';
		else
			str[i] = nb % 16 + letter - 10;
		nb /= 16;
		i++;
	}
	str[i] = '\0';
	preci = preci <= ft_strlen(str) ? ft_strlen(str) : preci - ft_strlen(str);
	if (preci != ft_strlen(str))
		while (preci-- > 0)
			str = ft_preci_int("0\0", str);
	ft_putstr(ft_strrev(str), -1, champ);
	free(str);
	return (TRUE);
}

int		ft_puthex_short(short unsigned int nb, int letter)
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

int		ft_puthex_long(long long int nb, int letter)
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