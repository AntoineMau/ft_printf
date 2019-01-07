/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:31:29 by anmauffr          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/12/18 21:28:09 by anmauffr         ###   ########.fr       */
=======
/*   Updated: 2018/12/17 15:11:00 by anmauffr         ###   ########.fr       */
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
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

<<<<<<< HEAD
int		ft_puthex_int(unsigned int nb, int letter, int arron)
=======
char	*ft_puthex_int(int nb, int letter)
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
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
<<<<<<< HEAD
	while (arron-- > ft_strlen(str))
		ft_putchar('0');
	ft_putstr(ft_strrev(str), -1);
	return (TRUE);
=======
	return (ft_strrev(str));
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
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

<<<<<<< HEAD
	if (!(str = (char*)malloc(sizeof(*str) * 100)))
=======
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
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
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