/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 16:29:56 by judumay           #+#    #+#             */
/*   Updated: 2019/01/11 16:29:57 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

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

int		ft_x_p(int nb, int champ)
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

int		ft_x(unsigned int nb, int letter, int preci, int champ)
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
	if (preci > ft_strlen(str) && (preci = preci - ft_strlen(str)))
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
