#include "ftprintf.h"

void			ft_printf_get_modifier(t_printf *p, const char *format)
{
	if (format[p->index] == 'h')
	{
		if (p->modifier == FT_PRINTF_H)
			p->modifier = FT_PRINTF_HH;
		else if (p->modifier < FT_PRINTF_H)
			p->modifier = FT_PRINTF_H;
	}
	else if (format[p->index] == 'l')
	{
		if (p->modifier == FT_PRINTF_L)
			p->modifier = FT_PRINTF_LL;
		else if (p->modifier < FT_PRINTF_L)
			p->modifier = FT_PRINTF_L;
	}
	else if (format[p->index] == 'L')
		p->modifier = FT_PRINTF_FL;
	++p->index;
}
