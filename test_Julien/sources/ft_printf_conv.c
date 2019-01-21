
#include "ftprintf.h"

t_printf		*ft_printf_conv(t_printf *p)
{
	int		i;

	i = 0;
	while (i < 9 && !p->error)
		p = p->tab_ptr[i++](p);
	return (p);
}
