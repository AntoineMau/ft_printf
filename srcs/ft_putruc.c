/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putruc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/11 18:08:12 by judumay           #+#    #+#             */
/*   Updated: 2019/01/17 17:12:39 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <unistd.h>
#include <stdlib.h>

void		ft_putchar(__int8_t c)
{
	write(1, &c, 1);
}

void		ft_putstr_s(char *str, __int32_t *tab, __int32_t i)
{
	char	*tmp;
	char	*test;

	test = strdup(str);
	if (tab[1] < ft_strlen(test) && tab[1] != -1)
		while ((CHAMP-- > tab[1]) && (++i))
		{
			tmp = strdup(test);
			ft_memdel(test);
			test = ft_strjoin(" ", tmp);
			ft_memdel(tmp);
			CHAMP == tab[1] ? write(1, test, tab[1] + i) : 0;
		}
	else if ((i = ft_strlen(str)))
		while (--CHAMP >= i)
		{
			tmp = strdup(test);
			ft_memdel(test);
			test = ft_strjoin(" ", tmp);
			ft_memdel(tmp);
			CHAMP == i ? write(1, test, ft_strlen(test)) : 0;
		}
	ft_memdel(test);
}

void		ft_putstr(char *str, __int32_t *tab)
{
	int		i = 0;
	char	*t;
	char	*te;

	i = ft_strlen(str);
	te = NULL;
	t = strdup(str);
	CHAMP = CHAMP > (tab[1] + ft_strlen(str)) ? CHAMP + 1 : CHAMP;
	if (tab[1] == -1 || (tab[1] <= ft_strlen(str) && tab[6] != 1))
	{
		tab[3] == 1 && (tab[6] != 1 || tab[1] != -1) ? te = ft_j(t, "+") : 0;
		ft_memdel(t);
		while (--CHAMP > i + tab[3])
		{
			t = strdup(te);
			ft_memdel(te);
			te = tab[6] == 1 && tab[1] == -1 ? ft_j(t, "0") : ft_j(t, " ");
			ft_memdel(t);
		}
		if (tab[3] != 1)
		{
			dprintf(1,"\n\nt:%s\nte:%s\n\n\n", t, te);
			exit(0);
			t = strdup(te);
			ft_memdel(te);
			tab[3] == 1 && tab[6] == 1 && tab[1] == -1 ? te = ft_j(t, "+") : 0;
		}
		else
		{
			te = strdup(str);
		}
		write(1, te, ft_strlen(te));
		ft_memdel(t);
	}
	if (te[1] == '+')
		ft_memdel(te);
	/*else
	{
		printf("whoHO");
		tab[3] == 1 && !(tab[6] == 1 && tab[1] == 0) ? str = ft_j(str, "+") : 0;
		while (--CHAMP > (tab[1] + i + tab[3]))
			str = tab[6] == 1 && tab[1] == 0 ? ft_j(str, "0") : ft_j(str, " ");
		tab[3] == 1 && tab[6] == 1 && tab[1] == 0 ? str = ft_j(str, "+") : 0;
		write(1, str, ft_strlen(str));
	}*/
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
