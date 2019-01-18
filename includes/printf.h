/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anmauffr <anmauffr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/18 15:23:25 by anmauffr          #+#    #+#             */
/*   Updated: 2019/01/18 17:24:08 by anmauffr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# define TRUE 1
# define FALSE 0

# include <stdio.h>
# include <string.h>

typedef struct	s_printf
{
	__uint8_t	zero;
	__uint8_t	plus;
	__uint8_t	moins;
	__uint8_t	espace;
	__uint8_t	hash;
	__int8_t	preci;
	__uint8_t	champ;
	__uint32_t	length;
	char		*format;
	va_list		ap;
}				t_printf;

#endif