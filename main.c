#include "includes/ft_printf.h"
#include <limits.h>
#include <float.h>
#include <wchar.h>

void  ft_d(void)
{
    int fpf;
    int pf;
    fpf = 0;
    pf = 0;
    // pf += printf("%d %d|\n", 42, -42);
    // fpf += ft_printf("%d %d|\n", 42, -42);
    // pf += printf("%+d %+d|\n", 42, -42);
    // fpf += ft_printf("%+d %+d|\n", 42, -42);
    // pf += printf("%-d %-d|\n", 42, -42);
    // fpf += ft_printf("%-d %-d|\n", 42, -42);
    // pf += printf("% d % d|\n", 42, -42);
    // fpf += ft_printf("% d % d|\n", 42, -42);
    // pf += printf("%d %d|\n", 2147483647, -2147483648);
    // fpf += ft_printf("%d %d|\n", 2147483647, -2147483648);
    // pf += printf("%-+-+-012d %-+-+-012d|\n", 42, -42);
    // fpf += ft_printf("%-+-+-012d %-+-+-012d|\n", 42, -42);
    // pf += printf("test %-+-+-05.4d et %-+-+-05.4d 98|\n", 42, -42);
    // fpf += ft_printf("test %-+-+-05.4d et %-+-+-05.4d 98|\n", 42, -42);
    // pf += printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    // fpf += ft_printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    // pf += printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    // fpf += ft_printf("%-+-+-.4d %-+-+-.4d|\n", 42, -42);
    // pf += printf("%-+-+-.d|\n", 0);
    // fpf += ft_printf("%-+-+-.d|\n", 0);
    // pf += printf("%012d|\n", 0);
    // fpf += ft_printf("%012d|\n", 0);
    // pf += printf("%1d|\n", 0);
    // fpf += ft_printf("%1d|\n", 0);
    // pf += printf("%+2d|\n", 0);
    // fpf += ft_printf("%+2d|\n", 0);
    // pf += printf("%d|\n", 0);
    // fpf += ft_printf("%d|\n", 0);
    // pf += printf("%018d %014d|\n", "s", 'a');
    // fpf += ft_printf("%018d %014d|\n", "s", 'a');
    // pf += printf("%+d %0d|\n", 2147483647, -2147483648);
    // fpf += ft_printf("%+d %0d|\n", 2147483647, -2147483648);
    // pf += printf("et la %+.12d %0.2d poulet|\n", 2147483647, -2147483648);
    // fpf += ft_printf("et la %+.12d %0.2d poulet|\n", 2147483647, -2147483648);
    // pf += printf("+-#.5d %-0#.d|\n", 4572, -0);
    // fpf += ft_printf("+-#.5d %-0#.d|\n", 4572, -0);
    // pf += printf("ab%-+-+-.d%c|\n", 2, -42);
    // fpf += ft_printf("ab%-+-+-.d%c|\n", 2, -42);
    // pf += printf("%d%d%d%d%d%d%d%d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // fpf += ft_printf("%d%d%d%d%d%d%d%d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
	// pf += printf("%5d%12d%15d%.2d%.1d%+5.4d%.7d%+-+8d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    // fpf += ft_printf("%5d%12d%15d%.2d%.1d%+5.4d%.7d%+-+8d|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);


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
	int fpf = 0;
	int pf = 0;
	char chr = 97;
	char *str = "Bonjour les amis!";
	char *strvide = "";
	char *strnull = NULL;
	// int nb = 0x876;
	// int nb = -8598;
	int nb = 0;
	long long llnb = -419246576;
	// int nb2 = 88888;

	// printf("=-=-=-=-=-=  TEST DU #D =-=-=-=-=-=\n\n");
	//
	// // ft_d();
	// ft_printf("ft_printf1 =%d| \n", nb );
	//    printf("printf1    =%d| \n\n", nb);
	// ft_printf("ft_printf1 =%i| \n", nb );
	//    printf("printf1    =%i| \n\n", nb);
   //
	// ft_printf("ft_printf1 =% 03d| \n", 0);
	//    printf("printf1    =% 03d| \n\n", 0);
   //
	// ft_printf("ft_printf1 =% 03d| \n", 2);
	//    printf("printf1    =% 03d| \n\n", 2);
   //
	// ft_printf("ft_printf1 =% 013.d| \n", 2);
	//    printf("printf1    =% 013.d| \n\n", 2);
   //
	// ft_printf("ft_printf1 =% 013.d| \n", nb);
	//    printf("printf1    =% 013.d| \n\n", nb);
   //
	// ft_printf("ft_printf1 =% 013d| \n", 2);
	//    printf("printf1    =% 013d| \n\n", 2);
   //
	// ft_printf("ft_printf1 =% 013d| \n", nb);
	//    printf("printf1    =% 013d| \n\n", nb);
   //
	// ft_printf("ft_printf2 =%     8+.13d|\n", nb);
	//    printf("printf2    =%      8+.13d|\n\n", nb);
   //
	// ft_printf("ft_printf3 =%+8.13d|\n", nb);
	//    printf("printf3    =%+8.13d|\n\n", nb);
   //
	// ft_printf("ft_printf4 =%   13.8d|\n", nb);
	//    printf("printf4    =%    13.8d|\n\n", nb);
   //
	// ft_printf("ft_printf5 =%    +13.8d|\n", ft_abs(nb));
	//    printf("printf5    =%    +13.8d|\n\n", ft_abs(nb));
   //
	// ft_printf("ft_printf6 =%+13.8d|\n", ft_abs(nb));
	//    printf("printf6    =%+13.8d|\n\n", ft_abs(nb));
   //
	// ft_printf("ft_printf7 =%    +13.8d|\n", nb);
	//    printf("printf7    =%    +13.8d|\n\n", nb);
   //
	// ft_printf("ft_printf8 =%+13.d|\n", nb);
	//    printf("printf8    =%+13.d|\n\n", nb);
   //
	// fpf = ft_printf("ft_printf9 =%+08.13d|\n", nb);
	// 	pf = printf("printf9    =%+08.13d|\n\n", nb);
   //
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n", pf);
   //
	// ft_printf("ft_printf10=%+013.8d|\n", nb);
	//    printf("printf10   =%+013.8d|\n\n", nb);
   //
	// ft_printf("ft_printf11=%0+08.13d|\n", nb);
	//    printf("printf11   =%0+08.13d|\n\n", nb);
   //
	// ft_printf("ft_printf13=%013d|\n", nb);
	//    printf("printf13   =%013d|\n\n", nb);
   //
	// ft_printf("ft_printf14=%013d|\n", ft_abs(nb));
	//    printf("printf14   =%013d|\n\n", ft_abs(nb));
   //
	// ft_printf("ft_printf15=%8.13d|\n", nb);
	//    printf("printf15   =%8.13d|\n\n", nb);
   //
	// ft_printf("ft_printf16=%-8.13d|\n", nb);
	//    printf("printf16   =%-8.13d|\n\n", nb);
   //
	// ft_printf("ft_printf17=%-18.13d|\n", nb);
	//    printf("printf17   =%-18.13d|\n\n", nb);
   //
	// ft_printf("ft_printf18=%-018d|\n", nb);
	//    printf("printf18   =%-018d|\n\n", nb);
   //
	// ft_printf("ft_printf19=%-0 18d|\n", nb);
	//    printf("printf19   =%-0 18d|\n\n", nb);
   //
	// ft_printf("ft_printf20=%+-18.13d|\n", nb);
	//    printf("printf20   =%+-18.13d|\n\n", nb);
   //
	// ft_printf("ft_printf21=%+-018d|\n", nb);
	//    printf("printf21   =%+-018d|\n\n", nb);
   //
	// ft_printf("ft_printf23=%#d|\n", nb);
	//    printf("printf23   =%#d|\n\n", nb);
   //
	// ft_printf("ft_printf24=% 10.14jd|\n", nb);
	//    printf("printf24   =jd|\n\n", nb);
   //
	// ft_printf("ft_printf25=% 10.14hd|\n", nb);
	//    printf("printf25   =% 10.14hd|\n\n", nb);
   //
	// ft_printf("ft_printf26=%+-.2lld|\n", nb);
	//    printf("printf26   =%+-.2lld|\n\n", nb);
   //
   //  ft_printf("ft_printf27=% 10.14hhd|\n", chr);
	//    printf("printf27   =% 10.14hhd|\n\n", chr);
   //
   // 	ft_printf("ft_printf22=%0 18d|\n", nb);
   // 	   printf("printf22   =%0 18d|\n\n", nb);
   //
   // ft_printf("ft_printf12=%0+023.8d|\n", nb);
	//   printf("printf12   =%0+023.8d|\n\n", nb);
   //
	// ft_printf("ft_printf28=|%025.d|\n", nb);
   // 	   printf("ft_printf28=|%025.d|\n\n", nb);
   //
	// ft_printf("ft_printf29=|%-5.d|\n", 0);
   // 	   printf("ft_printf29=|%-5.d|\n\n", 0);
   //
	// ft_printf("ft_printf30=|42%2zx42|\n", 0);
   // 	   printf("   printf30=|42%2zx42|\n\n", 0);

	// ft_printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 );
	// printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	//
    // fpf = ft_printf("ft_printf28=% 10.14hhd|\n", nb);
	// 	pf = printf("printf27   =% 10.14hhd|\n\n", nb);
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n", pf);
	//
	//
	//
	//
	// printf("=-=-=-=-=-=  TEST DU #O =-=-=-=-=-=\n\n");
	// // nb = 0;
	// ft_printf("ft_printf1=%o|\n", nb);
	//    printf("printf1   =%o|\n\n", nb);
	//
	// ft_printf("ft_printf2=%+0 18o|\n", nb);
	//    printf("printf2   =%+0 18o|\n\n", nb);
	//
	// fpf = ft_printf("ft_printf3=%+-0 18o|\n", nb);
	// 	pf = printf("printf3   =%+-0 18o|\n\n", nb);
	// // printf("ft_printf %d\n", fpf + 1);
	// // printf("printf    %d\n", pf);
	//
	// ft_printf("ft_printf4=%.10 18o|\n", nb);
	//    printf("printf4   =%.10 18o|\n\n", nb);
	//
	// ft_printf("ft_printf5=%04.2o|\n", nb);
	//    printf("printf5   =%04.2o|\n\n", nb);
	//
	// ft_printf("ft_printf11=%0o|\n", nb);
	//    printf("printf11   =%0o|\n\n", nb);
	//
	// ft_printf("ft_printf12=%+.0 12o|\n", nb);
	//    printf("printf12   =%+.0 12o|\n\n", nb);
	//
	// fpf = ft_printf("ft_printf13=%+-.10 18o|\n", nb);
	// 	pf = printf("printf13   =%+-.10 18o|\n\n", nb);
	// // printf("ft_printf %d\n", fpf + 1);
	// // printf("printf    %d\n", pf);
	//
	// ft_printf("ft_printf14=%- .18o|\n", nb);
	//    printf("printf14   =%- .18o|\n\n", nb);
	//
	// ft_printf("ft_printf15=%-o|\n", nb);
	//    printf("printf15   =%-o|\n\n", nb);
	//
	//
	// ft_printf("ft_printf1=%#o|\n", nb);
	//    printf("printf1   =%#o|\n\n", nb);
	//
	// ft_printf("ft_printf2=%#+0 18o|\n", nb);
	//    printf("printf2   =%#+0 18o|\n\n", nb);
	//
	// fpf = ft_printf("ft_printf3=%#+-0 18o|\n", nb);
	// 	pf = printf("printf3   =%#+-0 18o|\n\n", nb);
	// // printf("ft_printf %d\n", fpf + 1);
	// // printf("printf    %d\n", pf);
	//
	// ft_printf("ft_printf4=%#.10 18o|\n", nb);
	//    printf("printf4   =%#.10 18o|\n\n", nb);
	//
	// ft_printf("ft_printf5=%#04.2o|\n", nb);
	//    printf("printf5   =%#04.2o|\n\n", nb);
	//
	// ft_printf("ft_printf11=%#0o|\n", nb);
	//    printf("printf11   =%#0o|\n\n", nb);
	//
	// ft_printf("ft_printf12=%+#.0 12o|\n", nb);
	//    printf("printf12   =%+#.0 12o|\n\n", nb);
	//
	// fpf = ft_printf("ft_printf13=%#+-.10 18o|\n", nb);
	// 	pf = printf("printf13   =%#+-.10 18o|\n\n", nb);
	// // printf("ft_printf %d\n", fpf + 1);
	// // printf("printf    %d\n", pf);
	//
	// ft_printf("ft_printf14=%-# .18o|\n", nb);
	//    printf("printf14   =%-# .18o|\n\n", nb);
	//
	// ft_printf("ft_printf15=%#-o|\n", nb);
	//    printf("printf15   =%#-o|\n\n", nb);
	//
	// ft_printf("ft_printf16=%#-8.3o|\n", 0);
	//    printf("printf16   =%#-8.3o|\n\n", 0);
	//
	// ft_printf("ft_printf16=%#o|\n", nb);
	//    printf("printf16   =%#o|\n\n", nb);
	// //
	// // // IMPOSSIBLE a gerer en cas de nbr negatif en ENTREE
	// //
	// //
	// printf("=-=-=-=-=-=  TEST DU #U =-=-=-=-=-=\n\n");
	// // nb = 2107;
	// nb = 0;
	// ft_printf("ft_printf1=%u|\n", nb);
	//    printf("printf1   =%u|\n\n", nb);
	//
	// ft_printf("ft_printf2=%+0 18u|\n", nb);
	//    printf("printf2   =%+0 18u|\n\n", nb);
	//
	// ft_printf("ft_printf3=%+-018u|\n", nb);
	//    printf("printf3   =%+-018u|\n\n", nb);
	//
	// fpf = ft_printf("ft_printf4=%18.0u|\n", nb);
	// 	pf = printf("printf4   =%18.0u|\n\n", nb);
	// // printf("ft_printf %d\n", fpf + 1);
	// // printf("printf    %d\n", pf);
	//
	// ft_printf("ft_printf5=%-18.0 u|\n", nb);
	//    printf("printf5   =%-18.0 u|\n\n", nb);
	//
	// ft_printf("ft_printf6=%18. u|\n", nb);
	//    printf("printf6   =%18. u|\n\n", nb);
	//
	// ft_printf("ft_printf7=%18.25 u|\n", nb);
	//    printf("printf7   =%18.25 u|\n\n", nb);
	//
	// ft_printf("ft_printf8=%018.5 u|\n", nb);
	//    printf("printf8   =%018.5 u|\n\n", nb);
	//
	// ft_printf("ft_printf9=%-018.5 u|\n", nb);
	//    printf("printf9   =%-018.5 u|\n\n", nb);
	//
	// ft_printf("ft_printf10=%018.25 u|\n", nb);
	//    printf("printf10   =%018.25 u|\n\n", nb);
	//
	// ft_printf("ft_printf11=%-018.25 u|\n", nb);
	//    printf("printf11   =%-018.25 u|\n\n", nb);
	//
	// ft_printf("ft_printf12=%18u|\n", nb);
	//    printf("printf12   =%18u|\n\n", nb);
	//
	// ft_printf("ft_printf13=%018u|\n", nb);
	//    printf("printf13   =%018u|\n\n", nb);
	//
	// ft_printf("ft_printf14=%018.u|\n", nb);
	//    printf("printf14   =%018.u|\n\n", nb);
	//
	//
	//
	// printf("=-=-=-=-=-=  TEST DU #X =-=-=-=-=-=\n\n");
	// nb = 0;
	// ft_printf("ft_printf1=%#5.0x|\n", nb);
	//    printf("printf1   =%#5.0x|\n\n", nb);
	//
	// ft_printf("ft_printf2=%+0 18x|\n", nb);
	//    printf("printf2   =%+0 18x|\n\n", nb);
	//
	// ft_printf("ft_printf3=%+-018x|\n", nb);
	//    printf("printf3   =%+-018x|\n\n", nb);
	//
	// ft_printf("ft_printf4=%18.0x|\n", nb);
	//    printf("printf4   =%18.0x|\n\n", nb);
	//
	// ft_printf("ft_printf5=%#-18.7 x|\n", nb);
	//    printf("printf5   =%#-18.7 x|\n\n", nb);
	//
	// ft_printf("ft_printf6=%#+0 18x|\n", nb);
	//    printf("printf6   =%#+0 18x|\n\n", nb);
	//
	// ft_printf("ft_printf7=%#+-018x|\n", nb);
	//    printf("printf7   =%#+-018x|\n\n", nb);
	//
	// ft_printf("ft_printf8=%#18.0x|\n", nb);
	//    printf("printf8   =%#18.0x|\n\n", nb);
	//
	// ft_printf("ft_printf9=%#-18.7 x|\n", nb);
	//    printf("printf9   =%#-18.7 x|\n\n", nb);
	//
	// ft_printf("ft_printf10=%#18.7 x|\n", nb);
	//    printf("printf10   =%#18.7 x|\n\n", nb);
	//
	// ft_printf("ft_printf11=%#.7 x|\n", nb);
	//    printf("printf11   =%#.7 x|\n\n", nb);
	//
	// ft_printf("ft_printf12=%# -20.7 x|\n", nb);
	//    printf("printf12   =%# -20.7 x|\n\n", nb);
	//
	// ft_printf("ft_printf13=%#.7 X|\n", nb);
	//    printf("printf13   =%#.7 X|\n\n", nb);
	//
	// ft_printf("ft_printf14=%# -20.7 X|\n", nb);
	//    printf("printf14   =%# -20.7 X|\n\n", nb);
	//
	// ft_printf("ft_printf15=%#X|\n", nb);
   	//    printf("printf15   =%#X|\n\n", nb);
	//
   	// ft_printf("ft_printf16=%+0 18X|\n", nb);
   	//    printf("printf16   =%+0 18X|\n\n", nb);
	//
   	// ft_printf("ft_printf17=%+-018X|\n", nb);
   	//    printf("printf17   =%+-018X|\n\n", nb);
	//
   	// ft_printf("ft_printf18=%18.0X|\n", nb);
   	//    printf("printf18   =%18.0X|\n\n", nb);
	//
   	// ft_printf("ft_printf19=%#-18.7 X|\n", nb);
   	//    printf("printf19   =%#-18.7 X|\n\n", nb);
	//
   	// ft_printf("ft_printf31=%#x|\n", nb);
   	//    printf("printf31   =%#x|\n\n", nb);
	//
   	// fpf = ft_printf("ft_printf32=%06.2X|\n", nb);
   	//    pf = printf("printf32   =%06.2X|\n", nb);
	//    printf("ft_printf %d\n", fpf);
   	// 	printf("printf    %d\n\n", pf);
	//
   	// fpf = ft_printf("ft_printf33=%20x|\n", nb);
   	//    pf = printf("printf33   =%20x|\n", nb);
	//    printf("ft_printf %d\n", fpf);
   	// 	printf("printf    %d\n\n", pf);
	//
   	// fpf = ft_printf("ft_printf34=%+20x|\n", nb);
   	//    pf = printf("printf34   =%+20x|\n", nb);
	//    printf("ft_printf %d\n", fpf);
   	// 	printf("printf    %d\n\n", pf);
	//
   	// fpf = ft_printf("ft_printf35=%#20x|\n", nb);
   	//    pf = printf("printf35   =%#20x|\n", nb);
	//    printf("ft_printf %d\n", fpf);
   	// 	printf("printf    %d\n\n", pf);
	//
   	// fpf = ft_printf("ft_printf36=%-20x|\n", nb);
   	//    pf = printf("printf36   =%-20x|\n", nb);
	//    printf("ft_printf %d\n", fpf);
   	// 	printf("printf    %d\n\n", pf);
	//
   	// fpf = ft_printf("ft_printf37=%020x|\n", nb);
   	//    pf = printf("printf37   =%020x|\n", nb);
	//    printf("ft_printf %d\n", fpf);
   	// 	printf("printf    %d\n\n", pf);
	//
   	// fpf = ft_printf("ft_printf38=%8.1x|\n", 0);
   	//    pf = printf("printf38   =%8.1x|\n", 0);
	//    printf("ft_printf %d\n", fpf);
   	// 	printf("printf    %d\n\n", pf);




   	// fpf = ft_printf("ft_printf19=%9.8X|\n", 0);
   	// pf = printf("printf19   =%9.8X|\n", 0);
	// printf("ft_printf %d\n", fpf);
	// printf("printf    %d\n\n", pf);
   	// fpf = ft_printf("ft_printf19=%9.X|\n", 0);
   	// pf = printf("printf19   =%9.X|\n", 0);
	// printf("ft_printf %d\n", fpf);
	// printf("printf    %d\n\n", pf);
	//
	//
	//
	// printf("=-=-=-=-=-=  TEST DU #C =-=-=-=-=-=\n\n");
	// ft_printf("ft_printf1=%c\n", chr);
	//    printf("printf1   =%c\n\n", chr);
	//
	// ft_printf("ft_printf2=%c %c %c %c\n", chr, 'a', 'r', 47);
	//    printf("printf2   =%c %c %c %c\n\n", chr, 'a', 'r', 47);
	//
	// ft_printf("ft_printf3=%-c %+c %#c % c\n", chr, 'a', 'r', 47);
	//    printf("printf3   =%-c %+c %#c % c\n\n", chr, 'a', 'r', 47);
	//
	// ft_printf("ft_printf4=%12c\n", chr);
	//    printf("printf4   =%12c\n\n", chr);
	//
	// ft_printf("ft_printf5=%12.4c\n", chr);
	//    printf("printf5   =%12.4c\n\n", chr);
	//
	// ft_printf("ft_printf6=%4.12c\n", chr);
	//    printf("printf6   =%4.12c\n\n", chr);
	//
	// ft_printf("ft_printf7=%12.12c\n", chr);
	//    printf("printf7   =%12.12c\n\n", chr);
	//
	// ft_printf("ft_printf8=%-12c\n", chr);
	//    printf("printf8   =%-12c\n\n", chr);
	//
	// ft_printf("ft_printf9=%-12.4c\n", chr);
	//    printf("printf9   =%-12.4c\n\n", chr);
	//
	// ft_printf("ft_printf10=%-4.12c\n", chr);
	//    printf("printf10   =%-4.12c\n\n", chr);
	//
	// ft_printf("ft_printf11=%-4.4c\n", chr);
	//    printf("printf11   =%-4.4c\n\n", chr);
	//
	// ft_printf("ft_printf12=%-1.1c\n", chr);
	//    printf("printf12   =%-1.1c\n\n", chr);
	//
	//
	//
	// printf("=-=-=-=-=-=  TEST DU #S =-=-=-=-=-=\n\n");
	// str = "*[]){Lこんにちは、私は単体テストですいいえ最終的なフラッシュ╯°□°)╯︵ ┻━┻ ╯°□°)╯︵ ┻━┻ ︵ ╯(°□° ╯┬─┬ ノ( ゜-゜ノ)(╯°Д°）╯︵ /(.□ . )(/ .□.) ︵╰(゜Д゜)╯︵ /(.□. )ʕノ•ᴥ•ʔノ ︵ ┻━┻ ";

	// fpf = ft_printf("ft_printf1=%s\n", str);
		// pf = printf("printf1   =%s\n\n", str);
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n\n", pf);
	//
	// fpf = ft_printf("ft_printf2=%.10s\n", str);
	// 	pf = printf("printf2   =%.10s\n\n", str);
	//
	// fpf = ft_printf("ft_printf3=%10s\n", str);
	// 	pf = printf("printf3   =%10s\n\n", str);
	//
	// fpf = ft_printf("ft_printf4=%10.20s\n", str);
	// 	pf = printf("printf4   =%10.20s\n\n", str);
	//
	// fpf = ft_printf("ft_printf5=%20.10s\n", str);
	// 	pf = printf("printf5   =%20.10s\n\n", str);
	//
	// fpf = ft_printf("ft_printf6=%.10s\n", strvide);
	// 	pf = printf("printf6   =%.10s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf7=%10s\n", strvide);
	// 	pf = printf("printf7   =%10s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf8=%10.20s\n", strvide);
	// 	pf = printf("printf8   =%10.20s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf9=%20.10s\n", strvide);
	// 	pf = printf("printf9   =%20.10s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf9=%10.10s\n", strvide);
	// 	pf = printf("printf9   =%10.10s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf10=%s\n", strvide);
	// 	pf = printf("printf10   =%s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf11=%s\n", strnull);
	// 	pf = printf("printf11   =%s\n\n", strnull);
	//
	// fpf = ft_printf("ft_printf12=%-s\n", str);
	// 	pf = printf("printf12   =%-s\n\n", str);
	//
	// fpf = ft_printf("ft_printf13=%-10.2s\n", str);
	// 	pf = printf("printf13   =%-10.2s\n\n", str);
	//
	// fpf = ft_printf("ft_printf14=%-2.10s\n", str);
	// 	pf = printf("printf14   =%-2.10s\n\n", str);
	//
	// fpf = ft_printf("ft_printf15=%-10.10s\n", str);
	// 	pf = printf("printf15   =%-10.10s\n\n", str);
	//
	// fpf = ft_printf("ft_printf16=%-s\n", strvide);
	// 	pf = printf("printf16   =%-s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf17=%-10.2s\n", strvide);
	// 	pf = printf("printf17   =%-10.2s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf18=%-2.10s\n", strvide);
	// 	pf = printf("printf18   =%-2.10s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf19=%-10.10s\n", strvide);
	// 	pf = printf("printf19   =%-10.10s\n\n", strvide);
	//
	// fpf = ft_printf("ft_printf20=%-s\n", strnull);
	// 	pf = printf("printf20   =%-s\n\n", strnull);
	//
	// fpf = ft_printf("ft_printf21=%-10.2s\n", strnull);
	// 	pf = printf("printf21   =%-10.2s\n\n", strnull);
	//
	// fpf = ft_printf("ft_printf22=%-2.10s\n", strnull);
	// 	pf = printf("printf22   =%-2.10s\n\n", strnull);
	//
	// fpf = ft_printf("ft_printf23=%-10.10s\n", strnull);
	// 	pf = printf("printf23   =%-10.10s\n\n", strnull);
	//
	// fpf = ft_printf("ft_printf24=%10.10s\n", strnull);
	// 	pf = printf("printf24   =%10.10s\n\n", strnull);
	//
	// fpf = ft_printf("ft_printf25=%4.4s\n", strnull);
	// 	pf = printf("printf25   =%4.4s\n\n", strnull);
	//
	//
	//
	//
	// ft_printf("ft_printf=%c\n", NULL);
	//    printf("printf   =%c\n", NULL);
	//
	// ft_printf("ft_printf=%5c\n", NULL);
	//    printf("printf   =%5c\n", NULL);
	//
	// ft_printf("ft_printf=%5o\n", 42);
	//    printf("printf   =%5o\n", 42);
	//
	// ft_printf("ft_printf=%#2o\n", 42);
	//    printf("printf   =%#2o\n", 42);
	//
	// ft_printf("ft_printf=%#-7o\n", 42);
	//    printf("printf   =%#-7o\n", 42);
	//
	// ft_printf("1moulitest: %5.o %5.0o\n", 0, 0);
	//    printf("1moi----->: %5.o %5.0o\n", 0, 0);
	//
	// ft_printf("2moulitest: %5.d %5.0d\n", 0, 0);
	//    printf("2moi----->: %5.d %5.0d\n", 0, 0);
	//
	// ft_printf("3moulitest: %5.o %5.0o\n", 1, 1);
	//    printf("3moi----->: %5.o %5.0o\n", 1, 1);
	//
	// ft_printf("4moulitest: %5.d %5.0d\n", 1, 1);
	//    printf("4moi----->: %5.d %5.0d\n", 1, 1);
	// unsigned int ptdr = 4147483647;
	//
	// ft_printf("%u\n", ptdr);
	//    printf("%u\n", ptdr);
	//
	// // /*------------------------------------------------*/
	// // char *jik;
	// // if (!(jik = (char *)malloc(sizeof(char) * 24)))
	// // 	exit(0);
	// //
	// // jik = "lolptdrmdrxd\n";
	// // ft_putstr("jik = ");
	// // ft_putstr(jik);
	// // ft_putstr("ptr = ");
	// // ft_putnbr(jik);
	// // ft_putstr("\n\n");
	// //
	// // char *jok = "lo44518mdrxd\n";
	// // ft_putstr("jok = ");
	// // ft_putstr(jok);
	// // ft_putstr("ptr = ");
	// // ft_putnbr(&jok);
	// // ft_putstr("\n\n");
	// //
	// // printf("\npf jik = %p\npf jok = %p\n", jik, jok);
	// //
	// // t_s		s;
	// // t_flags	f;
	// // t_conv	c;
	// // int i = 0;
	// // unsigned long long joffrey = (unsigned long long)jik;
	// //
	// // s.str = str;
	// // s.f = &f;
	// // s.c = &c;
	// // s.res = NULL;
	// // s.mllc = 1;
	// // s.pres = 0;
	// // s.champ = 0;
	// // ft_dec_to_hex(&s, joffrey);
	// // write(1, s.hex, 16);
	// // /*------------------------------------------------*/
	//
	//
	// printf("=-=-=-=-=-=  TEST DU #P =-=-=-=-=-=\n\n");
	//
	// char *golum = "goluuuuuuuum\n";
	// ft_printf("    moi1: %p|\n", golum);
	//    printf("pas moi1: %p|\n\n", golum);
	//
	// int *galum;
	// int troplol = -1499;
	// galum = troplol;
	// ft_printf("    moi2: %p|\n", galum);
	//    printf("pas moi2: %p|\n\n", galum);
	//
	// long  *gilum;
	// long tropmdr = 2147483649;
	// gilum = tropmdr;
	// ft_printf("    moi3: %p|\n", gilum);
	//    printf("pas moi3: %p|\n\n", gilum);
	//
	// ft_printf("    moi4: %030.18p|\n", malloc);
	//    printf("pas moi4: %030.18p|\n", malloc);
	//    // printf("test lg4: 1234567890123456789012345678901234567890\n\n");
	//
	// ft_printf("    moi4bis: %030p|\n", malloc);
	//    printf("pas moi4bis: %030p|\n", malloc);
	//    // printf("test lg4bis: 1234567890123456789012345678901234567890\n\n");
	//
	// ft_printf("    moi5: %25p|\n", malloc);
	//    printf("pas moi5: %25p|\n\n", malloc);
	//
	// ft_printf("    moi6: %-35p|\n", malloc);
	//    printf("pas moi6: %-35p|\n", malloc);
	//    // printf("test lg6: 1234567890123456789012345678901234567890\n\n");
	//
	// ft_printf("    moi7: %025p|\n", malloc);
	//    printf("pas moi7: %025p|\n", malloc);
	//    // printf("test lg7: 1234567890123456789012345678901234567890\n\n");
	//
	// ft_printf("    moi8: %.31p|\n", malloc);
	//    printf("pas moi8: %.31p|\n\n", malloc);
	//
	// ft_printf("    moi9: %25.31p|\n", malloc);
	//    printf("pas moi9: %25.31p|\n\n", malloc);
	//
	// ft_printf("    moi10: %-25.31p|\n", malloc);
	//    printf("pas moi10: %-25.31p|\n\n", malloc);
	//
	// ft_printf("    moi11: %025.31p|\n", malloc);
	//    printf("pas moi11: %025.31p|\n", malloc);
	   // printf("test lg11: 1234567890123456789012345678901234567890\n");
	//
	//
	// printf("=-=-=-=-=-=  TEST DU #F =-=-=-=-=-=\n\n");
	//
	// long double ldb = 45999123456789012.12345678901234567890L;
	// 	  double db =
	// 	245245245999123456789012.12345678901234567890L;
	// long double ldb = -372.906256066978456;
	// double db = -372.9996999999999679;
	// long double ldb = -900.906256066978456;
	// double db = -900.906256066978456;
	// long double ldb = 999.9999999L;
	// double db = 999.9999999;
	long double ldb = LDBL_MAX;
		  double db = LDBL_MAX;
	//
	// printf("ldb max = %Lf|\n", LDBL_MAX);
	// printf(" db = %.10f|\n", db);


	// ft_printf("ft_printfL=%10.Lf|\n", ldb);
	//    printf("   printfL=%10.Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL=%10+.Lf|\n", ldb);
	//    printf("   printfL=%10+.Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL=%+.Lf|\n", ldb);
	//    printf("   printfL=%+.Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL=%.Lf|\n", ldb);
	//    printf("   printfL=%.Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL=%10Lf|\n", ldb);
	//    printf("   printfL=%10Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL=%10+Lf|\n", ldb);
	//    printf("   printfL=%10+Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL=%+Lf|\n", ldb);
	//    printf("   printfL=%+Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL=%Lf|\n", ldb);
	//    printf("   printfL=%Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %040.10Lf|\n", ldb);
	//    printf("   printfL= %040.10Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %40.10Lf|\n", ldb);
	//    printf("   printfL= %40.10Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= % +40.10Lf|\n", ldb);
	//    printf("   printfL= % +40.10Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= % .10Lf|\n", ldb);
	//    printf("   printfL= % .10Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %20.10Lf|\n", ldb);
	//    printf("   printfL= %20.10Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %.0Lf|\n", ldb);
	//    printf("   printfL= %.0Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL1= %14Lf|\n", ldb);
	//    printf("   printfL1= %14Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL2= %20.6Lf|\n", ldb);
	//    printf("   printfL2= %20.6Lf|\n\n", ldb);
	//
	// printf("Test du '-' :\n\n");
	//
	// ft_printf("ft_printfL= %- .10Lf|\n", ldb);
	//    printf("   printfL= %- .10Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %-20.5Lf|\n", ldb);
	//    printf("   printfL= %-20.5Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %-.0Lf|\n", ldb);
	//    printf("   printfL= %-.0Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %-20Lf|\n", ldb);
	//    printf("   printfL= %-20Lf|\n\n", ldb);
	//
	// ft_printf("ft_printfL= %-040.13Lf|\n", ldb);
   	//    printf("   printfL= %-040.13Lf|\n\n", ldb);
	//
   	// ft_printf("ft_printfL= %-40.10Lf|\n", ldb);
   	//    printf("   printfL= %-40.10Lf|\n\n", ldb);
	//
   	// ft_printf("ft_printfL= %- +40.8Lf|\n", ldb);
   	//    printf("   printfL= %- +40.8Lf|\n\n", ldb);
	//
	// printf("\n---   DOUBLE   ---\n\n");
	//
	// ft_printf("ft_printf= %040.10f|\n", db);
	// pf = printf("   printf= %040.10f|\n\n", db);
	//
	// ft_printf("ft_printf= %40.10f|\n", db);
	//    printf("   printf= %40.10f|\n\n", db);
	//
	// ft_printf("ft_printf= % +40.10f|\n", db);
	//    printf("   printf= % +40.10f|\n\n", db);
	//
	// ft_printf("ft_printf= % .10f|\n", db);
	//    printf("   printf= % .10f|\n\n", db);
	//
	// ft_printf("ft_printf= %20.10f|\n", db);
	//    printf("   printf= %20.10f|\n\n", db);
	//
	// ft_printf("ft_printf= %.0f|\n", db);
	//    printf("   printf= %.0f|\n\n", db);
	//
	// ft_printf("ft_printf= %20f|\n", db);
	//    printf("   printf= %20f|\n\n", db);
	//
	// // printf("Test du '-' :\n\n");
	//
	// ft_printf("ft_printf= %- .10f|\n", db);
	//    printf("   printf= %- .10f|\n\n", db);
	//
	// ft_printf("ft_printf= %-20.10f|\n", db);
	//    printf("   printf= %-20.10f|\n\n", db);
	//
	// ft_printf("ft_printf= %-.0f|\n", db);
	//    printf("   printf= %-.0f|\n\n", db);
	//
	// ft_printf("ft_printf= %-20f|\n", db);
	//    printf("   printf= %-20f|\n\n", db);
	//
	// ft_printf("ft_printf= %-040.10f|\n", db);
   	//    printf("   printf= %-040.10f|\n\n", db);
	//
   	// ft_printf("ft_printf= %-40.10f|\n", db);
   	//    printf("   printf= %-40.10f|\n\n", db);
	//
   	// ft_printf("ft_printf= %- +40.10f|\n", db);
   	//    printf("   printf= %- +40.10f|\n\n", db);
	//
   	// ft_printf("ft_printfL= %#-17.0Lf|\n", ldb);
   	//    printf("   printfL= %#-17.0Lf|\n\n", ldb);
	//
   	// ft_printf("ft_printfL= %#17.0Lf|\n", ldb);
   	//    printf("   printfL= %#17.0Lf|\n\n", ldb);
	//
   	// ft_printf("ft_printfL= %0#17.0Lf|\n", ldb);
   	//    printf("   printfL= %0#17.0Lf|\n\n", ldb);
	//
   	// ft_printf("---ft_printf= %#-17.0f|\n", db);
   	//    printf("---   printf= %#-17.0f|\n\n", db);
	//
   	// ft_printf("---ft_printf= %-17.0f|\n", db);
   	//    printf("---   printf= %-17.0f|\n\n", db);
	//
   	// ft_printf("---ft_printfL= %#-17.0Lf|\n", ldb);
   	//    printf("---   printfL= %#-17.0Lf|\n\n", ldb);
	//
   	// ft_printf("ft_printf= %#17.0f|\n", db);
   	//    printf("   printf= %#17.0f|\n\n", db);
	//
   	// ft_printf("ft_printf= %0#17.0f|\n", db);
   	//    printf("   printf= %0#17.0f|\n\n", db);
	//
   	// ft_printf("ft_printfL= %0#27.16Lf|\n", ldb);
   	//    printf("   printfL= %0#27.16Lf|\n\n", ldb);
	//
   	// ft_printf("ft_printf= %0#27.16f|\n", db);
   	//    printf("   printf= %0#27.16f|\n\n", db);
	//
   	// ft_printf("ft_printfL= %-+9.f|\n", db);
   	//    printf("   printfL= %-+9.f|\n\n", db);
	//
   	// ft_printf("ft_printf= %9.0f|\n", db);
   	//    printf("   printf= %9.0f|\n\n", db);








	// TEST STRING LONGUE

	// ft_printf("ft_printf32=%llx|\n", -9223372036854775808);
	//    printf("printf32   =%llx|\n\n", -9223372036854775808);
	//
	// ft_printf("mdretifhdbjvbdbdjc hdbd cd  jddbchcnn cjbhwad wd kanbdwhba%llx et %llX egalement %llx fini %lx %llx et %llX egalement %llx fini %lx|\n", 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807, 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807);
	// printf("mdretifhdbjvbdbdjc hdbd cd  jddbchcnn cjbhwad wd kanbdwhba%llx et %llX egalement %llx fini %lx %llx et %llX egalement %llx fini %lx|\n", 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807, 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807);

	// ft_printf("123456789 abcdefghi 987654321 ihgfedcba motlettre z1x2w3v4u fromAgere\n");
	// printf("123456789 abcdefghi 987654321 ihgfedcba motlettre z1x2w3v4u fromAgere\n\n");


	// ft_printf("allo %hho|\n", (char)-50);
	// printf("allo %hho|\n", (char)-50);




	// ft_printf("allo %hho|\n", (char)-50);
	// printf("allo %hho|\n", (char)-50);


	printf("=-=-=-=-=    TEST RANDOM    =-=-=-=-=\n\n");

	fpf = ft_printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", -1784266, 82, "Le soleil brille dans le ciel bleu normand pendant que les chiens courent.", 97648.0648751, 2174847364715 , -2347);
	pf = printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", -1784266, 82, "Le soleil brille dans le ciel bleu normand pendant que les chiens courent.", 97648.0648751, 2174847364715 , -2347);

	printf("ft_printf %d\n", fpf);
  	printf("printf    %d\n\n", pf);

	fpf = ft_printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", 0, 0, NULL, 0000.000, 0, 0);
	pf = printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", 0, 0, NULL, 0000.000, 0, 0);

	printf("ft_printf %d\n", fpf);
  	printf("printf    %d\n\n", pf);






















	return 0;
}
