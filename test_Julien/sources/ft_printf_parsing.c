#include "ftprintf.h"

t_printf		*ft_printf_parsing(t_printf *p, const char *format)
{
	while (format[p->index]
		&& !(ft_strrchr("spdiouxXc%", format[p->index])))
	{
		if (ft_strrchr("hl", format[p->index]))
			ft_printf_get_modifier(p, format);
		else if (ft_strrchr("#0-+ ", format[p->index]))
			ft_printf_get_flag(p, format);
		else if (format[p->index] == '.')
			ft_printf_get_precision(p, format);
		else if ((format[p->index] != '0' && ft_isdigit((int)format[p->index])))
			ft_printf_get_champ(p, format);
		else
			break ;
	}
	ft_printf_get_conv(p, format);
	if (!format[p->index] && (p->error = -1))
		return (p);
	if (p->conv == FT_PRINTF_NO_MODIFIERS)
		p->tmpchar = format[p->index];
	++p->index;
	return (p);
}
