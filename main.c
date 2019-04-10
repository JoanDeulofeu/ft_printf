#include "includes/ft_printf.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int nb = 51371;
	// ft_printf("ft_printf1 =%      8.13d\n", nb);
	// printf("printf1    =%       8.13d\n", nb);
	// ft_printf("ft_printf2 =%     8+.13d\n", nb);
	// printf("printf2    =%      8+.13d\n", nb);
	// ft_printf("ft_printf3 =%+8.13d\n", nb);
	// printf("printf3    =%+8.13d\n", nb);
	// ft_printf("ft_printf4 =%   13.8d\n", nb);
	// printf("printf4    =%    13.8d\n", nb);
	// ft_printf("ft_printf5 =%    +13.8d\n", ft_abs(nb));
	// printf("printf5    =%    +13.8d\n", ft_abs(nb));
	// ft_printf("ft_printf6 =%+13.8d\n", ft_abs(nb));
	// printf("printf6    =%+13.8d\n", ft_abs(nb));
	// ft_printf("ft_printf7 =%    +13.8d\n", nb);
	// printf("printf7    =%    +13.8d\n", nb);
	// ft_printf("ft_printf8 =%+13.8d\n", nb);
	// printf("printf8    =%+13.8d\n", nb);
	ft_printf("ft_printf9 =%+08.13d\n", nb);
	printf("printf9    =%+08.13d\n", nb);

	ft_printf("ft_printf10=%+013.8d\n", nb);
	printf("printf10   =%+013.8d\n", nb);

	ft_printf("ft_printf11=%0+08.13d\n", nb);
	printf("printf11   =%0+08.13d\n", nb);

	ft_printf("ft_printf12=%0+013.8d\n", nb);
	printf("printf12   =%0+013.8d\n", nb);

	ft_printf("ft_printf13=%013d\n", nb);
	printf("printf13   =%013d\n", nb);

	ft_printf("ft_printf14=%8.13d\n", nb);
	printf("printf14   =%8.13d\n", nb);





	// printf("\n\n%.3d\n", nb);
	// printf("%.8d\n", nb);
	// // printf("01) %13.8d\n", nb);
	// printf("02) %13.13d\n", nb);
	// // printf("03) %13. 8d\n", nb);
	// // printf("04) %13 8d\n", nb);
	// // printf("05) %13 14 15 89 8d\n", nb);
	// // printf("06) %8.d\n", nb);
	// printf("07) %+.8d\n", nb);
	// printf("08) %+d\n", nb);
	// printf("09) %3d\n", nb);
	// printf("10) %        .8d\n", nb);
	// // printf("10) %        8    d\n", nb);
	return 0;
}
