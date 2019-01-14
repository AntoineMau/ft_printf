/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:29:56 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 18:09:32 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

void		ft_putnbr_long(__int64_t nbr)
{
	if (nbr < 0)
	{
		ft_putchar('-');
		ft_putnbr_long(-nbr);
	}
	nbr >= 10 ? ft_putnbr_long(nbr / 10) : nbr;
	nbr >= 0 ? ft_putchar(nbr % 10 + '0') : nbr;
}

__int32_t	ft_x_p(__int32_t nb, __int32_t champ)
{
	__int32_t	i;
	char		*str;

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

__int32_t	ft_x(__uint32_t nb, __int32_t letter,
__int32_t preci, __int32_t champ)
{
	__int32_t	i;
	char		*str;
	char		*tmp;

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
	if (preci > ft_strlen(str) && (preci = preci - ft_strlen(str)))
		while (preci > 0)
		{
			tmp = strdup(str);
			ft_memdel(str);
			str = ft_preci_int("0\0", tmp);
			ft_memdel(tmp);
			preci--;
		}
	ft_putstr(ft_strrev(str), -1, champ);
	free(str);
	return (TRUE);
}

__int32_t	ft_puthex_short(__uint16_t nb, __int32_t letter)
{
	__int32_t	i;
	char		*str;

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

__int32_t	ft_puthex_long(__int64_t nb, __int32_t letter)
{
	__int32_t	i;
	char		*str;

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
