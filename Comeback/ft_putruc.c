/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putruc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: judumay <judumay@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/21 09:42:55 by judumay           #+#    #+#             */
/*   Updated: 2019/01/21 12:03:21 by judumay          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/printf.h"
#include <stdlib.h>
#include <unistd.h>

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(s1) +
						ft_strlen(s2) + 1))))
		return (NULL);
	i = -1;
	while (*s1)
		str[++i] = *s1++;
	while (*s2)
		str[++i] = *s2++;
	str[++i] = '\0';
	return (str);
}

char	*ft_strj(char *s1, char c)
{
	int		i;
	char	*str;

	if (!s1)
		return (NULL);
	if (!(str = (char*)malloc(sizeof(char) * (ft_strlen(s1) + 2))))
		return (NULL);
	i = -1;
	while (*s1)
		str[++i] = *s1++;
	if (c != '\0')
		str[++i] = c;
	str[++i] = '\0';
	return (str);
}

void		ft_putchar(__int8_t c)
{
	write(1, &c, 1);
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

char	*ft_strdup(const char *s1)
{
	int		i;
	int		j;
	char	*str;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
		i++;
	if (!(str = (char*)malloc(sizeof(*str) * (i + 1))))
		return (NULL);
	while (j <= i)
	{
		str[j] = s1[j];
		j++;
	}
	return (str);
}

void		ft_memdel(char *str)
{
	free(str);
	str = NULL;
}

__int32_t	ft_strcmp(char *s1, char *s2)
{
	__int32_t	i;

	i = 0;
	while ((s1[i] && s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

char	*ft_strrchr(const char *s, int c)
{
	char	*scpy;

	scpy = (char*)(unsigned long)s;
	while (*scpy)
		++scpy;
	while (scpy != s && *scpy != c)
		--scpy;
	if (*scpy == c)
		return (scpy);
	return (NULL);
}

__int32_t	ft_atoi(char *str)
{
	__uint8_t	i;
	__int32_t	nb;
	__uint8_t	neg;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v' ||
	str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	neg = (str[i] == '-' ? -1 : 1);
	str[i] == '-' || str[i] == '+' ? i++ : i;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
		nb = nb * 10 + str[i++] - '0';
	return (nb * neg);
}
