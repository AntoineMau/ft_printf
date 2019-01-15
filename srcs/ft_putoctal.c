/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putoctal.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:07:51 by judumay           #+#    #+#             */
/*   Updated: 2019/01/15 15:47:12 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>
#include <string.h>

__int32_t	ft_putoct_int(__uint32_t nb, __int32_t *tab)
{
	__int32_t	i;
	char		*tmp;
	char		*str;

	tmp = NULL;
	if (!(str = (char*)malloc(sizeof(*str) * (9 + tab[1]))))
		return (FALSE);
	if ((i = 0) && nb == 0)
		str[i++] = '0';
	while (nb > 0 && (str[i++] = nb % 8 + '0'))
		nb /= 8;
	str[i] = '\0';
	if (tab[1] > ft_strlen(str) && (tab[1] = tab[1] - ft_strlen(str)))
		while (tab[1] > 0)
		{
			tmp = strdup(str);
			ft_memdel(str);
			str = ft_preci_int("0\0", tmp);
			ft_memdel(tmp);
			tab[1]--;
		}
	ft_putstr(ft_strrev(str), tab);
	free(str);
	return (TRUE);
}

__int32_t	ft_putoct_short(__uint16_t nb, __int32_t *tab)
{
	__int32_t	i;
	char		*str;

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
	while (tab[1]-- > ft_strlen(str))
		ft_putchar('0');
	ft_putstr(ft_strrev(str), tab);
	free(str);
	return (TRUE);
}

__int32_t	ft_putoct_long(__uint64_t nb, __int32_t *tab)
{
	__uint8_t	i;
	char		*tmp;
	char		*str;

	tmp = NULL;
	if (!(str = (char*)malloc(sizeof(*str) * (21 + tab[1]))))
		return (FALSE);
	i = 0;
	if (nb == 0)
		str[i++] = '0';
	while (nb > 0 && (str[i++] = nb % 8 + '0'))
		nb /= 8;
	str[i] = '\0';
	if (tab[1] > ft_strlen(str) && (tab[1] = tab[1] - ft_strlen(str)))
		while (tab[1] > 0 && tab[1]--)
		{
			tmp = ft_preci_int("0\0", str);
			ft_memdel(str);
			str = strdup(tmp);
			ft_memdel(tmp);
		}
	ft_putstr(ft_strrev(str), tab);
	free(str);
	return (TRUE);
}
