/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putruc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:08:12 by judumay           #+#    #+#             */
/*   Updated: 2019/01/16 18:38:38 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(__int8_t c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str, __int32_t *tab)
{
	tab[0] = tab[0] > (tab[1] + ft_strlen(str)) ? tab[0] + 1 : tab[0];
	if (tab[1] == -1 || (tab[1] <= ft_strlen(str) && tab[6] != 1))
	{
		while (--tab[0] > ft_strlen(str))
			tab[6] == 1 && tab[1] == -1 ? ft_putchar('0') : ft_putchar(' ');
		write(1, str, ft_strlen(str));
	}
	else
	{
		while (--tab[0] > (tab[1] + ft_strlen(str)))
			tab[6] == 1 && tab[1] == 0 ? ft_putchar('0') : ft_putchar(' ');
		write(1, str, ft_strlen(str));
	}
}

char		*ft_strcpy(char *s1, const char *s2)
{
	__int32_t	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

__int32_t	ft_strlen(char *str)
{
	__int32_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char		*ft_strrev(char *str)
{
	__int32_t	i;
	__int32_t	j;
	__int8_t	tmp;

	i = 0;
	while (str[i])
		i++;
	j = -1;
	while (++j < --i)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
	return (str);
}
