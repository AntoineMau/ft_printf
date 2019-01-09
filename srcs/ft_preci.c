/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_preci.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/09 10:20:35 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/09 10:39:18 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_header.h>
#include <stdlib.h>

char	*ft_preci_int(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*new_str;

	if (!(new_str = (char*)malloc(sizeof(*new_str) *
	(ft_strlen(s1) + ft_strlen(s2) + 1))))
		return (FALSE);
	i = 0;
	if (s1[0] == '-' || s2[0] == '-')
		new_str[i++] = '-';
	j = (s2[0] == '-' ? 0 : -1);
	k = (s1[0] == '-' ? 0 : -1);
	while (s2[++j])
		new_str[i++] = s2[j];
	while (s1[++k])
		new_str[i++] = s1[k];
	new_str[i] = '\0';
	return (new_str);
}
