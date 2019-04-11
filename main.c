#include "includes/ft_printf.h"

void  ft_d(void)
{
    int fpf;
    int pf;
    fpf = 0;
    pf = 0;
    pf += printf("%d %d|\n", 42, -42);
    fpf += ft_printf("%d %d|\n", 42, -42);
    pf += printf("%+d %+d|\n", 42, -42);
    fpf += ft_printf("%+d %+d|\n", 42, -42);
    pf += printf("%-d %-d|\n", 42, -42);
    fpf += ft_printf("%-d %-d|\n", 42, -42);
    pf += printf("% d % d|\n", 42, -42);
    fpf += ft_printf("% d % d|\n", 42, -42);
    pf += printf("%d %d|\n", 2147483647, -2147483648);
    fpf += ft_printf("%d %d|\n", 2147483647, -2147483648);
    pf += printf("%-+-+-012d %-+-+-012d|\n", 42, -42);
    fpf += ft_printf("%-+-+-012d %-+-+-012d|\n", 42, -42);
    pf += printf("test %-+-+-05.4d et %-+-+-05.4d 98|\n", 42, -42);
    fpf += ft_printf("test %-+-+-05.4d et %-+-+-05.4d 98|\n", 42, -42);
    pf += printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    fpf += ft_printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    pf += printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    fpf += ft_printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    pf += printf("%-+-+-.d|\n", 0);
    fpf += ft_printf("%-+-+-.d|\n", 0);
    pf += printf("%012d|\n", 0);
    fpf += ft_printf("%012d|\n", 0);
    pf += printf("%1d|\n", 0);
    fpf += ft_printf("%1d|\n", 0);
    pf += printf("%+2d|\n", 0);
    fpf += ft_printf("%+2d|\n", 0);
    pf += printf("%d|\n", 0);
    fpf += ft_printf("%d|\n", 0);
    pf += printf("%018d %014d|\n", "s", 'a');
    fpf += ft_printf("%018d %014d|\n", "s", 'a');
    pf += printf("%+d %0d|\n", 2147483647, -2147483648);
    fpf += ft_printf("%+d %0d|\n", 2147483647, -2147483648);
    pf += printf("et la %+.12d %0.2d poulet|\n", 2147483647, -2147483648);
    fpf += ft_printf("et la %+.12d %0.2d poulet|\n", 2147483647, -2147483648);
    pf += printf("+-#.5d %-0#.d|\n", 4572, -0);
    fpf += ft_printf("+-#.5d %-0#.d|\n", 4572, -0);
    pf += printf("ab%-+-+-.d%c|\n", 2, -42);
    fpf += ft_printf("ab%-+-+-.d%c|\n", 2, -42);
    pf += printf("%d%d%d%d%d%d%d%d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    fpf += ft_printf("%d%d%d%d%d%d%d%d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
	pf += printf("%5d%12d%15d%.2d%.1d%+5.4d%.7d%+-+8d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    fpf += ft_printf("%5d%12d%15d%.2d%.1d%+5.4d%.7d%+-+8d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // pf += printf("jdr%hd%+-+15hdtest%.8hd%hd%hdtest%hd%hdt%12hdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // fpf += ft_printf("jdr%hd%+-+15hdtest%.8hd%hd%hdtest%hd%hdt%12hdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // pf += printf("jdr%ld%+-+15ldtest%.8ld%d%ldtest%ld%ldt%12ldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // fpf += ft_printf("jdr%ld%+-+15ldtest%.8ld%d%ldtest%ld%ldt%12ldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // pf += printf("jdr%lld%+-+15lldtest%.8lld%lld%lldtest%lld%lldt%12lldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // fpf += ft_printf("jdr%lld%+-+15lldtest%.8lld%lld%lldtest%lld%lldt%12lldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // pf += printf("jdr%hhd%+-+15dtest%.8hhd%hhd%hhdtest%hhd%hhdt%12hhdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // fpf += ft_printf("jdr%hhd%+-+15dtest%.8hhd%hhd%hhdtest%hhd%hhdt%12hhdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // ft_printf("\n%d vs %d\n\n\n\n", pf, fpf);
}

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	int nb = 51371;
	int nb2 = 88888;
	ft_d();
	// ft_printf("ft_printf1 =%d %d\n", nb, nb2);
	//    printf("printf1    =%d %d\n\n", nb, nb2);
	//
	// ft_printf("ft_printf2 =%     8+.13d\n", nb);
	//    printf("printf2    =%      8+.13d\n\n", nb);
	//
	// ft_printf("ft_printf3 =%+8.13d\n", nb);
	//    printf("printf3    =%+8.13d\n\n", nb);
	//
	// ft_printf("ft_printf4 =%   13.8d\n", nb);
	//    printf("printf4    =%    13.8d\n\n", nb);
	//
	// ft_printf("ft_printf5 =%    +13.8d\n", ft_abs(nb));
	//    printf("printf5    =%    +13.8d\n\n", ft_abs(nb));
	//
	// ft_printf("ft_printf6 =%+13.8d\n", ft_abs(nb));
	//    printf("printf6    =%+13.8d\n\n", ft_abs(nb));
	//
	// ft_printf("ft_printf7 =%    +13.8d\n", nb);
	//    printf("printf7    =%    +13.8d\n\n", nb);
	//
	// ft_printf("ft_printf8 =%+13.8d\n", nb);
	//    printf("printf8    =%+13.8d\n\n", nb);
	//
	// ft_printf("ft_printf9 =%+08.13d\n", nb);
	//    printf("printf9    =%+08.13d\n\n", nb);
	//
	// ft_printf("ft_printf10=%+013.8d\n", nb);
	//    printf("printf10   =%+013.8d\n\n", nb);
	//
	// ft_printf("ft_printf11=%0+08.13d\n", nb);
	//    printf("printf11   =%0+08.13d\n\n", nb);
	//
	// ft_printf("ft_printf12=%0+013.8d\n", nb);
	//    printf("printf12   =%0+013.8d\n\n", nb);
	//
	// ft_printf("ft_printf13=%013d\n", nb);
	//    printf("printf13   =%013d\n\n", nb);
	//
	// ft_printf("ft_printf14=%013d\n", ft_abs(nb));
	//    printf("printf14   =%013d\n\n", ft_abs(nb));
	//
	// ft_printf("ft_printf15=%8.13d\n", nb);
	//    printf("printf15   =%8.13d\n\n", nb);
	//
	// ft_printf("ft_printf16=%-8.13d\n", nb);
	//    printf("printf16   =%-8.13d\n\n", nb);
	//
	// ft_printf("ft_printf17=%-18.13d\n", nb);
	//    printf("printf17   =%-18.13d\n\n", nb);
	//
	// ft_printf("ft_printf18=%-018d\n", nb);
	//    printf("printf18   =%-018d\n\n", nb);
	//
	// ft_printf("ft_printf19=%-0 18d\n", nb);
	//    printf("printf19   =%-0 18d\n\n", nb);
	//
	// ft_printf("ft_printf20=%+-18.13d\n", nb);
	//    printf("printf20   =%+-18.13d\n\n", nb);
	//
	// ft_printf("ft_printf21=%+-018d\n", nb);
	//    printf("printf21   =%+-018d\n\n", nb);
	//
	// ft_printf("ft_printf22=%+-0 18d\n", nb);
	//    printf("printf22   =%+-0 18d\n\n", nb);
	//
	// ft_printf("ft_printf23=%#d\n", nb);
	//    printf("printf23   =%#d\n\n", nb);





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
