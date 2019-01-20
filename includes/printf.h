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

#include <stdarg.h>

# include <stdio.h>
# include <string.h>
# include <stdint.h>

typedef struct	s_printf
{
	uint16_t		zero;
	uint16_t		plus;
	uint16_t		minus;
	uint16_t		space;
	uint16_t		hash;
	uint16_t		champ;
	int16_t		preci;
	uint32_t	length;
	char		*format;
	va_list		ap;
}				t_printf;

#endif