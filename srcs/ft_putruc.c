/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putruc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:08:12 by judumay           #+#    #+#             */
/*   Updated: 2019/01/14 08:46:36 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(__int8_t c)
{
	write(1, &c, 1);
}

void		ft_putstr(char *str, __int32_t preci, __int32_t champ)
{
	champ++;
	if (preci == -1 || preci >= ft_strlen(str))
	{
		while (--champ > ft_strlen(str))
			ft_putchar(' ');
		write(1, str, ft_strlen(str));
	}
	else
	{
		while (--champ > preci)
			ft_putchar(' ');
		write(1, str, preci);
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
