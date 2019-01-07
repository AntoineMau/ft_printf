/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/16 19:29:47 by anmauffr          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2018/12/23 18:57:41 by anmauffr         ###   ########.fr       */
=======
/*   Updated: 2018/12/17 13:48:07 by anmauffr         ###   ########.fr       */
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

<<<<<<< HEAD
int		ft_putoct_int(unsigned int nb, int arron)
=======
char	*ft_putoct_int(unsigned int nb)
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
		str[i] = nb % 8 + '0';
		nb /= 8;
		i++;
	}
	str[i] = '\0';
<<<<<<< HEAD
	while (arron-- > ft_strlen(str))
		ft_putchar('0');
	ft_putstr(ft_strrev(str), -1);
	free(str);
	return (TRUE);
=======
	return (ft_strrev(str));
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
}

int		ft_putoct_short(short unsigned int nb, int arron)
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
<<<<<<< HEAD
	while (arron-- > ft_strlen(str))
		ft_putchar('0');
	ft_putstr(ft_strrev(str), -1);
	free(str);
=======
	ft_putstr(ft_strrev(str), -1, 0);
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
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
<<<<<<< HEAD
}
=======
}

int		ft_putoct_long_long(unsigned long long int nb)
{
	int		i;
	char	*str;

	if (!(str = (char*)malloc(sizeof(*str) * 9)))
		return (FALSE);
	i = 0;
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
>>>>>>> f83d66bc00c896d3b01b629a7c985576ed543900
