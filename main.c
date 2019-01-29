#include "includes/ftprintf.h"
#include <stdlib.h>

int main()
{
	
	//char n;
	//unsigned char n;
	//char	*n;
	//short int n;
	//int n;
	//long n;
	//long long n;
	//double n;
	long double n;

	//n = strdup("");
	n = 0;


	dprintf(1, "NORMAL\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %20.10Lf\t", n));
*/
	dprintf(1, "PLUS\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %+Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %+.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+20.10Lf\t", n));
*/
	dprintf(1, "MOINS\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %-Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %-.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-20.10Lf\t", n));
*/
	dprintf(1, "ZERO\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %0.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %0.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %0.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %0.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %010.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %010.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %020.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %020.10Lf\t", n));
*/
	dprintf(1, "HASH\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %#Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#0.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#020.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#020.10Lf\t", n));
*/
	dprintf(1, "ESPACE\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %   Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   0.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   0.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %   0.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   0.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   0.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   0.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   010.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   010.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   010.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   010.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   010.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %   020.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %   020.10Lf\t", n));
*/
	dprintf(1, "PLUS + ZERO\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %+0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+00.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+00.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %+00.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+00.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+00.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+00.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+010.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+010.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+020.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+020.10Lf\t", n));
*/
	dprintf(1, "HASH + ZERO\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %#0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#0.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#0.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#0.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#010.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#010.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#020.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#020.10Lf\t", n));
*/
	dprintf(1, "ESPACE + ZERO\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : % 0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 0.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : % 0.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 0.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 0.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % 010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % 010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 20.10Lf\t", n));
*/
	dprintf(1, "PLUS + HASH + ZERO\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %+#0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#0.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %+#0.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#0.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#0.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#010.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#010.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %+#020.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %+#020.10Lf\t", n));
*/
	dprintf(1, "ESPACE + HASH + ZERO\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : % #0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #01Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #01Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #0.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : % #0.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #0.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #0.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #010.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #010.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % #020.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % #020.10Lf\t", n));
*/
	dprintf(1, "MOINS + PLUS\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %-+Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %-+.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %-+20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %-+20.10Lf\t", n));
*/
	dprintf(1, "ESPACE + MOINS\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : % -Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : % -.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : % -20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : % -20.10Lf\t", n));
*/
	dprintf(1, "PLUS + HASH\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %#+Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#+.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#+20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#+20.10Lf\t", n));
*/
		dprintf(1, "ESPACE + HASH\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %# Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# .0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# .0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %# .1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# .1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# .10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# .10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %# 20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %# 20.10Lf\t", n));
*/
		dprintf(1, "MOINS + HASH\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %#-Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-.0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#-.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#-20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#-20.10Lf\t", n));
*/
	dprintf(1, "ESPACE + MOINS + HASH\n\n\n");
/*
	dprintf(1, "ret : %d\n", ft_printf("t : %#- Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- .0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- .0Lf\t", n));
	
	dprintf(1, "ret : %d\n", ft_printf("t : %#- .1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- .1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- .10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- .10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.0Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.0Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.1Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.1Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.20Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.20Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 10.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 10.10Lf\t", n));

	dprintf(1, "ret : %d\n", ft_printf("t : %#- 20.10Lf\t", n));
	dprintf(1, "ret : %d\n\n", dprintf(1, "t : %#- 20.10Lf\t", n));
*/
}