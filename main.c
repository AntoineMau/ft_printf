#include "includes/ftprintf.h"
#include <stdlib.h>

int main()
{
	//char	*n;
	//short int n;
	//int n;
	//long n;
	//long long n;
	double n;
	//long double n;


	n = 10.19;
	dprintf(1, "NORMAL\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %20.10f\t", n));
	
	dprintf(1, "PLUS\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %+f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %+.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+20.10f\t", n));

	dprintf(1, "MOINS\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %-f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %-.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-20.10f\t", n));

	dprintf(1, "ZERO\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %01f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %01f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %0.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %0.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %0.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %020.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %020.10f\t", n));

	dprintf(1, "HASH\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %#f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#01f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#01f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#0.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#020.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#020.10f\t", n));

	dprintf(1, "ESPACE\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %   f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   .0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   .0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %   .1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   .1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   .10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   .10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   20.10f\t", n));

	dprintf(1, "PLUS + ZERO\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %+0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+01f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+01f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+00.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+00.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %+00.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+00.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+00.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+00.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+020.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+020.10f\t", n));

	dprintf(1, "HASH + ZERO\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %#0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#01f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#01f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#0.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#020.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#020.10f\t", n));

	dprintf(1, "ESPACE + ZERO\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : % 0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 01f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 01f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 010f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 010f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 0.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : % 0.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 0.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 010.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 010.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 010.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 20.10f\t", n));

	dprintf(1, "PLUS + HASH + ZERO\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %+#0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#01f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#01f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#0.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %+#0.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#0.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#020.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#020.10f\t", n));

	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : % #0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #01f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #01f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #0.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : % #0.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #0.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #020.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #020.10f\t", n));

	dprintf(1, "MOINS + PLUS\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %-+f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %-+.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+20.10f\t", n));

	dprintf(1, "ESPACE + MOINS\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : % -f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : % -.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -20.10f\t", n));

	dprintf(1, "PLUS + HASH\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %#+f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#+.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+20.10f\t", n));

		dprintf(1, "ESPACE + HASH\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %# f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# .0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# .0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %# .1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# .1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# .10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# .10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 20.10f\t", n));

		dprintf(1, "MOINS + HASH\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %#-f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-.0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#-.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-20.10f\t", n));

	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");

	dprintf(1, "ret : %d\n", ft_printf("t : %#- f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- .0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- .0f\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#- .1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- .1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- .10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- .10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.0f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.0f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.1f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.1f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.20f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.20f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.10f\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 20.10f\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 20.10f\t", n));
}