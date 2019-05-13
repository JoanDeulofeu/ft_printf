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


    pf += printf("jdr%hd%+-+15hdtest%.8hd%hd%hdtest%hd%hdt%12hdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    fpf += ft_printf("jdr%hd%+-+15hdtest%.8hd%hd%hdtest%hd%hdt%12hdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    pf += printf("jdr%ld%+-+15ldtest%.8ld%d%ldtest%ld%ldt%12ldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    fpf += ft_printf("jdr%ld%+-+15ldtest%.8ld%d%ldtest%ld%ldt%12ldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    pf += printf("jdr%lld%+-+15lldtest%.8lld%lld%lldtest%lld%lldt%12lldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    fpf += ft_printf("jdr%lld%+-+15lldtest%.8lld%lld%lldtest%lld%lldt%12lldXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    pf += printf("jdr%hhd%+-+15dtest%.8hhd%hhd%hhdtest%hhd%hhdt%12hhdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    fpf += ft_printf("jdr%hhd%+-+15dtest%.8hhd%hhd%hhdtest%hhd%hhdt%12hhdXD|\n", 0, 2, 56, 123034, -1, -12, -4512, -431431);
    ft_printf("\n%d vs %d\n\n\n\n", pf, fpf);
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
	int nb = -8598;
	// int nb = 0;
	long long llnb = -419246576;
	// int nb2 = 88888;

	// printf("=-=-=-=-=-=  TEST DU #D =-=-=-=-=-=\n\n");
	//
// 	ft_d();
	ft_printf("ft_printf0 =%.d| \n", nb);
	   printf("printf0    =%.d| \n\n", nb);

	ft_printf("ft_printf1 =%d| \n", nb );
	   printf("printf1    =%d| \n\n", nb);
	ft_printf("ft_printf1 =%i| \n", nb );
	   printf("printf1    =%i| \n\n", nb);

	ft_printf("ft_printf1 =% 03d| \n", 0);
	   printf("printf1    =% 03d| \n\n", 0);

	ft_printf("ft_printf1 =% 03d| \n", 2);
	   printf("printf1    =% 03d| \n\n", 2);

	ft_printf("ft_printf11 =% 013.d| \n", 2);
	   printf("printf11    =% 013.d| \n\n", 2);

	ft_printf("ft_printf11 =% 013.d| \n", nb);
	   printf("printf11    =% 013.d| \n\n", nb);

	ft_printf("ft_printf1 =% 013d| \n", 2);
	   printf("printf1    =% 013d| \n\n", 2);

	ft_printf("ft_printf1 =% 013d| \n", nb);
	   printf("printf1    =% 013d| \n\n", nb);

	ft_printf("ft_printf2 =%     8+.13d|\n", nb);
	   printf("printf2    =%      8+.13d|\n\n", nb);

	ft_printf("ft_printf3 =%+8.13d|\n", nb);
	   printf("printf3    =%+8.13d|\n\n", nb);

	ft_printf("ft_printf4 =%   13.8d|\n", nb);
	   printf("printf4    =%    13.8d|\n\n", nb);

	ft_printf("ft_printf5 =%    +13.8d|\n", ft_abs(nb));
	   printf("printf5    =%    +13.8d|\n\n", ft_abs(nb));

	ft_printf("ft_printf6 =%+13.8d|\n", ft_abs(nb));
	   printf("printf6    =%+13.8d|\n\n", ft_abs(nb));

	ft_printf("ft_printf7 =%    +13.8d|\n", nb);
	   printf("printf7    =%    +13.8d|\n\n", nb);

	ft_printf("ft_printf8 =%+13.d|\n", nb);
	   printf("printf8    =%+13.d|\n\n", nb);

	fpf = ft_printf("ft_printf9 =%+08.13d|\n", nb);
		pf = printf("printf9    =%+08.13d|\n\n", nb);

	printf("ft_printf %d\n", fpf + 1);
	printf("printf    %d\n", pf);

	ft_printf("ft_printf10=%+013.8d|\n", nb);
	   printf("printf10   =%+013.8d|\n\n", nb);

	ft_printf("ft_printf11=%0+08.13d|\n", nb);
	   printf("printf11   =%0+08.13d|\n\n", nb);

	ft_printf("ft_printf13=%013d|\n", nb);
	   printf("printf13   =%013d|\n\n", nb);

	ft_printf("ft_printf14=%013d|\n", ft_abs(nb));
	   printf("printf14   =%013d|\n\n", ft_abs(nb));

	ft_printf("ft_printf15=%8.13d|\n", nb);
	   printf("printf15   =%8.13d|\n\n", nb);

	ft_printf("ft_printf16=%-8.13d|\n", nb);
	   printf("printf16   =%-8.13d|\n\n", nb);

	ft_printf("ft_printf17=%-18.13d|\n", nb);
	   printf("printf17   =%-18.13d|\n\n", nb);

	ft_printf("ft_printf18=%-018d|\n", nb);
	   printf("printf18   =%-018d|\n\n", nb);

	ft_printf("ft_printf19=%-0 18d|\n", nb);
	   printf("printf19   =%-0 18d|\n\n", nb);

	ft_printf("ft_printf20=%+-18.13d|\n", nb);
	   printf("printf20   =%+-18.13d|\n\n", nb);

	ft_printf("ft_printf21=%+-018d|\n", nb);
	   printf("printf21   =%+-018d|\n\n", nb);

	ft_printf("ft_printf23=%#d|\n", nb);
	   printf("printf23   =%#d|\n\n", nb);

	ft_printf("ft_printf24=% 10.14jd|\n", nb);
	   printf("printf24   =% 10.14jd|\n\n", nb);

	ft_printf("ft_printf25=% 10.14hd|\n", nb);
	   printf("printf25   =% 10.14hd|\n\n", nb);

	ft_printf("ft_printf26=%+-.2lld|\n", nb);
	   printf("printf26   =%+-.2lld|\n\n", nb);

    ft_printf("ft_printf27=% 10.14hhd|\n", chr);
	   printf("printf27   =% 10.14hhd|\n\n", chr);

   	ft_printf("ft_printf22=%0 18d|\n", nb);
   	   printf("printf22   =%0 18d|\n\n", nb);

   ft_printf("ft_printf12=%0+023.8d|\n", nb);
	  printf("printf12   =%0+023.8d|\n\n", nb);

	ft_printf("ft_printf28=|%025.d|\n", nb);
   	   printf("ft_printf28=|%025.d|\n\n", nb);

	ft_printf("ft_printf29=|%-5.d|\n", 0);
   	   printf("ft_printf29=|%-5.d|\n\n", 0);

	ft_printf("ft_printf30=|42%2zx42|\n", 0);
   	   printf("   printf30=|42%2zx42|\n\n", 0);

	ft_printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 );
	printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);

    fpf = ft_printf("ft_printf27=% 10.14hhd|\n", nb);
		pf = printf("printf27   =% 10.14hhd|\n\n", nb);
	printf("ft_printf %d\n", fpf + 1);
	printf("printf    %d\n", pf);
//
//
//
//
	printf("=-=-=-=-=-=  TEST DU #O =-=-=-=-=-=\n\n");
	// nb = 0;
	ft_printf("ft_printf1=%o|\n", nb);
	   printf("printf1   =%o|\n\n", nb);

	ft_printf("ft_printf2=%+0 18o|\n", nb);
	   printf("printf2   =%+0 18o|\n\n", nb);

	fpf = ft_printf("ft_printf3=%+-0 18o|\n", nb);
		pf = printf("printf3   =%+-0 18o|\n\n", nb);
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n", pf);

	ft_printf("ft_printf4=%.10 18o|\n", nb);
	   printf("printf4   =%.10 18o|\n\n", nb);

	ft_printf("ft_printf5=%04.2o|\n", nb);
	   printf("printf5   =%04.2o|\n\n", nb);

	ft_printf("ft_printf11=%0o|\n", nb);
	   printf("printf11   =%0o|\n\n", nb);

	ft_printf("ft_printf12=%+.0 12o|\n", nb);
	   printf("printf12   =%+.0 12o|\n\n", nb);

	fpf = ft_printf("ft_printf13=%+-.10 18o|\n", nb);
		pf = printf("printf13   =%+-.10 18o|\n\n", nb);
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n", pf);

	ft_printf("ft_printf14=%- .18o|\n", nb);
	   printf("printf14   =%- .18o|\n\n", nb);

	ft_printf("ft_printf15=%-o|\n", nb);
	   printf("printf15   =%-o|\n\n", nb);


	ft_printf("ft_printf0=%.o|\n", 0);
	   printf("printf0   =%.o|\n\n", 0);

	ft_printf("ft_printf1=%#o|\n", nb);
	   printf("printf1   =%#o|\n\n", nb);

	ft_printf("ft_printf2=%#+0 18o|\n", nb);
	   printf("printf2   =%#+0 18o|\n\n", nb);

	fpf = ft_printf("ft_printf3=%#+-0 18o|\n", nb);
		pf = printf("printf3   =%#+-0 18o|\n\n", nb);
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n", pf);

	ft_printf("ft_printf4=%#.10 18o|\n", nb);
	   printf("printf4   =%#.10 18o|\n\n", nb);

	ft_printf("ft_printf5=%#04.2o|\n", nb);
	   printf("printf5   =%#04.2o|\n\n", nb);

	ft_printf("ft_printf11=%#0o|\n", nb);
	   printf("printf11   =%#0o|\n\n", nb);

	ft_printf("ft_printf12=%+#.0 12o|\n", nb);
	   printf("printf12   =%+#.0 12o|\n\n", nb);

	fpf = ft_printf("ft_printf13=%#+-.10 18o|\n", nb);
		pf = printf("printf13   =%#+-.10 18o|\n\n", nb);
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n", pf);

	ft_printf("ft_printf14=%-# .18o|\n", nb);
	   printf("printf14   =%-# .18o|\n\n", nb);

	ft_printf("ft_printf15=%#-o|\n", nb);
	   printf("printf15   =%#-o|\n\n", nb);

	ft_printf("ft_printf16=%#-8.3o|\n", 0);
	   printf("printf16   =%#-8.3o|\n\n", 0);

	ft_printf("ft_printf16=%#o|\n", nb);
	   printf("printf16   =%#o|\n\n", nb);
// 	//
// 	// // IMPOSSIBLE a gerer en cas de nbr negatif en ENTREE
// 	//
// 	//
	printf("=-=-=-=-=-=  TEST DU #U =-=-=-=-=-=\n\n");
// 	// nb = 2107;
	// nb = 0;
	ft_printf("ft_printf1=%u|\n", nb);
	   printf("printf1   =%u|\n\n", nb);

	ft_printf("ft_printf2=%+0 18u|\n", nb);
	   printf("printf2   =%+0 18u|\n\n", nb);

	ft_printf("ft_printf3=%+-018u|\n", nb);
	   printf("printf3   =%+-018u|\n\n", nb);

	fpf = ft_printf("ft_printf4=%18.0u|\n", nb);
		pf = printf("printf4   =%18.0u|\n\n", nb);
	fpf = ft_printf("ft_printf4=%+18.0u|\n", nb);
		pf = printf("printf4   =%+18.0u|\n\n", nb);
	// printf("ft_printf %d\n", fpf + 1);
	// printf("printf    %d\n", pf);

	ft_printf("ft_printf5=%-18.0 u|\n", nb);
	   printf("printf5   =%-18.0 u|\n\n", nb);

	ft_printf("ft_printf6=%18. u|\n", nb);
	   printf("printf6   =%18. u|\n\n", nb);

	ft_printf("ft_printf7=%18.25 u|\n", nb);
	   printf("printf7   =%18.25 u|\n\n", nb);

	ft_printf("ft_printf8=%018.5 u|\n", nb);
	   printf("printf8   =%018.5 u|\n\n", nb);

	ft_printf("ft_printf9=%-018.5 u|\n", nb);
	   printf("printf9   =%-018.5 u|\n\n", nb);

	ft_printf("ft_printf10=%018.25 u|\n", nb);
	   printf("printf10   =%018.25 u|\n\n", nb);

	ft_printf("ft_printf11=%-018.25 u|\n", nb);
	   printf("printf11   =%-018.25 u|\n\n", nb);

	ft_printf("ft_printf12=%18u|\n", nb);
	   printf("printf12   =%18u|\n\n", nb);

	ft_printf("ft_printf13=%018u|\n", nb);
	   printf("printf13   =%018u|\n\n", nb);

	ft_printf("ft_printf14=%018.u|\n", nb);
	   printf("printf14   =%018.u|\n\n", nb);

	ft_printf("ft_printf15=%.u|\n", 0);
	   printf("printf15   =%.u|\n\n", 0);
//
//
//
	printf("=-=-=-=-=-=  TEST DU #X =-=-=-=-=-=\n\n");
// 	nb = 0;
// 	ft_printf("ft_printf1=%#.x|\n", nb);
// 	   printf("printf1   =%#.x|\n\n", nb);
//
	ft_printf("ft_printf2=%+0 18x|\n", nb);
	   printf("printf2   =%+0 18x|\n\n", nb);

	ft_printf("ft_printf3=%+-018x|\n", nb);
	   printf("printf3   =%+-018x|\n\n", nb);

	ft_printf("ft_printf4=%18.0x|\n", nb);
	   printf("printf4   =%18.0x|\n\n", nb);
//
// 	ft_printf("ft_printf5=%#-18.7 x|\n", nb);
// 	   printf("printf5   =%#-18.7 x|\n\n", nb);
//
// 	ft_printf("ft_printf6=%#+0 18x|\n", nb);
// 	   printf("printf6   =%#+0 18x|\n\n", nb);
//
// 	ft_printf("ft_printf7=%#+-018x|\n", nb);
// 	   printf("printf7   =%#+-018x|\n\n", nb);
//
// 	ft_printf("ft_printf8=%#18.0x|\n", nb);
// 	   printf("printf8   =%#18.0x|\n\n", nb);
//
// 	ft_printf("ft_printf9=%#-18.7 x|\n", nb);
// 	   printf("printf9   =%#-18.7 x|\n\n", nb);
//
// 	ft_printf("ft_printf10=%#18.7 x|\n", nb);
// 	   printf("printf10   =%#18.7 x|\n\n", nb);
//
// 	ft_printf("ft_printf11=%#.7 x|\n", nb);
// 	   printf("printf11   =%#.7 x|\n\n", nb);
//
// 	ft_printf("ft_printf12=%# -20.7 x|\n", nb);
// 	   printf("printf12   =%# -20.7 x|\n\n", nb);
//
// 	ft_printf("ft_printf13=%#.7 X|\n", nb);
// 	   printf("printf13   =%#.7 X|\n\n", nb);
//
// 	ft_printf("ft_printf14=%# -20.7 X|\n", nb);
// 	   printf("printf14   =%# -20.7 X|\n\n", nb);
//
// 	ft_printf("ft_printf15=%#X|\n", nb);
//    	   printf("printf15   =%#X|\n\n", nb);
//
//    	ft_printf("ft_printf16=%+0 18X|\n", nb);
//    	   printf("printf16   =%+0 18X|\n\n", nb);
//
//    	ft_printf("ft_printf17=%+-018X|\n", nb);
//    	   printf("printf17   =%+-018X|\n\n", nb);
//
//    	ft_printf("ft_printf18=%18.0X|\n", nb);
//    	   printf("printf18   =%18.0X|\n\n", nb);
//
//    	ft_printf("ft_printf19=%#-18.7 X|\n", nb);
//    	   printf("printf19   =%#-18.7 X|\n\n", nb);
//
//    	ft_printf("ft_printf31=%#x|\n", nb);
//    	   printf("printf31   =%#x|\n\n", nb);
//
//    	fpf = ft_printf("ft_printf32=%06.2X|\n", nb);
//    	   pf = printf("printf32   =%06.2X|\n", nb);
// 	   printf("ft_printf %d\n", fpf);
//    		printf("printf    %d\n\n", pf);
//
//    	fpf = ft_printf("ft_printf33=%20x|\n", nb);
//    	   pf = printf("printf33   =%20x|\n", nb);
// 	   printf("ft_printf %d\n", fpf);
//    		printf("printf    %d\n\n", pf);
//
//    	fpf = ft_printf("ft_printf34=%+20x|\n", nb);
//    	   pf = printf("printf34   =%+20x|\n", nb);
// 	   printf("ft_printf %d\n", fpf);
//    		printf("printf    %d\n\n", pf);
//
//    	fpf = ft_printf("ft_printf35=%#20x|\n", nb);
//    	   pf = printf("printf35   =%#20x|\n", nb);
// 	   printf("ft_printf %d\n", fpf);
//    		printf("printf    %d\n\n", pf);
//
//    	fpf = ft_printf("ft_printf36=%-20x|\n", nb);
//    	   pf = printf("printf36   =%-20x|\n", nb);
// 	   printf("ft_printf %d\n", fpf);
//    		printf("printf    %d\n\n", pf);
//
//    	fpf = ft_printf("ft_printf37=%020x|\n", nb);
//    	   pf = printf("printf37   =%020x|\n", nb);
// 	   printf("ft_printf %d\n", fpf);
//    		printf("printf    %d\n\n", pf);
//
//    	fpf = ft_printf("ft_printf38=%.x|\n", 0);
//    	   pf = printf("printf38   =%.x|\n", 0);
//
//    	fpf = ft_printf("ft_printf39=%8.1x|\n", 0);
//    	   pf = printf("printf39   =%8.1x|\n", 0);
// 	   printf("ft_printf %d\n", fpf);
//    		printf("printf    %d\n\n", pf);
// //
//
//
//
//    	fpf = ft_printf("ft_printf19=%9.8X|\n", 0);
//    	pf = printf("printf19   =%9.8X|\n", 0);
// 	printf("ft_printf %d\n", fpf);
// 	printf("printf    %d\n\n", pf);
//    	fpf = ft_printf("ft_printf19=%9.X|\n", 0);
//    	pf = printf("printf19   =%9.X|\n", 0);
// 	printf("ft_printf %d\n", fpf);
// 	printf("printf    %d\n\n", pf);
//
//
//
	printf("=-=-=-=-=-=  TEST DU #C =-=-=-=-=-=\n\n");
// 	ft_printf("ft_printf1=%c\n", chr);
// 	   printf("printf1   =%c\n\n", chr);
//
// 	ft_printf("ft_printf2=%c %c %c %c\n", chr, 'a', 'r', 47);
// 	   printf("printf2   =%c %c %c %c\n\n", chr, 'a', 'r', 47);
//
// 	ft_printf("ft_printf3=%-c %+c %#c % c\n", chr, 'a', 'r', 47);
// 	   printf("printf3   =%-c %+c %#c % c\n\n", chr, 'a', 'r', 47);
//
// 	ft_printf("ft_printf4=%12c\n", chr);
// 	   printf("printf4   =%12c\n\n", chr);
//
	ft_printf("ft_printf5=%12.4c\n", chr);
	   printf("printf5   =%12.4c\n\n", chr);

	ft_printf("ft_printf6=%4.12c\n", chr);
	   printf("printf6   =%4.12c\n\n", chr);

	ft_printf("ft_printf7=%12.12c\n", chr);
	   printf("printf7   =%12.12c\n\n", chr);

	ft_printf("ft_printf8=%-12c\n", chr);
	   printf("printf8   =%-12c\n\n", chr);

	ft_printf("ft_printf9=%-12.4c\n", chr);
	   printf("printf9   =%-12.4c\n\n", chr);
//
// 	ft_printf("ft_printf10=%-4.12c\n", chr);
// 	   printf("printf10   =%-4.12c\n\n", chr);
//
// 	ft_printf("ft_printf11=%-4.4c\n", chr);
// 	   printf("printf11   =%-4.4c\n\n", chr);
//
// 	ft_printf("ft_printf12=%-1.1c\n", chr);
// 	   printf("printf12   =%-1.1c\n\n", chr);
//
//
//
	printf("=-=-=-=-=-=  TEST DU #S =-=-=-=-=-=\n\n");
// 	// str = "*[]){Lこんにちは、私は単体テストですいいえ最終的なフラッシュ╯°□°)╯︵ ┻━┻ ╯°□°)╯︵ ┻━┻ ︵ ╯(°□° ╯┬─┬ ノ( ゜-゜ノ)(╯°Д°）╯︵ /(.□ . )(/ .□.) ︵╰(゜Д゜)╯︵ /(.□. )ʕノ•ᴥ•ʔノ ︵ ┻━┻ ";
//
// 	// wchar_t emoji = L"🐧🐊🚭🤦🏻‍♂️";
//
// 	// fpf = ft_printf("ft_printf1=%s\n", emoji);
// 	// 	pf = printf("printf1   =%s\n\n", emoji);
// 	// printf("ft_printf %d\n", fpf + 1);
// 	// printf("printf    %d\n\n", pf);
//
	fpf = ft_printf("ft_printf2=%.10s\n", str);
		pf = printf("printf2   =%.10s\n\n", str);

	fpf = ft_printf("ft_printf3=%10s\n", str);
		pf = printf("printf3   =%10s\n\n", str);

	fpf = ft_printf("ft_printf4=%10.20s\n", str);
		pf = printf("printf4   =%10.20s\n\n", str);

	fpf = ft_printf("ft_printf5=%20.10s\n", str);
		pf = printf("printf5   =%20.10s\n\n", str);
//
// 	fpf = ft_printf("ft_printf6=%.10s\n", strvide);
// 		pf = printf("printf6   =%.10s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf7=%10s\n", strvide);
// 		pf = printf("printf7   =%10s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf8=%10.20s\n", strvide);
// 		pf = printf("printf8   =%10.20s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf9=%20.10s\n", strvide);
// 		pf = printf("printf9   =%20.10s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf9=%10.10s\n", strvide);
// 		pf = printf("printf9   =%10.10s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf10=%s\n", strvide);
// 		pf = printf("printf10   =%s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf11=%s\n", strnull);
// 		pf = printf("printf11   =%s\n\n", strnull);
//
// 	fpf = ft_printf("ft_printf12=%-s\n", str);
// 		pf = printf("printf12   =%-s\n\n", str);
//
// 	fpf = ft_printf("ft_printf13=%-10.2s\n", str);
// 		pf = printf("printf13   =%-10.2s\n\n", str);
//
// 	fpf = ft_printf("ft_printf14=%-2.10s\n", str);
// 		pf = printf("printf14   =%-2.10s\n\n", str);
//
// 	fpf = ft_printf("ft_printf15=%-10.10s\n", str);
// 		pf = printf("printf15   =%-10.10s\n\n", str);
//
// 	fpf = ft_printf("ft_printf16=%-s\n", strvide);
// 		pf = printf("printf16   =%-s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf17=%-10.2s\n", strvide);
// 		pf = printf("printf17   =%-10.2s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf18=%-2.10s\n", strvide);
// 		pf = printf("printf18   =%-2.10s\n\n", strvide);
//
// 	fpf = ft_printf("ft_printf19=%-10.10s\n", strvide);
// 		pf = printf("printf19   =%-10.10s\n\n", strvide);
//
	fpf = ft_printf("ft_printf20=%-s\n", strnull);
		pf = printf("printf20   =%-s\n\n", strnull);

	fpf = ft_printf("ft_printf21=%-10.2s\n", strnull);
		pf = printf("printf21   =%-10.2s\n\n", strnull);

	fpf = ft_printf("ft_printf22=%-2.10s\n", strnull);
		pf = printf("printf22   =%-2.10s\n\n", strnull);

	fpf = ft_printf("ft_printf23=%-10.10s\n", strnull);
		pf = printf("printf23   =%-10.10s\n\n", strnull);
//
// 	fpf = ft_printf("ft_printf24=%10.10s\n", strnull);
// 		pf = printf("printf24   =%10.10s\n\n", strnull);
//
// 	fpf = ft_printf("ft_printf25=%4.4s\n", strnull);
// 		pf = printf("printf25   =%4.4s\n\n", strnull);
//
// 	fpf = ft_printf("ft_printf26=%.s|\n", str);
// 		pf = printf("printf26   =%.s|\n\n", str);
//
// 	fpf = ft_printf("ft_printf27=%.0s|\n", str);
// 		pf = printf("printf27   =%.0s|\n\n", str);
//
// 	fpf = ft_printf("ft_printf27=%.c|\n", NULL);
// 		pf = printf("printf27   =%.c|\n\n", NULL);
//
//
//
//
	ft_printf("ft_printf=%c\n", NULL);
	   printf("printf   =%c\n", NULL);

	ft_printf("ft_printf=%5c\n", NULL);
	   printf("printf   =%5c\n", NULL);

	ft_printf("ft_printf99=%5o\n", 42);
	   printf("printf99   =%5o\n", 42);

	ft_printf("ft_printf=%#2o|\n", 42);
	   printf("printf   =%#2o|\n", 42);

	ft_printf("ft_printf=%#-7o\n", 42);
	   printf("printf   =%#-7o\n", 42);

	ft_printf("1moulitest: %5.o %5.0o\n", 0, 0);
	   printf("1moi----->: %5.o %5.0o\n", 0, 0);

	ft_printf("2moulitest: %5.d %5.0d\n", 0, 0);
	   printf("2moi----->: %5.d %5.0d\n", 0, 0);

	ft_printf("3moulitest: %5.o %5.0o\n", 1, 1);
	   printf("3moi----->: %5.o %5.0o\n", 1, 1);

	ft_printf("4moulitest: %5.d %5.0d\n", 1, 1);
	   printf("4moi----->: %5.d %5.0d\n", 1, 1);
// 	unsigned int ptdr = 4147483647;
//
// 	ft_printf("%u\n", ptdr);
// 	   printf("%u\n", ptdr);
//
// 	// // /*------------------------------------------------*/
// 	// // char *jik;
// 	// // if (!(jik = (char *)malloc(sizeof(char) * 24)))
// 	// // 	exit(0);
// 	// //
// 	// // jik = "lolptdrmdrxd\n";
// 	// // ft_putstr("jik = ");
// 	// // ft_putstr(jik);
// 	// // ft_putstr("ptr = ");
// 	// // ft_putnbr(jik);
// 	// // ft_putstr("\n\n");
// 	// //
// 	// // char *jok = "lo44518mdrxd\n";
// 	// // ft_putstr("jok = ");
// 	// // ft_putstr(jok);
// 	// // ft_putstr("ptr = ");
// 	// // ft_putnbr(&jok);
// 	// // ft_putstr("\n\n");
// 	// //
// 	// // printf("\npf jik = %p\npf jok = %p\n", jik, jok);
// 	// //
// 	// // t_s		s;
// 	// // t_flags	f;
// 	// // t_conv	c;
// 	// // int i = 0;
// 	// // unsigned long long joffrey = (unsigned long long)jik;
// 	// //
// 	// // s.str = str;
// 	// // s.f = &f;
// 	// // s.c = &c;
// 	// // s.res = NULL;
// 	// // s.mllc = 1;
// 	// // s.pres = 0;
// 	// // s.champ = 0;
// 	// // ft_dec_to_hex(&s, joffrey);
// 	// // write(1, s.hex, 16);
// 	// // /*------------------------------------------------*/
// 	//
// 	//
	printf("=-=-=-=-=-=  TEST DU #P =-=-=-=-=-=\n\n");
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
	ft_printf("    moi4: %030.18p|\n", malloc);
	   printf("pas moi4: %030.18p|\n", malloc);
	   // printf("test lg4: 1234567890123456789012345678901234567890\n\n");

	ft_printf("    moi4bis: %030p|\n", malloc);
	   printf("pas moi4bis: %030p|\n", malloc);
	//    // printf("test lg4bis: 1234567890123456789012345678901234567890\n\n");
	//
	ft_printf("    moi5: %25p|\n", malloc);
	   printf("pas moi5: %25p|\n\n", malloc);

	ft_printf("    moi6: %-35p|\n", malloc);
	   printf("pas moi6: %-35p|\n", malloc);
	   // printf("test lg6: 1234567890123456789012345678901234567890\n\n");

	ft_printf("    moi7: %025p|\n", malloc);
	   printf("pas moi7: %025p|\n", malloc);
	   // printf("test lg7: 1234567890123456789012345678901234567890\n\n");

	ft_printf("    moi8: %.31p|\n", malloc);
	   printf("pas moi8: %.31p|\n\n", malloc);
	//
	// ft_printf("    moi9: %25.31p|\n", malloc);
	//    printf("pas moi9: %25.31p|\n\n", malloc);
	//
	// ft_printf("    moi10: %-25.31p|\n", malloc);
	//    printf("pas moi10: %-25.31p|\n\n", malloc);
	//
	// ft_printf("    moi11: %025.31p|\n", malloc);
	//    printf("pas moi11: %025.31p|\n\n", malloc);
	//    printf("test lg11: 1234567890123456789012345678901234567890\n");
	//
	// ft_printf("    moi12: %.p|\n", 0);
	//    printf("pas moi12: %.p|\n\n", 0);
	//    // printf("test lg12: 1234567890123456789012345678901234567890\n");
	//
	// ft_printf("    moi13: %30.p|\n", 0);
	//    printf("pas moi13: %30.p|\n\n", 0);
	//
	// ft_printf("    moi14: %030.p|\n", 0);
	//    printf("pas moi14: %030.p|\n\n", 0);
	//
	// ft_printf("    moi15: %-30.p|\n", 0);
	//    printf("pas moi15: %-30.p|\n\n", 0);
	//
	// ft_printf("    moi16: %-030.p|\n", 0);
	//    printf("pas moi16: %-030.p|\n\n", 0);
	//
	// ft_printf("    moi17: %-.p|\n", 0);
	//    printf("pas moi17: %-.p|\n\n", 0);
//
//
	printf("=-=-=-=-=-=  TEST DU #F =-=-=-=-=-=\n\n");
// 	//
// 	// long double ldb = 45999123456789012.12345678901234567890L;
// 	// 	  double db =
// 	// 	245245245999123456789012.12345678901234567890L;
// 	// long double ldb = -372.906256066978456;
// 	// double db = -372.9996999999999679;
	// long double ldb = -900.906256066978456;
	// double db = -900.906256066978456;
	long double ldb = 999.9999999L;
	double db = 999.9999999;
// 	// long double ldb = LDBL_MAX;
// 	// 	  double db = LDBL_MAX;
// 	//
// 	// printf("ldb max = %Lf|\n", LDBL_MAX);
// 	// printf(" db = %.10f|\n", db);
//
//
// 	ft_printf("ft_printfL=%10.Lf|\n", ldb);
// 	   printf("   printfL=%10.Lf|\n\n", ldb);
//
	ft_printf("ft_printfL=%10+.Lf|\n", ldb);
	   printf("   printfL=%10+.Lf|\n\n", ldb);

	ft_printf("ft_printfL=%+.Lf|\n", ldb);
	   printf("   printfL=%+.Lf|\n\n", ldb);

	ft_printf("ft_printfL=%.Lf|\n", ldb);
	   printf("   printfL=%.Lf|\n\n", ldb);

	ft_printf("ft_printfL=%10Lf|\n", ldb);
	   printf("   printfL=%10Lf|\n\n", ldb);

	ft_printf("ft_printfL=%10+Lf|\n", ldb);
	   printf("   printfL=%10+Lf|\n\n", ldb);

	ft_printf("ft_printfL=%+Lf|\n", ldb);
	   printf("   printfL=%+Lf|\n\n", ldb);

	ft_printf("ft_printfL=%Lf|\n", ldb);
	   printf("   printfL=%Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %040.10Lf|\n", ldb);
// 	   printf("   printfL= %040.10Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %40.10Lf|\n", ldb);
// 	   printf("   printfL= %40.10Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= % +40.10Lf|\n", ldb);
// 	   printf("   printfL= % +40.10Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= % .10Lf|\n", ldb);
// 	   printf("   printfL= % .10Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %20.10Lf|\n", ldb);
// 	   printf("   printfL= %20.10Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %.0Lf|\n", ldb);
// 	   printf("   printfL= %.0Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL1= %14Lf|\n", ldb);
// 	   printf("   printfL1= %14Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL2= %20.6Lf|\n", ldb);
// 	   printf("   printfL2= %20.6Lf|\n\n", ldb);
//
// 	printf("Test du '-' :\n\n");
//
// 	ft_printf("ft_printfL= %- .10Lf|\n", ldb);
// 	   printf("   printfL= %- .10Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %-20.5Lf|\n", ldb);
// 	   printf("   printfL= %-20.5Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %-.0Lf|\n", ldb);
// 	   printf("   printfL= %-.0Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %-20Lf|\n", ldb);
// 	   printf("   printfL= %-20Lf|\n\n", ldb);
//
// 	ft_printf("ft_printfL= %-040.13Lf|\n", ldb);
//    	   printf("   printfL= %-040.13Lf|\n\n", ldb);
//
//    	ft_printf("ft_printfL= %-40.10Lf|\n", ldb);
//    	   printf("   printfL= %-40.10Lf|\n\n", ldb);
//
//    	ft_printf("ft_printfL= %- +40.8Lf|\n", ldb);
//    	   printf("   printfL= %- +40.8Lf|\n\n", ldb);
//
// 	printf("\n---   DOUBLE   ---\n\n");
//
// 	ft_printf("ft_printf= %040.10f|\n", db);
// 	pf = printf("   printf= %040.10f|\n\n", db);
//
// 	ft_printf("ft_printf= %40.10f|\n", db);
// 	   printf("   printf= %40.10f|\n\n", db);
//
// 	ft_printf("ft_printf= % +40.10f|\n", db);
// 	   printf("   printf= % +40.10f|\n\n", db);
//
// 	ft_printf("ft_printf= % .10f|\n", db);
// 	   printf("   printf= % .10f|\n\n", db);
//
// 	ft_printf("ft_printf= %20.10f|\n", db);
// 	   printf("   printf= %20.10f|\n\n", db);
//
// 	ft_printf("ft_printf= %.0f|\n", db);
// 	   printf("   printf= %.0f|\n\n", db);
//
// 	ft_printf("ft_printf= %20f|\n", db);
// 	   printf("   printf= %20f|\n\n", db);
//
// 	// printf("Test du '-' :\n\n");
//
// 	ft_printf("ft_printf= %- .10f|\n", db);
// 	   printf("   printf= %- .10f|\n\n", db);
//
// 	ft_printf("ft_printf= %-20.10f|\n", db);
// 	   printf("   printf= %-20.10f|\n\n", db);
//
// 	ft_printf("ft_printf= %-.0f|\n", db);
// 	   printf("   printf= %-.0f|\n\n", db);
//
// 	ft_printf("ft_printf= %-20f|\n", db);
// 	   printf("   printf= %-20f|\n\n", db);
//
// 	ft_printf("ft_printf= %-040.10f|\n", db);
//    	   printf("   printf= %-040.10f|\n\n", db);
//
//    	ft_printf("ft_printf= %-40.10f|\n", db);
//    	   printf("   printf= %-40.10f|\n\n", db);
//
//    	ft_printf("ft_printf= %- +40.10f|\n", db);
//    	   printf("   printf= %- +40.10f|\n\n", db);
//
//    	ft_printf("ft_printfL= %#-17.0Lf|\n", ldb);
//    	   printf("   printfL= %#-17.0Lf|\n\n", ldb);
//
//    	ft_printf("ft_printfL= %#17.0Lf|\n", ldb);
//    	   printf("   printfL= %#17.0Lf|\n\n", ldb);
//
//    	ft_printf("ft_printfL= %0#17.0Lf|\n", ldb);
//    	   printf("   printfL= %0#17.0Lf|\n\n", ldb);
//
//    	ft_printf("---ft_printf= %#-17.0f|\n", db);
//    	   printf("---   printf= %#-17.0f|\n\n", db);
//
//    	ft_printf("---ft_printf= %-17.0f|\n", db);
//    	   printf("---   printf= %-17.0f|\n\n", db);
//
//    	ft_printf("---ft_printfL= %#-17.0Lf|\n", ldb);
//    	   printf("---   printfL= %#-17.0Lf|\n\n", ldb);
//
//    	ft_printf("ft_printf= %#17.0f|\n", db);
//    	   printf("   printf= %#17.0f|\n\n", db);
//
//    	ft_printf("ft_printf= %0#17.0f|\n", db);
//    	   printf("   printf= %0#17.0f|\n\n", db);
//
//    	ft_printf("ft_printfL= %0#27.16Lf|\n", ldb);
//    	   printf("   printfL= %0#27.16Lf|\n\n", ldb);
//
//    	ft_printf("ft_printf= %0#27.16f|\n", db);
//    	   printf("   printf= %0#27.16f|\n\n", db);
//
//    	ft_printf("ft_printfL= %-+9.f|\n", db);
//    	   printf("   printfL= %-+9.f|\n\n", db);
//
//    	ft_printf("ft_printf= %9.0f|\n", db);
//    	   printf("   printf= %9.0f|\n\n", db);
//
//    	ft_printf("ft_printf= %.f|\n", db);
//    	   printf("   printf= %.f|\n\n", db);
//
//
//
//
//
//
//
//
// 	printf("=-=-=-=-=    TEST RANDOM    =-=-=-=-=\n\n");
//
// 	ft_printf("ft_printf32=%llx|\n", -9223372036854775808);
// 	   printf("printf32   =%llx|\n\n", -9223372036854775808);
//
	fpf = ft_printf("mdretifhdbjvbdbdjc %%%%% hdbd cd  jddbchcnn cjbhwad wd kanbdwhba%llx et %llX egalement %llx fini %lx %llx et %llX egalement %llx fini %lx|\n", 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807, 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807);
	pf = printf("mdretifhdbjvbdbdjc %%%%% hdbd cd  jddbchcnn cjbhwad wd kanbdwhba%llx et %llX egalement %llx fini %lx %llx et %llX egalement %llx fini %lx|\n", 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807, 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807);
	printf("ft_printf %d\n", fpf);
	printf("printf    %d\n\n", pf);

	fpf = ft_printf("|%d|%c|%s|%u|%o|%i|%x\n", 97664812, 'a', "lolilol", 0 , 7 , 12 , 57);
	pf = printf("|%d|%c|%s|%u|%o|%i|%x\n", 97664812, 'a', "lolilol", 0 , 7 , 12 , 57);


	// fpf = ft_printf("%d|\n", 97664812);
	// pf = printf("%d|\n", 97664812);
	// printf("ft_printf %d\n", fpf);
	// printf("printf    %d\n\n", pf);
//
// 	ft_printf("123456789 abcdefghi 987654321 ihgfedcba motlettre z1x2w3v4u fromAgere\n");
// 	printf("123456789 abcdefghi 987654321 ihgfedcba motlettre z1x2w3v4u fromAgere\n\n");
//
// 	ft_printf("allo %hho|\n", (char)-50);
// 	printf("allo %hho|\n", (char)-50);
//
// 	ft_printf("allo %hho|\n", (char)-50);
// 	printf("allo %hho|\n", (char)-50);
//
//
//
//
// 	fpf = ft_printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", -1784266, 82, "Le soleil brille dans le ciel bleu normand pendant que les chiens courent.", 97648.0648751, 2174847364715 , -2347);
// 	pf = printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", -1784266, 82, "Le soleil brille dans le ciel bleu normand pendant que les chiens courent.", 97648.0648751, 2174847364715 , -2347);
//
// 	printf("ft_printf %d\n", fpf);
//   	printf("printf    %d\n\n", pf);
//
// 	fpf = ft_printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", 0, 0, NULL, 0000.000, 0, 0);
// 	pf = printf("int %d | char %c | str %s | float %f | long %lld | une suite de mot completement random pour le plaisir | short = %hd|\n", 0, 0, NULL, 0000.000, 0, 0);
//
//   	ft_printf("%%%%%%%%%%%%%\n");
//   	printf("%%%%%%%%%%%%%\n");
//
//   	ft_printf("%\n");
//   	printf("%\n");
//
//
	int		i;
		int		x;
		int		y;
		char	c;
		char 	d;

		i = 1;

		c = '!';
		d = 'A';
//
// 		printf("===============  \033[33mTEST %d |\033[0m  ===============\n\n", i++);
// 	    printf("test: \033[36m |%%c|%%1c|%%7c|%%-1c|%%-5c\033[0m arg: \033[36m c = '!' \033[0m \n");
// 		x =     ft_printf("my  printf: |%c|%1c|%7c|%-1c|%-5c|\n", c, c, c, c, c);
// 	    y =        printf("the printf: |%c|%1c|%7c|%-1c|%-5c|\n", c, c, c, c, c);
// 		printf("my  printf return = %d\n", x);
// 		printf("the printf return = %d\n", y);
// 		y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 		ft_putchar('\n');
//
// 		printf("===============  \033[33mTEST %d |\033[0m  ===============\n\n", i++);
// 	    printf("test: \033[36m |%%c|%%12c|%%-1c|%%1c|%%5c|%%-5c\033[0m arg: \033[36m c = 'A' \033[0m \n");
// 		x =     ft_printf("my  printf: |%c|%12c|%-1c|%1c|%5c|%-5c\n", d, d, d, d, d, d);
// 	    y =        printf("the printf: |%c|%12c|%-1c|%1c|%5c|%-5c\n", d, d, d, d, d, d);
// 		printf("my  printf return = %d\n", x);
// 		printf("the printf return = %d\n", y);
// 		y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 		ft_putchar('\n');
//
// 		printf("===============  \033[33mTEST %d |\033[0m  ===============\n\n", i++);
// 	    printf("test: \033[36m |%% c|%%c|\033[0m arg: \033[36m 0, 0 \033[0m \n");
// 		x =     ft_printf("my  printf: |%c|% c|\n", 0, 0);
// 	    y =        printf("the printf: |%c|% c|\n", 0, 0);
// 		printf("my  printf return = %d\n", x);
// 		printf("the printf return = %d\n", y);
// 		y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 		ft_putchar('\n');
//
// 		printf("===============  \033[33mTEST %d |\033[0m  ===============\n\n", i++);
// 	    printf("test: \033[36m |%%|%%%%%%d|\033[0m arg: \033[36m -120, -120 \033[0m \n");
// 		x =     ft_printf("my  printf: |%%|%%%%%d|\n", -120, -120);
// 	    y =        printf("the printf: |%%|%%%%%d|\n", -120, -120);
// 		printf("my  printf return = %d\n", x);
// 		printf("the printf return = %d\n", y);
// 		y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 		ft_putchar('\n');
// 	i = 1;
//
// // int main() {
//
// //   printf("%09d\n", 42);
// //   printf("%09d\n", -42);
// //   printf("%09.1d\n", 42);
// //   printf("%09.1d\n", -42);
// //    printf("%09.2d\n", 42);
// //   printf("%09.3d\n", -42);
// //      printf("%09.5d\n", 42);
// //   printf("%09.5d\n", -42);
// //   printf("%-09d\n", 42);
// //   printf("%-09d\n", -42);
// //     printf("\n flag 0 et + \n%+09d\n", 42);
// //   printf("%+09d\n", -42);
// //   printf("%+09.1d\n", 42);
// //   printf("%+09.1d\n", -42);
// //    printf("%+09.2d\n", 42);
// //   printf("%+09.3d\n", -42);
// //      printf("%+09.5d\n", 42);
// //   printf("%+09.5d\n", -42);
// //   printf("%+-09d\n", 42);
// //   printf("%+-09d\n", -42);
// //     printf("\nsans flag :\n%9.1d\n", 42);
// //   printf("%9.1d\n", -42);
// //    printf("%9.2d\n", 42);
// //   printf("%9.3d\n", -42);
// //      printf("%9.5d\n", 42);
// //   printf("%9.5d\n", -42);
// //   printf("%-9d\n", 42);
// //   printf("%-9d\n", -42);
// //   return 0;
// // }
//
//
// ////////////////////// PART I : TEST AVEC TOUS LES FLAGS && WIDTH UNIQUEMENT ///////////////////////////////
//
//
//     printf("===============  \033[33mTEST %d | Width \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%d|%%d||%%5d|%%5d||%%1d|%%1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%d|%d|%5d|%5d|%1d|%1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%d|%d|%5d|%5d|%1d|%1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% d|%% d||%% 5d|%% 5d||%% 1d|%% 1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% d|% d|% 5d|% 5d|% 1d|% 1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% d|% d|% 5d|% 5d|% 1d|% 1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%0d|%%0d||%%05d|%%05d||%%01d|%%01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%0d|%0d|%05d|%05d|%01d|%01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%0d|%0d|%05d|%05d|%01d|%01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d|%%+d||%%+5d|%%+5d||%%+1d|%%+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+d|%+d|%+5d|%+5d|%+1d|%+1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+d|%+d|%+5d|%+5d|%+1d|%+1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0d|%% 0d||%% 05d|%% 05d||%% 01d|%% 01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% 0d|% 0d|% 05d|% 05d|% 01d|% 01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% 0d|% 0d|% 05d|% 05d|% 01d|% 01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	//Flag + is ignored when Flag ' ' is present
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +d|%% +d||%% +5d|%% +5d||%% +1d|%% +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +d|% +d|% +5d|% +5d|% +1d|% 01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% +d|% +d|% +5d|% +5d|% +1d|% 01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%0+d|%%0+d||%%0+5d|%%0+5d||%%0+1d|%%0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+0d|%+0d|%+05d|%+05d|%+01d|%+01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+0d|%+0d|%+05d|%+05d|%+01d|%+01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 && + && ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0+d|%% 0+d||%% 0+5d|%% 0+5d||%% 0+1d|%% 0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +0d|% +0d|% +05d|% +05d|% +01d|% +01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% +0d|% +0d|% +05d|% +05d|% +01d|% +01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// ///////////////////////// FLAG - //////////////////////////
//
//     printf("===============  \033[33mTEST %d | Width | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-d|%%-d||%%-5d|%%-5d||%%-1d|%%-1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-d|%-d|%-5d|%-5d|%-1d|%-1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-d|%-d|%-5d|%-5d|%-1d|%-1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% -d|%% -d||%% -5d|%% -5d||%% -1d|%% -1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% -d|% -d|% -5d|% -5d|% -1d|% -1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% -d|% -d|% -5d|% -5d|% -1d|% -1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0d|%%-0d||%%-05d|%%-05d||%%-01d|%%-01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d|%%-+d||%%-+5d|%%-+5d||%%-+1d|%%-+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' && 0 | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 0d|%%- 0d||%%- 05d|%%- 05d||%%- 01d|%%- 01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	//Flag + is ignored when Flag ' ' is present
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- +d|%%- +d||%%- +5d|%%- +5d||%%- +1d|%%- +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0+d|%%-0+d||%%-0+5d|%%-0+5d||%%-0+1d|%%-0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 && + && ' ' | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 0+d|%%- 0+d||%%- 0+5d|%%- 0+5d||%%- 0+1d|%%- 0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//
// //////////////////////// PART II : TEST AVEC TOUS LES FLAGS && PRECISION UNIQUEMENT ///////////////////////////////
//
//
//     printf("===============  \033[33mTEST %d | Precision \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%.d|%%.d||%%.5d|%%.5d||%%.1d|%%.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%.d|%.d|%.5d|%.5d|%.1d|%.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%.d|%.d|%.5d|%.5d|%.1d|%.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% .d|%% .d||%% .5d|%% .5d||%% .1d|%% .1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% .d|% .d|% .5d|% .5d|% .1d|% .1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% .d|% .d|% .5d|% .5d|% .1d|% .1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%0.d|%%0.d||%%0.5d|%%0.5d||%%0.1d|%%0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%0.d|%0.d|%0.5d|%0.5d|%0.1d|%0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%0.d|%0.d|%0.5d|%0.5d|%0.1d|%0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+.d|%%+.d||%%+.5d|%%+.5d||%%+.1d|%%+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+.d|%+.d|%+.5d|%+.5d|%+.1d|%+.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+.d|%+.d|%+.5d|%+.5d|%+.1d|%+.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0.d|%% 0.d||%% 0.5d|%% 0.5d||%% 0.1d|%% 0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% 0.d|% 0.d|% 0.5d|% 0.5d|% 0.1d|% 0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% 0.d|% 0.d|% 0.5d|% 0.5d|% 0.1d|% 0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	//Flag + is ignored when Flag ' ' is present
// 	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +.d|%% +.d||%% +5.d|%% +5.d||%% +1.d|%%- +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +.d|% +.d|% +5.d|% +5.d|% +1.d|% +1.d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% +.d|% +.d|% +5.d|% +5.d|% +1.d|% +1.d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%0+.d|%%0+.d||%%0+.5d|%%0+.5d||%%0+.1d|%%0+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+0.d|%+0.d|%+0.5d|%+0.5d|%+0.1d|%+0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+0.d|%+0.d|%+0.5d|%+0.5d|%+0.1d|%+0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + && ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0+.d|%% 0+.d||%% 0+.5d|%% 0+.5d||%% 0+.1d|%% 0+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +0.d|% +0.d|% +0.5d|% +0.5d|% +0.1d|% +0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% +0.d|% +0.d|% +0.5d|% +0.5d|% +0.1d|% +0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// // ///////////////////////// FLAG - //////////////////////////
//
//     printf("===============  \033[33mTEST %d | Precision | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-.d|%%-.d||%%-.5d|%%-.5d||%%-.1d|%%-.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-.d|%-.d|%-.5d|%-.5d|%-.1d|%-.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-.d|%-.d|%-.5d|%-.5d|%-.1d|%-.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag ' ' | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% -.d|%% -.d||%% -.5d|%% -.5d||%% -.1d|%% -.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% -.d|% -.d|% -.5d|% -.5d|% -.1d|% -.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% -.d|% -.d|% -.5d|% -.5d|% -.1d|% -.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0.d|%%-0.d||%%-0.5d|%%-0.5d||%%-0.1d|%%-0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-0.d|%-0.d|%-0.5d|%-0.5d|%-0.1d|%-0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-0.d|%-0.d|%-0.5d|%-0.5d|%-0.1d|%-0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+.d|%%-+.d||%%-+.5d|%%-+.5d||%%-+.1d|%%-+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+-.d|%-+.d|%-+.5d|%-+.5d|%-+.1d|%-+.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+-.d|%-+.d|%-+.5d|%-+.5d|%-+.1d|%-+.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && 0 | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 0.d|%%- 0.d||%%- 0.5d|%%- 0.5d||%%- 0.1d|%%- 0.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- 0.d|%- 0.d|%- 0.5d|%- 0.5d|%- 0.1d|%- 0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- 0.d|%- 0.d|%- 0.5d|%- 0.5d|%- 0.1d|%- 0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	//Flag + is ignored when Flag ' ' is present
// 	printf("===============  \033[33mTEST %d | Precision | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- +d|%%- +.d||%%- +.5d|%%- +.5d||%%- +.1d|%%- +.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- +.d|%- +.d|%- +.5d|%- +.5d|%- +.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- +.d|%- +.d|%- +.5d|%- +.5d|%- +.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0+.d|%%-0+.d||%%-0+.5d|%%-0+.5d||%%-0+.1d|%%-0+.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+0.d|%-+0.d|%-+0.5d|%-+0.5d|%-+0.1d|%-+0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+0.d|%-+0.d|%-+0.5d|%-+0.5d|%-+0.1d|%-+0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision | Flag 0 && + && ' ' | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 0+.d|%%- 0+.d||%%- 0+.5d|%%- 0+.5d||%%- 0+1.d|%%- 0+1.d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- +0.d|%- +0.d|%- +0.5d|%- +0.5d|%- +0.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- +0.d|%- +0.d|%- +0.5d|%- +0.5d|%- +0.1d|%- +0.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//
// //////////////////////// PART III : TEST AVEC TOUS LES FLAGS && PRECISION > WIDTH ///////////////////////////////
//
//  printf("===============  \033[33mTEST %d | Precision >= Width \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%2.2d|%%2.2d||%%5.6d|%%5.6d||%%1.7d|%%1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%2.2d|%2.2d||%5.6d|%5.6d||%1.7d|%1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%2.2d|%2.2d||%5.6d|%5.6d||%1.7d|%1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 2.2d|%% 2.2d||%% 5.6d|%% 5.6d||%% 1.7d|%% 1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% 2.2d|% 2.2d||% 5.6d|% 5.6d||% 1.7d|% 1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% 2.2d|% 2.2d||% 5.6d|% 5.6d||% 1.7d|% 1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%02.2d|%%02.2d||%%05.6d|%%05.6d||%%01.7d|%%01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%02.2d|%02.2d||%05.6d|%05.6d||%01.7d|%01.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%02.2d|%02.2d||%05.6d|%05.6d||%01.7d|%01.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+2.2d|%%+2.2d||%%+5.6d|%%+5.6d||%%+1.7d|%%+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+2.2d|%+2.2d||%+5.6d|%+5.6d||%+1.7d|%+1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+2.2d|%+2.2d||%+5.6d|%+5.6d||%+1.7d|%+1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 02.2d|%% 02.2d||%% 05.6d|%% 05.6d||%% 01.7d|%% 01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% 02.2d|% 02.2d||% 05.6d|% 05.6d||% 01.7d|% 01.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% 02.2d|% 02.2d||% 05.6d|% 05.6d||% 01.7d|% 01.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  	//Flag + is ignored when Flag ' ' is present
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 2.2d|%% +2.2d||%% +5.6d|%% +5.6d||%% +1.7d|%% +1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +2.2d|% +2.2d||% +5.6d|% +5.6d||% +1.7d|% +1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% +2.2d|% +2.2d||% +5.6d|% +5.6d||% +1.7d|% +1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%0+2.2d|%%0+2.2d||%%0+5.6d|%%0+5.6d||%%0+1.7d|%%0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%0+2.2d|%0+2.2d||%0+5.6d|%0+5.6d||%0+1.7d|%0+1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%0+2.2d|%0+2.2d||%0+5.6d|%0+5.6d||%0+1.7d|%0+1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + && ' '\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0+2.2d|%% 0+2.2d||%% 0+5.6d|%% 0+5.6d||%% 0+1.7d|%% 0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% 0+2.2d|% 0+2.2d||% 0+5.6d|% 0+5.6d||% 0+1.7d|% 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% 0+2.2d|% 0+2.2d||% 0+5.6d|% 0+5.6d||% 0+1.7d|% 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//  ///////////////////////// FLAG - //////////////////////////
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-2.2d|%%-2.2d||%%-5.6d|%%-5.6d||%%-1.7d|%%-1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-2.2d|%-2.2d||%-5.6d|%-5.6d||%-1.7d|%-1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-2.2d|%-2.2d||%-5.6d|%-5.6d||%-1.7d|%-1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 2.2d|%%- 2.2d||%%- 5.6d|%%- 5.6d||%%- 1.7d|%%- 1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- 2.2d|%- 2.2d||%- 5.6d|%- 5.6d||%- 1.7d|%- 1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- 2.2d|%- 2.2d||%- 5.6d|%- 5.6d||%- 1.7d|%- 1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-02.2d|%%-02.2d||%%-05.6d|%%-05.6d||%%-01.7d|%%-01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-02.2d|%-02.2d||%-05.6d|%-05.6d||%-01.7d|%-01.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-02.2d|%-02.2d||%-05.6d|%-05.6d||%-01.7d|%-01.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag +  | Flag -\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-+2.2d|%%-+2.2d||%%-+5.6d|%%-+5.6d||%%-+1.7d|%%-+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+2.2d|%-+2.2d||%-+5.6d|%-+5.6d||%-+1.7d|%-+1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+2.2d|%-+2.2d||%-+5.6d|%-+5.6d||%-+1.7d|%-+1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && 0  | Flag -\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 02.2d|%%- 02.2d||%%- 05.6d|%%- 05.6d||%%- 01.7d|%%- 01.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- 02.2d|%- 02.2d||%- 05.6d|%- 05.6d||%- 01.7d|%- 01.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- 02.2d|%- 02.2d||%- 05.6d|%- 05.6d||%- 01.7d|%- 01.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  	//Flag + is ignored when Flag ' ' is present
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 2.2d|%%- +2.2d||%%- +5.6d|%%- +5.6d||%%- +1.7d|%%- +1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- +2.2d|%- +2.2d||%- +5.6d|%- +5.6d||%- +1.7d|%- +1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- +2.2d|%- +2.2d||%- +5.6d|%- +5.6d||%- +1.7d|%- +1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0+2.2d|%%-0+2.2d||%%-0+5.6d|%%-0+5.6d||%%-0+1.7d|%%-0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-0+2.2d|%-0+2.2d||%-0+5.6d|%-0+5.6d||%-0+1.7d|%-0+1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-0+2.2d|%-0+2.2d||%-0+5.6d|%-0+5.6d||%-0+1.7d|%-0+1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Precision >= Width | Flag 0 && + && ' ' | Flag -\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 0+2.2d|%%- 0+2.2d||%%- 0+5.6d|%%- 0+5.6d||%%- 0+1.7d|%%- 0+1.7d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- 0+2.2d|%- 0+2.2d||%- 0+5.6d|%- 0+5.6d||%- 0+1.7d|%- 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- 0+2.2d|%- 0+2.2d||%- 0+5.6d|%- 0+5.6d||%- 0+1.7d|%- 0+1.7d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// //////////////////////// PART IV : TEST AVEC TOUS LES FLAGS && PRECISION < WIDTH ///////////////////////////////
//
//  printf("===============  \033[33mTEST %d | Width >= Precision \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%2.d|%%2.d||%%6.5d|%%6.5d||%%7.1d|%%7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%2.d|%2.d||%6.5d|%6.5d||%7.1d|%7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%2.d|%2.d||%6.5d|%6.5d||%7.1d|%7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 2.d|%% 2.d||%% 6.5d|%% 6.5d||%% 7.1d|%%7 .1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% 2.d|% 2.d||% 6.5d|% 6.5d||% 7.1d|% 7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |% 2.d|% 2.d||% 6.5d|% 6.5d||% 7.1d|% 7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%02.d|%%02.d||%%06.5d|%%06.5d||%%07.1d|%%07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%02.d|%02.d||%06.5d|%06.5d||%07.1d|%07.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%02.d|%02.d||%06.5d|%06.5d||%07.1d|%07.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+2.d|%%+2.d||%%+6.5d|%%+6.5d||%%+7.1d|%%+7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+2.d|%+2.d||%+6.5d|%+6.5d||%+7.1d|%+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+2.d|%+2.d||%+6.5d|%+6.5d||%+7.1d|%+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//   	//Flag + is ignored when Flag ' ' is present
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+02.d|%% +2.d||%% +6.5d|%%+ 6.5d||%%+ 7.1d|%%+ 7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+ 2.d|%+ 2.d||%+ 6.5d|%+ 6.5d||%+ 7.1d|% +7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+ 2.d|%+ 2.d||%+ 6.5d|%+ 6.5d||%+ 7.1d|% +7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+02.d|%+02.d||%+06.5d|%+06.5d||%+07.1d|%0+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +02.d|%% 0+2.d||%% 0+6.5d|%% +06.5d||%%+ 07.1d|%% +07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+ 02.d|% +02.d||% +06.5d|%+ 06.5d||%+ 07.1d|% 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+ 02.d|% +02.d||% +06.5d|%+ 06.5d||%+ 07.1d|% 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  ///////////////////////// FLAG - //////////////////////////
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag -  \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-2.d|%%-2.d||%%-6.5d|%%-6.5d||%%-7.1d|%%-7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-2.d|%-2.d||%-6.5d|%-6.5d||%-7.1d|%-7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-2.d|%-2.d||%-6.5d|%-6.5d||%-7.1d|%-7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-% 2.d|%% 2.d||%% 6.5d|%% 6.5d||%% 7.1d|%%7 .1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- 2.d|%- 2.d||%- 6.5d|%- 6.5d||%- 7.1d|%- 7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- 2.d|%- 2.d||%- 6.5d|%- 6.5d||%- 7.1d|%- 7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%02.d|%%02.d||%%06.5d|%%06.5d||%%07.1d|%%07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-02.d|%-02.d||%-06.5d|%-06.5d||%-07.1d|%-07.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-02.d|%-02.d||%-06.5d|%-06.5d||%-07.1d|%-07.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%-%+2.d|%%+2.d||%%+6.5d|%%+6.5d||%%+7.1d|%%+7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+2.d|%-+2.d||%-+6.5d|%-+6.5d||%-+7.1d|%-+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+2.d|%-+2.d||%-+6.5d|%-+6.5d||%-+7.1d|%-+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//   	//Flag + is ignored when Flag ' ' is present
//
//  printf("===============  \033[33mTEST %d | Width >= Precision | Flag ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+02.d|%% +2.d||%% +6.5d|%%+ 6.5d||%%+ 7.1d|%%+ 7.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+ 2.d|%-+ 2.d||%-+ 6.5d|%-+ 6.5d||%-+ 7.1d|%- +7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+ 2.d|%-+ 2.d||%-+ 6.5d|%-+ 6.5d||%-+ 7.1d|%- +7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+02.d|%%0+2.d||%%0+6.5d|%%+06.5d||%%+07.1d|%%+07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+02.d|%-+02.d||%-+06.5d|%-+06.5d||%-+07.1d|%-0+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 && ' ' && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- +02.d|%%- 0+2.d||%%- 0+6.5d|%%- +06.5d||%%-+ 07.1d|%%- +07.1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+ 02.d|%- +02.d||%- +06.5d|%-+ 06.5d||%-+ 07.1d|%- 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+ 02.d|%- +02.d||%- +06.5d|%-+ 06.5d||%-+ 07.1d|%- 0+7.1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// ////////////////////////PART V : ZERO
//
//     printf("===============  \033[33mTEST %d | 0 && Width \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%d|%%d|%%0d|%%5d|%%5d||%%1d|%%1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%d|%0d|%5d|%5d|%1d|%1d|\n", 0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: |%d|%0d|%5d|%5d|%1d|%1d|\n", 0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	 printf("===============  \033[33mTEST %d | 0 && Precision \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%.d|%%.0d||%%.1d|%%.2d||%%.3d|%%.4d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%.d|%.0d||%.1d|%.2d||%.3d|%.4d|\n", 0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: |%.d|%.0d||%.1d|%.2d||%.3d|%.4d|\n", 0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag ' ' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% d|%% 1d||%% 2d|%% 3d||%% .1d|%% .2d|%% .3d||%% 0.0d|%% 0.d||%% 1.1d|%% 2.2d||%% 2.1d|%% 1.2d|%% 2.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% d|% 1d|% 2d|% 3d|% .1d|% .2d|% .3d|% 0.0d|% 0.d|% 1.1d|% 2.2d|% 2.1d|% 1.2d|% 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: |% d|% 1d|% 2d|% 3d|% .1d|% .2d|% .3d|% 0.0d|% 0.d|% 1.1d|% 2.2d|% 2.1d|% 1.2d|% 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%0d|%%01d||%%02d|%%03d||%%0.1d|%%0.2d|%%0.3d||%%00.0d|%%00.d||%%01.1d|%%02.2d||%%02.1d|%%01.2d|%%02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d|%%+1d||%%+2d|%%+3d||%%+.1d|%%+.2d|%%+.3d||%%+0.0d|%%+0.d||%%+1.1d|%%+2.2d||%%+2.1d|%%+1.2d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//   	//Flag + is ignored when Flag ' ' is present
//
//   printf("===============  \033[33mTEST %d | 0 | Flag ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +d|%% +1d||%% +2d|%% +3d||%% +.1d|%% +.2d|%% +.3d||%% +0.0d|%% +0.d||%% +1.1d|%% +2.2d||%% +2.1d|%% +1.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 && '+' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// ////////////////////////////// FLAG - && RES = 0
//
//     printf("===============  \033[33mTEST %d | 0 && Width | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%d|%%d|%%0d|%%5d|%%5d||%%1d|%%1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-d|%-0d|%-5d|%-5d|%-1d|%-1d|\n", 0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: |%-d|%-0d|%-5d|%-5d|%-1d|%-1d|\n", 0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	 printf("===============  \033[33mTEST %d | 0 && Precision | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%.d|%%.0d||%%.1d|%%.2d||%%.3d|%%.4d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-.d|%-.0d||%-.1d|%-.2d||%-.3d|%-.4d|\n", 0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: |%-.d|%-.0d||%-.1d|%-.2d||%-.3d|%-.4d|\n", 0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag ' ' Flag -\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% d|%% 1d||%% 2d|%% 3d||%% .1d|%% .2d|%% .3d||%% 0.0d|%% 0.d||%% 1.1d|%% 2.2d||%% 2.1d|%% 1.2d|%% 2.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- d|%- 1d|%- 2d|%- 3d|%- .1d|%- .2d|%- .3d|%- 0.0d|%- 0.d|%- 1.1d|%- 2.2d|%- 2.1d|%- 1.2d|%- 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: |%- d|%- 1d|%- 2d|%- 3d|%- .1d|%- .2d|%- .3d|%- 0.0d|%- 0.d|%- 1.1d|%- 2.2d|%- 2.1d|%- 1.2d|%- 2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%0d|%%01d||%%02d|%%03d||%%0.1d|%%0.2d|%%0.3d||%%00.0d|%%00.d||%%01.1d|%%02.2d||%%02.1d|%%01.2d|%%02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: %0d|%01d|%02d|%03d|%0.1d|%0.2d|%0.3d|%00.0d|%00.d|%01.1d|%02.2d|%02.1d|%01.2d|%02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d|%%+1d||%%+2d|%%+3d||%%+.1d|%%+.2d|%%+.3d||%%+0.0d|%%+0.d||%%+1.1d|%%+2.2d||%%+2.1d|%%+1.2d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: %+d|%+1d|%+2d|%+3d|%+.1d|%+.2d|%+.3d|%+0.0d|%+0.d|%+1.1d|%+2.2d|%+2.1d|%+1.2d|%+2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: % 0d|% 01d|% 02d|% 03d|% 0.1d|% 0.2d|% 0.3d|% 00.0d|% 00.d|% 01.1d|% 02.2d|% 02.1d|% 01.2d|% 02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//   	//Flag + is ignored when Flag ' ' is present
//
//   printf("===============  \033[33mTEST %d | 0 | Flag ' ' && + \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +d|%% +1d||%% +2d|%% +3d||%% +.1d|%% +.2d|%% +.3d||%% +0.0d|%% +0.d||%% +1.1d|%% +2.2d||%% +2.1d|%% +1.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: %+ d|% +1d|% +2d|% +3d|% +.1d|% +.2d|% +.3d|% +0.0d|% +0.d|% +1.1d|% +2.2d|% +2.1d|% +1.2d|% +2.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//  printf("===============  \033[33mTEST %d | 0 | Flag ' ' && 0 && '+' \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 0d|%% 01d||%% 02d|%% 03d||%% 0.1d|%% 0.2d|%% 0.3d||%% 00.0d|%% 00.d||%% 01.1d|%% 02.2d||%% 02.1d|%% 01.2d|%% 02.3d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: % +0d|% +01d|% +02d|% +03d|% +0.1d|% +0.2d|% +0.3d|% +00.0d|% +00.d|% +01.1d|% +02.2d|% +02.1d|% +01.2d|% +02.3d|\n", 0, 0, 0, 0, 0, 0,0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//
// // 	printf("===============  \033[33mTEST %d | Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
// //     printf("test: \033[36m |%%-0d|%%-0d||%%-05d|%%-05d||%%-01d|%%-01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// // 	x =     ft_printf("my  printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
// //     y =        printf("the printf: |%-0d|%-0d|%-05d|%-05d|%-01d|%-01d|\n", 42, -42, 42, -42, 42, -42);
// // 	printf("my  printf return = %d\n", x);
// // 	printf("the printf return = %d\n", y);
// // 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// // 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d|%%-+d||%%-+5d|%%-+5d||%%-+1d|%%-+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%+-d|%-+d|%-+5d|%-+5d|%-+1d|%-+1d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' && 0 | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 0d|%%- 0d||%%- 05d|%%- 05d||%%- 01d|%%- 01d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- 0d|%- 0d|%- 05d|%- 05d|%- 01d|%- 01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	//Flag + is ignored when Flag ' ' is present
// 	printf("===============  \033[33mTEST %d | Width | Flag ' ' && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- +d|%%- +d||%%- +5d|%%- +5d||%%- +1d|%%- +1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- +d|%- +d|%- +5d|%- +5d|%- +1d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 && + | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0+d|%%-0+d||%%-0+5d|%%-0+5d||%%-0+1d|%%-0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%-+0d|%-+0d|%-+05d|%-+05d|%-+01d|%-+01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width | Flag 0 && + && ' ' | Flag - \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%- 0+d|%%- 0+d||%%- 0+5d|%%- 0+5d||%%- 0+1d|%%- 0+1d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
//     y =        printf("the printf: |%- +0d|%- +0d|%- +05d|%- +05d|%- +01d|%- +01d|\n", 42, -42, 42, -42, 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//     printf("===============  \033[33mTEST %d | Precision \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%.d|%%.d||%%5.d|%%5.d||%%8.d|%%8.d||%%1.d|%%1.d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
// 	x =     ft_printf("my  printf: |%.d|%.d||%5.d|%5.d||%8.d|%8.d||%1.d|%1.d|\n", 42506, -42506, 42506, -42506, 42506, -42506, 42506, -42506);
//     y =        printf("the printf: |%.d|%.d||%5.d|%5.d||%8.d|%8.d||%1.d|%1.d|\n", 42506, -42506, 42506, -42506, 42506, -42506, 42506, -42506);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width >= Precision \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%9.2d|%%9.2d||%%9.3d|%%9.3d||%%9.4d|%%9.4d||%%9.6d|%%9.6d||%%9.9d|%%9.9d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%9.2d|%9.2d||%9.3d|%9.3d||%9.4d|%9.4d||%9.6d|%9.6d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
//     y =        printf("the printf: |%9.2d|%9.2d||%9.3d|%9.3d||%9.4d|%9.4d||%9.6d|%9.6d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Precision >= Width \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%2.9d|%%2.9d||%%3.9d|%%3.9d||%%4.9d|%%4.9d||%%6.9d|%%6.9d||%%9.9d|%%9.9d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%2.9d|%2.9d||%3.9d|%3.9d||%4.9d|%4.9d||%6.9d|%6.9d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
//     y =        printf("the printf: |%2.9d|%2.9d||%3.9d|%3.9d||%4.9d|%4.9d||%6.9d|%6.9d||%9.9d|%9.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Width >= Precision | Flag 0 \033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%09.2d|%%09.2d||%%09.3d|%%09.3d||%%09.4d|%%09.4d||%%09.6d|%%09.6d||%%09.9d|%%09.9d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%09.2d|%09.2d||%09.3d|%09.3d||%09.4d|%09.4d||%09.6d|%09.6d||%09.9d|%09.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
//     y =        printf("the printf: |%09.2d|%09.2d||%09.3d|%09.3d||%09.4d|%09.4d||%09.6d|%09.6d||%09.9d|%09.9d|\n", 150, -150, 150, -150, 150, -150, 150, -150, 150, -150);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	//5
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%09.2d\033[0m arg: \033[36m -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%09.2d|\n", -15);
//     y =        printf("the printf: |%09.2d|\n", -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%09.4d|%%-09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%09.4d|%-09.4d|\n", -15, -15);
//     y =        printf("the printf: |%09.4d|%-09.4d|\n", -15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%4.2d|%%-4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	x =     ft_printf("my  printf: |%4.2d|%-4.2d|\n", 32, -32);
//     y =        printf("the printf: |%4.2d|%-4.2d|\n", 32, -32);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%-09.4d\033[0m arg: \033[36m 15\033[0m \n");
// 	x =     ft_printf("my  printf: |%-09.4d|\n", 15);
//     y =        printf("the printf: |%-09.4d|\n", 15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%-4.9d |%%4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%-4.9d |%4.9d |\n", -15, -15);
//     y =        printf("the printf: |%-4.9d |%4.9d |\n", -15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	//10
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%d|%%-5d|%%-5d|%%.4d|\033[0m arg: \033[36m -15, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%d|%5d|%-5d|%.4d|\n", 42, 42, 42, 42);
//     y =        printf("the printf: |%d|%5d|%-5d|%.4d|\n", 42, 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0.5d|%%-10.4d|%%-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%-0.5d|%%-10.4d|%%-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |%-0.5d|%-10.4d|%-15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%8.2d|%%8.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	x =     ft_printf("my  printf: |%8.2d|%8.2d|\n", 142, 142142142);
//     y =        printf("the printf: |%8.2d|%8.2d|\n", 142, 142142142);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%09.2d|%%09.2d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%09.2d|%09.2d|\n", 150, -150);
//     y =        printf("the printf: |%09.2d|%09.2d|\n", 150, -150);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	// 15
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d|%%+d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+d|%d|\n", 42, -42);
//     y =        printf("the printf: |%+d|%d|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+.4d|%%+.4d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
// 	x =     ft_printf("my  printf: |%+.4d|%+.4d|\n", 42506, -42506);
//     y =        printf("the printf: |%+.4d|%+.4d|\n", 42506, -42506);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+2.4d|%%+2.4d|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	x =     ft_printf("my  printf: |%+2.4d|%+2.4d|\n", 21, -21);
//     y =        printf("the printf: |%+2.4d|%+2.4d|\n", 21, -21);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%09.2d\033[0m arg: \033[36m -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%09.2d|\n", -15);
//     y =        printf("the printf: |%09.2d|\n", -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%+09.4d|%%+-09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%+09.4d|%+-09.4d|\n", -15, -15);
//     y =        printf("the printf: |%+09.4d|%+-09.4d|\n", -15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
// 	//20
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+4.2d|%%+-4.2d|%%+-4.2d|%%-4.2d|%%-4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	x =     ft_printf("my  printf: |%+4.2d|%+-4.2d|%-4.2d|%-4.2d|\n", 32, -32, 32, -32);
//     y =        printf("the printf: |%+4.2d|%+-4.2d|%-4.2d|%-4.2d|\n", 32, -32, 32, -32);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Flag 0\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+-09.4d|%%+09.4d|%%-09.4d|%%09.4d|\033[0m arg: \033[36m 15\033[0m \n");
// 	x =     ft_printf("my  printf: |%+-09.4d|%+09.4d|%-09.4d|%09.4d|\n", 15, 15, 15, 15);
//     y =        printf("the printf: |%+-09.4d|%+09.4d|%-09.4d|%09.4d|\n", 15, 15, 15, 15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%+-4.9d |%%4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%+-4.9d |%4.9d |\n", -15, -15);
//     y =        printf("the printf: |%+-4.9d |%4.9d |\n", -15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d|%%+5d|%%+-5d|%%+.4d|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+d|%+5d|%+-5d|%+.4d|\n", 42, 42, 42, 42);
//     y =        printf("the printf: |%+d|%+5d|%+-5d|%+.4d|\n", 42, 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+-0.5d|%%+-10.4d|%%-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	//25
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+-0.5d|%%+-10.4d|%%+-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |%+-0.5d|%+-10.4d|%+-15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+8.2d|%%+8.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	x =     ft_printf("my  printf: |%+8.2d|%+8.2d|\n", 142, 142142142);
//     y =        printf("the printf: |%+8.2d|%+8.2d|\n", 142, 142142142);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%c|%%-8c|%%8c|\033[0m arg: \033[36m 'd', 'd', 68\033[0m \n");
// 	x =     ft_printf("my  printf: |%c|%-8c|%8c|\n", 'd', 'd', 68);
//     y =        printf("the printf: |%c|%-8c|%8c|\n", 'd', 'd', 68);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	// 29
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 09.2d|%% 09.2d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |% 09.2d|% 09.2d|\n", 150, -150);
//     y =        printf("the printf: |% 09.2d|% 09.2d|\n", 150, -150);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% d|%% d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% d|% d|\n", 42, -42);
//     y =        printf("the printf: |% d|%  d|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% .4d|%% .4d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
// 	x =     ft_printf("my  printf: |% .4d|% .4d|\n", 42506, -42506);
//     y =        printf("the printf: |% .4d|% .4d|\n", 42506, -42506);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 2.4d|%% 2.4d|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	x =     ft_printf("my  printf: |% 2.4d|% 2.4d|\n", 21, -21);
//     y =        printf("the printf: |% 2.4d|% 2.4d|\n", 21, -21);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% 09.2d\033[0m arg: \033[36m -15\033[0m \n");
// 	x =     ft_printf("my  printf: |% 09.2d|\n", -15);
//     y =        printf("the printf: |% 09.2d|\n", -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% 09.4d|%% -09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |% 09.4d|% -09.4d|\n", -15, -15);
//     y =        printf("the printf: |% 09.4d|% -09.4d|\n", -15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
// 	// 35
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 4.2d|%% -4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	x =     ft_printf("my  printf: |% 4.2d|% -4.2d|\n", 32, -32);
//     y =        printf("the printf: |% 4.2d|% -4.2d|\n", 32, -32);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% -09.4d\033[0m arg: \033[36m 15\033[0m \n");
// 	x =     ft_printf("my  printf: |% -09.4d|\n", 15);
//     y =        printf("the printf: |% -09.4d|\n", 15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% -4.9d |%% 4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |% -4.9d |% 4.9d |\n", -15, -15);
//     y =        printf("the printf: |% -4.9d |% 4.9d |\n", -15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% d|%% 5d|%% -5d|%% .4d|\033[0m arg: \033[36m -15, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% d|% 5d|% -5d|% .4d|\n", 42, 42, 42000, 42);
//     y =        printf("the printf: |% d|% 5d|% -5d|% .4d|\n", 42, 42, 42000, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% -0.5d|%% -10.4d|%% -15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	// 40
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% -0.5d|%% -10.4d|%% -15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |% -0.5d|% -10.4d|% -15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 8.2d|%% 8.2d|%% 9.2d|%% 10.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	x =     ft_printf("my  printf: |% 8.2d|% 8.2d|% 9.2d|% 10.2d|\n", 142, 142142142, 142142142, 142142142);
//     y =        printf("the printf: |% 8.2d|% 8.2d|% 9.2d|% 10.2d|\n", 142, 142142142, 142142142, 142142142);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 09.2d|%% 09.2d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |% 09.2d|% 09.2d|\n", 150, -150);
//     y =        printf("the printf: |% 09.2d|% 09.2d|\n", 150, -150);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +d|%% +d|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +d|% d|\n", 42, -42);
//     y =        printf("the printf: |% +d|% d|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +.4d|%% +.4d|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
// 	x =     ft_printf("my  printf: |% +.4d|% +.4d|\n", 42506, -42506);
//     y =        printf("the printf: |% +.4d|% +.4d|\n", 42506, -42506);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	// 45
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +2.4d|%% +2.4d|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	x =     ft_printf("my  printf: |% +2.4d|% +2.4d|\n", 21, -21);
//     y =        printf("the printf: |% +2.4d|% +2.4d|\n", 21, -21);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% 09.2d\033[0m arg: \033[36m -15\033[0m \n");
// 	x =     ft_printf("my  printf: |% 09.2d|\n", -15);
//     y =        printf("the printf: |% 09.2d|\n", -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% +09.4d|%% +-09.4d|\033[0m arg: \033[36m -15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |% +09.4d|% +-09.4d|\n", -15, -15);
//     y =        printf("the printf: |% +09.4d|% +-09.4d|\n", -15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +4.2d|%% +-4.2d|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	x =     ft_printf("my  printf: |% +4.2d|% +-4.2d|\n", 32, -32);
//     y =        printf("the printf: |% +4.2d|% +-4.2d|\n", 32, -32);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% +-09.4d\033[0m arg: \033[36m 15\033[0m \n");
// 	x =     ft_printf("my  printf: |% +-09.4d|\n", 15);
//     y =        printf("the printf: |% +-09.4d|\n", 15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	// 50
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% +-4.9d |%% 4.9d |\033[0m arg: \033[36m 15, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |% +-4.9d |% 4.9d |\n", 15, -15);
//     y =        printf("the printf: |% +-4.9d |% 4.9d |\n", 15, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +d|%% +5d|%% +-5d|%% +.4d|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +d|% +5d|% +-5d|% +.4d|\n", 42, 42, 42, 42);
//     y =        printf("the printf: |% +d|% +5d|% +-5d|% +.4d|\n", 42, 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +-0.5d|%% +-10.4d|%% -15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +-0.5d|%% +-10.4d|%% +-15.10d|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
//     y =        printf("the printf: |% +-0.5d|% +-10.4d|% +-15.10d|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% +8.2d|%% +8.2d|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	x =     ft_printf("my  printf: |% +8.2d|% +8.2d|\n", 142, 142142142);
//     y =        printf("the printf: |% +8.2d|% +8.2d|\n", 142, 142142142);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	// 55
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% c|%% -8c|%%8c|\033[0m arg: \033[36m 'd', 'd', 68\033[0m \n");
// 	x =     ft_printf("my  printf: |% c|% -8c|%8c|\n", 'd', 'd', 68);
//     y =        printf("the printf: |% c|% -8c|%8c|\n", 'd', 'd', 68);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//
//
//
//
//
//
//
//
// 	printf("140===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 08c|%%08c|%% -8c|%%8c|\033[0m arg: \033[36m 'd', 'd', 68\033[0m \n");
// 	x =     ft_printf("my  printf: |% 08c|%08c|% -8c|%8c|\n",'y' ,'d', 'd', 68);
//     y =        printf("the printf: |% 08c|%08c|% -8c|%8c|\n",'y' ,'d', 'd', 68);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%09.d|%%09.2d|%% 9.d|%% 9.2d|%%+9.d|%%+9.2d|%%-9.d|%%-9.2d|\033[0m arg: \033[36m 0, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%09.d|%09.2d|% 9.d|% 9.2d|%+9.d|%+9.2d|%-9.d|%-9.2d|\n", 0, 0, 0, 0, 0, 0, 0, 0);
//     y =        printf("the printf: |%09.d|%09.2d|% 9.d|% 9.2d|%+9.d|%+9.2d|%-9.d|%-9.2d|\n", 0, 0, 0, 0, 0, 0, 0, 0);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+d||\033[0m arg: \033[36m 0, 42424242, -42424242 \033[0m \n");
// 	x =     ft_printf("my  printf: |%+d||%+d||%+d|\n", 0, 42424242, -42424242);
//     y =        printf("the printf: |%+d||%+d||%+d|\n", 0, 42424242, -42424242);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+010i||\033[0m arg: \033[36m 0, 42424242, -42424242 \033[0m \n");
// 	x =     ft_printf("my  printf: |%+010i||%+010i||%+010i|\n", 0, 42424242, -42424242);
//     y =        printf("the printf: |%+010i||%+010i||%+010i|\n", 0, 42424242, -42424242);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%+05.i||%%-+05.i||%%+010.i||%%+010.i|\033[0m arg: \033[36m 0, 42424242, -42424242 \033[0m \n");
// 	x =     ft_printf("my  printf: |%+05.i||%-+05.i||%+010.i||%+010.i|\n", 0, 0, 42424242, -42424242);
//     y =        printf("the printf: |%+05.i||%-+05.i||%+010.i||%+010.i|\n", 0, 0, 42424242, -42424242);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d | Integer | Flag +\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%03.2d|\033[0m arg: \033[36m -1 \033[0m \n");
// 	y =ft_printf("%03.2d\n", -1);
// 	x = printf("%03.2d\n", -1);
// 	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
// 	printf("retour de printf = \033[36m%d\033[0m\n", x);
// 	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
//
// 	printf("===============  \033[33mTEST %d | Integer | Flag 0\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%010i|%%010i|\033[0m arg: \033[36m 42424242, -42424242 \033[0m \n");
// 	x =     ft_printf("my  printf: |%010i|%010i|\n", 42424242, -42424242);
//     y =        printf("the printf: |%010i|%010i|\n", 42424242, -42424242);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m {%% 03d}{%% 03d}{%% 05d}{%% 05d}{%%03d}{%%03d}{%%05d}{%%05d}\033[0m arg: \033[36m 0, 4, 0, 4, 0, 4, 0, 4 \033[0m \n");
//     y =ft_printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     x = printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     printf("retour de mon printf = \033[36m%d\033[0m\n", y);
//     printf("retour de printf = \033[36m%d\033[0m\n", x);
//     y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m {%% 03d}{%% 03d}{%% 05d}{%% 05d}{%%03d}{%%03d}{%%05d}{%%05d}\033[0m arg: \033[36m 0, -4, 0, -4, 0, -4, 0, -4 \033[0m \n");
//     y =ft_printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, -4, 0, -4, 0, -4, 0, -4);
//     x = printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, -4, 0, -4, 0, -4, 0, -4);
//     printf("retour de mon printf = \033[36m%d\033[0m\n", y);
//     printf("retour de printf = \033[36m%d\033[0m\n", x);
//     y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m {%% 03.d}{%% 03.d}{%% 05.d}{%% 05.d}{%%03.d}{%%03.d}{%%05.d}{%%05.d}\033[0m arg: \033[36m 0, 4, 0, 4, 0, 4, 0, 4 \033[0m \n");
//     y =ft_printf("{% 03.d}{% 03.d}{% 05.d}{% 05.d}{%03.d}{%03.d}{%05.d}{%05.d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     x = printf("{% 03.d}{% 03.d}{% 05.d}{% 05.d}{%03.d}{%03.d}{%05.d}{%05.d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     printf("retour de mon printf = \033[36m%d\033[0m\n", y);
//     printf("retour de printf = \033[36m%d\033[0m\n", x);
//     y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m {%% 03.1d}{%% 03.1d}{%% 05.1d}{%% 05.1d}{%%03.1d}{%%03.1d}{%%05.1d}{%%05.1d}\033[0m arg: \033[36m 0, 4, 0, 4, 0, 4, 0, 4 \033[0m \n");
//     y =ft_printf("{% 03.1d}{% 03.1d}{% 05.1d}{% 05.1d}{%03.1d}{%03.1d}{%05.1d}{%05.1d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     x = printf("{% 03.1d}{% 03.1d}{% 05.1d}{% 05.1d}{%03.1d}{%03.1d}{%05.1d}{%05.1d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     printf("retour de mon printf = \033[36m%d\033[0m\n", y);
//     printf("retour de printf = \033[36m%d\033[0m\n", x);
//     y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
// // 70
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m {%% 03.2d}{%% 03.2d}{%% 05.2d}{%% 05.2d}{%%03.2d}{%%03.2d}{%%05.2d}{%%05.2d}\033[0m arg: \033[36m 0, 4, 0, 4, 0, 4, 0, 4 \033[0m \n");
//     y =ft_printf("{% 03.2d}{% 03.2d}{% 05.2d}{% 05.2d}{%03.2d}{%03.2d}{%05.2d}{%05.2d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     x = printf("{% 03.2d}{% 03.2d}{% 05.2d}{% 05.2d}{%03.2d}{%03.2d}{%05.2d}{%05.2d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     printf("retour de mon printf = \033[36m%d\033[0m\n", y);
//     printf("retour de printf = \033[36m%d\033[0m\n", x);
//     y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m {%% 03.3d}{%% 03.3d}{%% 05.3d}{%% 05.3d}{%%03.3d}{%%03.3d}{%%05.3d}{%%05.3d}\033[0m arg: \033[36m 0, 4, 0, 4, 0, 4, 0, 4 \033[0m \n");
//     y =ft_printf("{% 03.3d}{% 03.3d}{% 05.3d}{% 05.3d}{%03.3d}{%03.3d}{%05.3d}{%05.3d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     x = printf("{% 03.3d}{% 03.3d}{% 05.3d}{% 05.3d}{%03.3d}{%03.3d}{%05.3d}{%05.3d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     printf("retour de mon printf = \033[36m%d\033[0m\n", y);
//     printf("retour de printf = \033[36m%d\033[0m\n", x);
//     y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m {%% 03.4d}{%% 03.4d}{%% 05.4d}{%% 05.4d}{%%03.4d}{%%03.4d}{%%05.4d}{%%05.4d}\033[0m arg: \033[36m 0, 4, 0, 4, 0, 4, 0, 4 \033[0m \n");
//     y =ft_printf("{% 03.4d}{% 03.4d}{% 05.4d}{% 05.4d}{%03.4d}{%03.4d}{%05.4d}{%05.4d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     x = printf("{% 03.4d}{% 03.4d}{% 05.4d}{% 05.4d}{%03.4d}{%03.4d}{%05.4d}{%05.4d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
//     printf("retour de mon printf = \033[36m%d\033[0m\n", y);
//     printf("retour de printf = \033[36m%d\033[0m\n", x);
//     y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//
//
// 	void	*p;
// 	float	f;
// 	long double lf;
//
// 	p = realloc;
// 	i = 1;
// 	f = 6;
// 	lf = 900.603665;
//
//
// 	// 1
// 	printf("===============  \033[33mTEST | Width = Precision = l %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%9.9d|%%1.1d||%%9.9d|%%2.2d||%%9.9d|%%3.3d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%9.8d|%1.1d||%9.9d|%2.2d||%9.9d|%3.3d|\n", 0, 0, -1, -1, 123, 123);
//     y =        printf("the printf: |%9.8d|%1.1d||%9.9d|%2.2d||%9.9d|%3.3d|\n", 0, 0, -1, -1, 123, 123);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 		printf("===============  \033[33mTEST | Width = Precision = l | Flag # %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%#9.9d|%%#1.1d||%%#9.9d|%%#2.2d||%%#9.9d|%%#3.3d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%#9.9d|%#1.1d||%#9.9d|%#2.2d||%#9.9d|%#3.3d|\n", 0, 0, -1, -1, 123, 123);
//     y =        printf("the printf: |%#9.9d|%#1.1d||%#9.9d|%#2.2d||%#9.9d|%#3.3d|\n", 0, 0, -1, -1, 123, 123);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 			printf("===============  \033[33mTEST | Width = Precision = l | Flag ' ' %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%# 9.9d|%%# 1.1d||%%# 9.9d|%%# 2.2d||%%# 9.9d|%%# 3.3d|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	x =     ft_printf("my  printf: |%# 9.9d|%# 1.1d||%# 9.9d|%# 2.2d||%# 9.9d|%# 3.3d|\n", 0, 0, -1, -1, 123, 123);
//     y =        printf("the printf: |%# 9.9d|%# 1.1d||%# 9.9d|%# 2.2d||%# 9.9d|%# 3.3d|\n", 0, 0, -1, -1, 123, 123);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOKOKOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	ft_printf("    moi = % 08c|\n", 'y');
// 	   printf("pas moi = % 08c|\n", 'y');
//
//
//
	   i = 1;
//
// 	   	// 1
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%% .2f|\033[0m arg: \033[36m 263.367 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%# .2f|\n", 263.367);
// 	       y =        printf("the printf: |%# .2f|\n", 263.367);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%10f|\033[0m arg: \033[36m 42.42566 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%10.3f|\n", -42.42566);
// 	       y =        printf("the printf: |%10.3f|\n", -42.42566);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%f|\033[0m arg: \033[36m 0.42 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%f|\n", 42.54);
// 	       y =        printf("the printf: |%f|\n", 42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%f|\033[0m arg: \033[36m 42.48655555 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%f|\n", 42.48655555);
// 	       y =        printf("the printf: |%f|\n", 42.48655555);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%.4f|%%.4f|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%.2f|%.4f|\n", 42506.546, -42506.54);
// 	       y =        printf("the printf: |%.2f|%.4f|\n", 42506.546, -42506.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%2.4f|%%2.4f|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%2.4f|%2.4f|\n", 21.54, -21.54);
// 	       y =        printf("the printf: |%2.4f|%2.4f|\n", 21.54, -21.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	// 7
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%09.2f|\033[0m arg: \033[36m -15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%09.2f|\n", -15.54);
// 	       y =        printf("the printf: |%09.2f|\n", -15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	       ft_putchar('\n');
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%09.4f|%%-09.4f|\033[0m arg: \033[36m -15, -15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%09.4f|%-09.4f|\n", -15.54, -15.54);
// 	       y =        printf("the printf: |%09.4f|%-09.4f|\n", -15.54, -15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	       ft_putchar('\n');
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%4.2f|%%-4.2f|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%4.2f|%-4.2f|\n", 32.54, -32.54);
// 	       y =        printf("the printf: |%4.2f|%-4.2f|\n", 32.54, -32.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%-09.4f|\033[0m arg: \033[36m 15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%-09.4f|\n", 15.54);
// 	       y =        printf("the printf: |%-09.4f|\n", 15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%-4.9f|%%4.9f|\033[0m arg: \033[36m 15, -15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%-4.9f|%4.9f|\n", -15.54, -15.54);
// 	       y =        printf("the printf: |%-4.9f|%4.9f|\n", -15.54, -15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	//12
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%f|%%-5f|%%-5f|%%.4f|\033[0m arg: \033[36m -15, 42\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%f|%5f|%-5f|%.4f|\n", 42.54, 42.54, 42.54, 42.54);
// 	       y =        printf("the printf: |%f|%5f|%-5f|%.4f|\n", 42.54, 42.54, 42.54, 42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%-0.5f|%%-10.4f|%%-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
// 	       y =        printf("the printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%-0.5f|%%-10.4f|%%-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
// 	       y =        printf("the printf: |%-0.5f|%-10.4f|%-15.10f|\n", 42.54, 42.54, 42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%8.2f|%%8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%8.2f|%8.2f|\n", 142.54, 142142142.54);
// 	       y =        printf("the printf: |%8.2f|%8.2f|\n", 142.54, 142142142.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%09.2f|%%09.2f|\033[0m arg: \033[36m 150, -150 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%09.2f|%09.2f|\n", 150.54, -150.54);
// 	       y =        printf("the printf: |%09.2f|%09.2f|\n", 150.54, -150.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	// 17
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+f|%%+f|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+f|%f|\n", 42.54, -42.54);
// 	       y =        printf("the printf: |%+f|%f|\n", 42.54, -42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+.4f|%%+.4f|\033[0m arg: \033[36m 42506, -42506\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+.4f|%+.4f|\n", 42506.54, -42506.54);
// 	       y =        printf("the printf: |%+.4f|%+.4f|\n", 42506.54, -42506.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+2.4f|%%+2.4f|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+2.4f|%+2.4f|\n", 21.54, -21.54);
// 	       y =        printf("the printf: |%+2.4f|%+2.4f|\n", 21.54, -21.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%09.2d\033[0m arg: \033[36m -15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%09.2f|\n", -15.54);
// 	       y =        printf("the printf: |%09.2f|\n", -15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	       ft_putchar('\n');
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%+09.4f|%%+-09.4f|\033[0m arg: \033[36m -15, -15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+09.4f|%+-09.4f|\n", -15.54, -15.54);
// 	       y =        printf("the printf: |%+09.4f|%+-09.4f|\n", -15.54, -15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	       ft_putchar('\n');
//
// 	   	//22
//
// 	       printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+4.2f|%%+-4.2f|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+4.2f|%+-4.2f|\n", 32.54, -32.54);
// 	       y =        printf("the printf: |%+4.2f|%+-4.2f|\n", 32.54, -32.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%+-09.4f|\033[0m arg: \033[36m 15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+-09.4f|\n", 15.54);
// 	       y =        printf("the printf: |%+-09.4f|\n", 15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m %%+-4.9f|%%4.9f|\033[0m arg: \033[36m 15, -15\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+-4.9f|%4.9f|\n", -15.54, -15.54);
// 	       y =        printf("the printf: |%+-4.9f|%4.9f|\n", -15.54, -15.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+f|%%+5f|%%+-5f|%%+.4f|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+f|%+5f|%+-5f|%+.4f|\n", 42.54, 42.54, 42.54, 42.54);
// 	       y =        printf("the printf: |%+f|%+5f|%+-5f|%+.4f|\n", 42.54, 42.54, 42.54, 42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+-0.5f|%%+-10.4f|%%-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
// 	       y =        printf("the printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	//27
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+-0.5f|%%+-10.4f|%%+-15.10f|\033[0m arg: \033[36m 42, 42, 42\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
// 	       y =        printf("the printf: |%+-0.5f|%+-10.4f|%+-15.10f|\n", 42.54, 42.54, 42.54);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+8.2f|%%+8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+8.2f|%+8.2f|\n", 142.54424242, 142142142.54424242);
// 	       y =        printf("the printf: |%+8.2f|%+8.2f|\n", 142.54424242, 142142142.54424242);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   		printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+8.2f|%%+8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%+8.15Lf|%+8.2Lf|\n", (long double)142.544242428888, (long double)142142142.54424242);
// 	       y =        printf("the printf: |%+8.15Lf|%+8.2Lf|\n", (long double)142.544242428888, (long double)142142142.54424242);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   			printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%+8.2f|%%+8.2f|\033[0m arg: \033[36m 142, 142142142\033[0m \n");
// 	   	x =     ft_printf("my  printf: |%#+8.2Lf|%+8.2Lf %%|\n", (long double)-999999999999999999.1999999999999999, (long double)142142142.9999999999);
// 	       y =        printf("the printf: |%#+8.2Lf|%+8.2Lf %%|\n", (long double)-999999999999999999.1999999999999999, (long double)142142142.9999999999);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//
// 	   	ft_putchar('\n');
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%0f|%%0.f|%%.f|%%0.0f|%%00f|%%010f\033[0m arg: \033[36m 263.367 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%0f|%0.f|%.f|%0.0f|%00f|%010f\n", 263.367, 263.367, 263.367, 263.367, 263.367, 263.367);
// 	       y =        printf("the printf: |%0f|%0.f|%.f|%0.0f|%00f|%010f\n", 263.367, 263.367, 263.367, 263.367, 263.367, 263.367);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
// 	   	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	       printf("test: \033[36m |%%0f|%%0.f|%%.f|%%0.0f|%%00f|%%010f\033[0m arg: \033[36m 263.367 \033[0m \n");
// 	   	x =     ft_printf("my  printf: |%0f|%0.f|%.f|%0.0f|%00f|%010f\n", 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
// 	       y =        printf("the printf: |%0f|%0.f|%.f|%0.0f|%00f|%010f\n", 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
// 	   	printf("my  printf return = %d\n", x);
// 	   	printf("the printf return = %d\n", y);
// 	   	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	   	ft_putchar('\n');
//
//
// 		i = 1;
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%x|%%x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%x|%x|\n", 42, -42);
//     y =        printf("the printf: |%x|%x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%4x|%%4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%4x|%4x|\n", 42, -42);
//     y =        printf("the printf: |%4x|%4x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%.4x|%%.4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%.4x|%.4x|\n", 42, -42);
//     y =        printf("the printf: |%.4x|%.4x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%2.4x|%%2.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	x =     ft_printf("my  printf: |%2.4x|%2.4x|\n", 21, -21);
//     y =        printf("the printf: |%2.4x|%2.4x|\n", 21, -21);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%09.2x|%%09.2o|%%09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%09.2x|%09.2o|%09.2x|\n", 1, 150, -15);
//     y =        printf("the printf: |%09.2x|%09.2o|%09.2x|\n", 1, 150, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%-09.3x|%%-09.3x|\033[0m arg: \033[36m -15, 1512\033[0m \n");
// 	x =     ft_printf("my  printf: |%-09.4x|%-09.3x|\n", -15, 1512);
//     y =        printf("the printf: |%-09.4x|%-9.3x|\n", -15, 1512);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%4.2x|%%-4.2x|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	x =     ft_printf("my  printf: |%4.2x|%-4.2x|\n", 32, -32);
//     y =        printf("the printf: |%4.2x|%-4.2x|\n", 32, -32);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %%-4.9x |%%4.9x |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
// 	x =     ft_printf("my  printf: |%-4.9x |%4.9x |%4.9x |\n", -15, -15, 15124);
//     y =        printf("the printf: |%-4.9x |%4.9x |%4.9x |\n", -15, -15, 15124);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%x|%%#x|%%#x|%%#x|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%x|%#x|%#x|%#x|\n", 42, 142, 542, -42);
//     y =        printf("the printf: |%x|%#x|%#x|%#x|\n", 42, 142, 542, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%x|%%#5x|%%-#5x|%%#.4x|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%x|%#5x|%-#5x|%#.4x|\n", 42, 42, 42, 42);
//     y =        printf("the printf: |%x|%#5x|%-#5x|%#.4x|\n", 42, 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m |%%-#0.5x|%%-#10.4x|%%-#15.10x|\033[0m arg: \033[36m -15, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |%-#0.5X|%-#10.4x|%-#15.10x|\n", 42, 42, 42);
// 	y =        printf("the printf: |%-#0.5X|%-#10.4x|%-#15.10x|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%x|%%x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%#x|%#x|\n", 42, -42);
//     y =        printf("the printf: |%#x|%#x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%#-4x|%%#-4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%#-4x|%#-4x|\n", 42, -42);
//     y =        printf("the printf: |%#-4x|%#-4x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%#.4x|%%#.4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |%#.4x|%#.4x|\n", 42, -42);
//     y =        printf("the printf: |%#.4x|%#.4x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%#2.4x|%%2#.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	x =     ft_printf("my  printf: |%#2.4x|%#2.4x|\n", 21, -21);
//     y =        printf("the printf: |%#2.4x|%#2.4x|\n", 21, -21);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%%#-09.2x|%%#09.2x|%%#-09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |%#-09.2x|%#09.2x|%#-09.2x|\n", 1, 150, -15);
//     y =        printf("the printf: |%#-09.2x|%#09.2x|%#-09.2x|\n", 1, 150, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
// 	//Flag ' '
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% x|%% x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% x|% x|\n", 42, -42);
//     y =        printf("the printf: |% x|% x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 4x|%% 4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% 4x|% 4x|\n", 42, -42);
//     y =        printf("the printf: |% 4x|% 4x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% .4x|%% .4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% .4x|% .4x|\n", 42, -42);
//     y =        printf("the printf: |% .4x|% .4x|\n", 42, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 2.4x|%% 2.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
// 	x =     ft_printf("my  printf: |% 2.4x|% 2.4x|\n", 21, -21);
//     y =        printf("the printf: |% 2.4x|% 2.4x|\n", 21, -21);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 09.2x|%% 09.2o|%% 09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
// 	x =     ft_printf("my  printf: |% 09.2x|% 09.2o|% 09.2x|\n", 1, 150, -15);
//     y =        printf("the printf: |% 09.2x|% 09.2o|% 09.2x|\n", 1, 150, -15);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% -09.3x|%% -09.3x|\033[0m arg: \033[36m -15, 1512\033[0m \n");
// 	x =     ft_printf("my  printf: |% -09.4x|% -09.3x|\n", -15, 1512);
//     y =        printf("the printf: |% -09.4x|% -9.3x|\n", -15, 1512);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
//     ft_putchar('\n');
//
//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% 4.2x|%% -4.2x|\033[0m arg: \033[36m 32, -32\033[0m \n");
// 	x =     ft_printf("my  printf: |% 4.2x|% -4.2x|\n", 32, -32);
//     y =        printf("the printf: |% 4.2x|% -4.2x|\n", 32, -32);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m %% -4.9x |%% 4.9x |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
// 	x =     ft_printf("my  printf: |% -4.9x |% 4.9x |% 4.9x |\n", -15, -15, 15124);
//     y =        printf("the printf: |% -4.9x |% 4.9x |% 4.9x |\n", -15, -15, 15124);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% x|%% #x|%% #x|%% #x|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
// 	x =     ft_printf("my  printf: |% x|% #x|% #x|% #x|\n", 42, 142, 542, -42);
//     y =        printf("the printf: |% x|% #x|% #x|% #x|\n", 42, 142, 542, -42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
//     printf("test: \033[36m |%% x|%%# 5x|%% -#5x|%% #.4x|\033[0m arg: \033[36m 42, 42, 42, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% x|%# 5x|% -#5x|% #.4x|\n", 42, 42, 42, 42);
//     y =        printf("the printf: |% x|%# 5x|% -#5x|% #.4x|\n", 42, 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
// 	printf("test: \033[36m |%% -#0.5x|%% -#10.4x|%% -#15.10x|\033[0m arg: \033[36m -15, 42\033[0m \n");
// 	x =     ft_printf("my  printf: |% -#0.5X|% -#10.4x|% -#15.10x|\n", 42, 42, 42);
// 	y =        printf("the printf: |% -#0.5X|% -#10.4x|% -#15.10x|\n", 42, 42, 42);
// 	printf("my  printf return = %d\n", x);
// 	printf("the printf return = %d\n", y);
// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
//
// 	ft_putchar('\n');
//
	// printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%% x|%% x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |% #x|% #x|\n", 42, -42);
    // y =        printf("the printf: |% #x|% #x|\n", 42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%% #-4x|%% #-4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |% #-4x|% #-4x|\n", 42, -42);
    // y =        printf("the printf: |% #-4x|% #-4x|\n", 42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%% #.4x|%% #.4x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |% #.4x|% #.4x|\n", 42, -42);
    // y =        printf("the printf: |% #.4x|% #.4x|\n", 42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%% #2.4x|%% #2.4x|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	// x =     ft_printf("my  printf: |% #2.4x|% #2.4x|\n", 21, -21);
    // y =        printf("the printf: |% #2.4x|% #2.4x|\n", 21, -21);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%% #-09.2x|%% #09.2x|%% #-09.2x\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	// x =     ft_printf("my  printf: |% #-09.2x|% #09.2x|% #-09.2x|\n", 1, 150, -15);
    // y =        printf("the printf: |% #-09.2x|% #09.2x|% #-09.2x|\n", 1, 150, -15);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
    // ft_putchar('\n');
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	// printf("test: \033[36m |t %%#7.5X %%06.2X et %%lX!|\033[0m arg: \033[36m 0xab, 0x876, 0xff11ff11ff1\033[0m \n");
	// y =ft_printf("my  printf: |t %#7.5X %06.2X et %lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	// x =   printf("the printf: |t %#7.5X %06.2X et %lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	// printf("test: \033[36m |t %%07.5X %%006.2X et %%000lX!|\033[0m arg: \033[36m 0xab, 0x876, 0xff11ff11ff1\033[0m \n");
	// y =ft_printf("my  printf: |t %07.5X %006.2X et %000lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	// x =   printf("the printf: |t %07.5X %006.2X et %000lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	// printf("test: \033[36m |%%0#10.0x %0#x|%%0#10.2x||%%0#10.15x||%%0#10.10x|\033[0m arg: \033[36m 12345, 0, 12345, 12345, 12345 \033[0m \n");
	// y =ft_printf("my  printf: |%0#10.0x %0#x|%0#10.2x||%0#10.15x||%0#10.5x|\n", 12345, 0, 12345, 12345, 12345);
	// x =   printf("the printf: |%0#10.0x %0#x|%0#10.2x||%0#10.15x||%0#10.5x|\n", 12345, 0, 12345, 12345, 12345);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	// printf("test: \033[36m |t %%-#7.5X %%06.2X et %%lX!|\033[0m arg: \033[36m 0xab, 0x876, 0xff11ff11ff1\033[0m \n");
	// y =ft_printf("my  printf: |t %-#7.5X %06.7X et %#lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	// x =   printf("the printf: |t %-#7.5X %06.7X et %#lX!|\n", 0xab, 0x876, 0xff11ff11ff1);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	// printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	// printf("test: \033[36m |%%#20lx|\033[0m arg: \033[36m -4242424242424242\033[0m \n");
	// y =ft_printf("my  printf: |%#20lx|\n", -4242424242424242);
	// x =   printf("the printf: |%#20lx|\n", -4242424242424242);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	// printf("===============  \033[33mTEST %d | Padding with 0 | Flag 0 \033[0m  ===============\n\n", i++);
	// printf("test: \033[36m |%%#08x||%%-#08x||%% #08x||%% #08.2x||%% #08.4x||%% #08.9x|\033[0m arg: \033[36m 42\033[0m \n");
	// y =ft_printf("my  printf: |%#08x||%-#08x||% #08x||% #08.2x||% #08.4x||% #08.9x|\n", 42, 42, 42, 42, 42, 42);
	// x =   printf("the printf: |%#08x||%-#08x||% #08x||% #08.2x||% #08.4x||% #08.9x|\n", 42, 42, 42, 42, 42, 42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	//
	// printf("++++++++++++++++++++ TESTS CHIANTS AVEC DES 0 ++++++++++++++++\n\n");
	//
	// printf("===============  \033[31mTEST %d | hexa with res 0  \033[0m  ===============\n\n", i++);
	// y =ft_printf("|%-5.x|%-5.15x|%-5x|%5.15x|%15.5x|%-15.5x|%0.x|%0.0x|%.0x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 );
	// x = printf("|%-5.x|%-5.15x|%-5x|%5.15x|%15.5x|%-15.5x|%0.x|%0.0x|%.0x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	// printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	// printf("retour de printf = \033[36m%d\033[0m\n", x);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	// printf("===============  \033[31mTEST %d | hexa with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	// y =ft_printf("hello |%.x|%x|%5x|%5.x|%-5.x|%5.3x|%3.5x|%-5.3x|%-3.5x| this is a test  |%.x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	// x = printf("hello |%.x|%x|%5x|%5.x|%-5.x|%5.3x|%3.5x|%-5.3x|%-3.5x| this is a test  |%.x|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	// printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	// printf("retour de printf = \033[36m%d\033[0m\n", x);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	//
	// printf("===============  \033[31mTEST %d | hexa with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	// y =ft_printf("|% -5.X|% -5.15X|% -5X|% 5.15X|% 15.5X|% -15.5X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	// x = printf("|% -5.X|% -5.15X|% -5X|% 5.15X|% 15.5X|% -15.5X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	// printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	// printf("retour de printf = \033[36m%d\033[0m\n", x);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	// printf("===============  \033[31mTEST %d | hexa with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	// y =ft_printf("hello |%.X|% X|% 5X|% 5.X|% -5.X|% 5.3X|% 3.5X|% -5.3X|% -3.5X| this is a test  |% .X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	// x = printf("hello |%.X|% X|% 5X|% 5.X|% -5.X|% 5.3X|% 3.5X|% -5.3X|% -3.5X| this is a test  |% .X|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	// printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	// printf("retour de printf = \033[36m%d\033[0m\n", x);
	// y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	//
	// printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%x|%%x|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%#18.18x|%#17.18x|\n", 2, 2);
    // y =        printf("the printf: |%#18.18x|%#17.18x|\n", 2, 2);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');


	// ft_printf("    moi=%-5.x|\n", 0);
	//    printf("pas moi=%-5.x|\n", 0);
	//
	// ft_printf("    moi=%.X|\n", 0);
	//    printf("pas moi=%.X|\n", 0);
	//
	// ft_printf("    moi=%.x|\n", 0);
	//    printf("pas moi=%.x|\n", 0);

	   i = 1;


	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%o|%%o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%o|%o|\n", 42, -42);
	//        y =        printf("the printf: |%o|%o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+o|%%+o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%+o|%+o|\n", 42, -42);
	//        y =        printf("the printf: |%+o|%+o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%4o|%%4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%4o|%4o|\n", 42, -42);
	//        y =        printf("the printf: |%4o|%4o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+4o|%%+4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%+4o|%+4o|\n", 42, -42);
	//        y =        printf("the printf: |%+4o|%+4o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%.4o|%%.4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%.4o|%.4o|\n", 42, -42);
	//        y =        printf("the printf: |%.4o|%.4o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+.4o|%%+.4o|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%+.4o|%+.4o|\n", 4242, -42);
	//        y =        printf("the printf: |%+.4o|%+.4o|\n", 4242, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%2.4o|%%2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%2.4o|%2.4o|\n", 21, -21);
	//        y =        printf("the printf: |%2.4o|%2.4o|\n", 21, -21);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+2.4o|%%+2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%+2.4o|%+2.4o|\n", 21, -21);
	//        y =        printf("the printf: |%+2.4o|%+2.4o|\n", 21, -21);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%09.2olol|%%09.2olol|%%09.2olol|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	//    	x =     ft_printf("my  printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
	//        y =        printf("the printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//        ft_putchar('\n');
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m %%-09.3olol|%%-09.3o|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	//    	x =     ft_printf("my  printf: |%-09.4olol|%-09.3o|\n", -15, 1512);
	//        y =        printf("the printf: |%-09.4olol|%-9.3o|\n", -15, 1512);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//        ft_putchar('\n');
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%4.2o|%%-4.2o|\033[0m arg: \033[36m 32, -32\033[0m \n");
	//    	x =     ft_printf("my  printf: |%4.2o|%-4.2o|\n", 32, -32);
	//        y =        printf("the printf: |%4.2o|%-4.2o|\n", 32, -32);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag - : positive and neg,  w < p\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m %%-4.9o |%%4.9o |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	//    	x =     ft_printf("my  printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
	//        y =        printf("the printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, no specifier\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%o|%%#o|%%#o|%%#o|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
	//        y =        printf("the printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#o|%%#5o|%%#.5o|%%#o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: %#o|%#5o|%#.5o|%#.5o|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
	//        y =        printf("the printf: %#o|%#5o|%#.5o|%#.5o|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only, equal len\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#5o|%%#.5o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	//    	x =     ft_printf("my  printf: %#5o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
	//        y =        printf("the printf: %#5o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w > p \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#6.3o|%%#6.3o|%%#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
	//        y =        printf("the printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w < p\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#3.6o|%%#3.6o|%%#3.6o|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
	//        y =        printf("the printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#-3.6o|%%#-3.6o|%%#-3.6o||%%-#3.6o|%%-#3.6o|%%-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//        y =        printf("the printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag + #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#+-3.6o|%%#+-3.6o|%%#+-3.6o||%%-#+3.6o|%%-#+3.6o|%%+-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//        y =        printf("the printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #-: positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%-#6.3o|%%-#6.3o|%%-#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
	//        y =        printf("the printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag + #- : positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%+-#6.3o|%+-#6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
	//        y =        printf("the printf: |%+-#6.3o|%+-#6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%-#15.10o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%-#15.10o|\n", 42, 42, 42, 42);
	//        y =        printf("the printf: |%-#15.10o|\n", 42, 42, 42, 42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%-#5o|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	//    	x =     ft_printf("my  printf: |%-#5o|\n", 42, 42, 42, 42);
	//        y =        printf("the printf: |%-#5o|\n", 42, 42, 42, 42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//
	//    	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%o|%%o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%o|%o|\n", 42, -42);
	//        y =        printf("the printf: |%o|%o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+o|%%+o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%+o|%+o|\n", 42, -42);
	//        y =        printf("the printf: |%+o|%+o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%4o|%%4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%4o|%4o|\n", 42, -42);
	//        y =        printf("the printf: |%4o|%4o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+4o|%%+4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%+4o|%+4o|\n", 42, -42);
	//        y =        printf("the printf: |%+4o|%+4o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%.4o|%%.4o|\033[0m arg: \033[36m 42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%.4o|%.4o|\n", 42, -42);
	//        y =        printf("the printf: |%.4o|%.4o|\n", 42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+.4o|%%+.4o|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%+.4o|%+.4o|\n", 4242, -42);
	//        y =        printf("the printf: |%+.4o|%+.4o|\n", 4242, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%2.4o|%%2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%2.4o|%2.4o|\n", 21, -21);
	//        y =        printf("the printf: |%2.4o|%2.4o|\n", 21, -21);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+ 2.4o|%%+ 2.4o|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%+ 2.4o|%+ 2.4o|\n", 21, -21);
	//        y =        printf("the printf: |%+ 2.4o|%+ 2.4o|\n", 21, -21);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%09.2olol|%%09.2olol|%%09.2olol|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	//    	x =     ft_printf("my  printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
	//        y =        printf("the printf: |%09.2olol|%09.2olol|%09.2olol|\n", 1, 150, -15);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//        ft_putchar('\n');
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m %%-09.3olol|%%-09.3o|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	//    	x =     ft_printf("my  printf: |%-09.4olol|%-09.3o|\n", -15, 1512);
	//        y =        printf("the printf: |%-09.4olol|%-9.3o|\n", -15, 1512);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//        ft_putchar('\n');
	//
	//        printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%4.2o|%%-4.2o|\033[0m arg: \033[36m 32, -32\033[0m \n");
	//    	x =     ft_printf("my  printf: |%4.2o|%-4.2o|\n", 32, -32);
	//        y =        printf("the printf: |%4.2o|%-4.2o|\n", 32, -32);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag - : positive and neg,  w < p\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m %%-4.9o |%%4.9o |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	//    	x =     ft_printf("my  printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
	//        y =        printf("the printf: |%-4.9o |%4.9o |%4.9o |\n", -15, -15, 15124);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, no specifier\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%o|%%#o|%%#o|%%#o|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
	//        y =        printf("the printf: |%o|%#o|%#o|%#o|\n", 42, 142, 542, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#o|%%#5 o|%%#.5o|%%#o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	//    	x =     ft_printf("my  printf: %#o|%#5o|%#.5o|%#.5d|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
	//        y =        printf("the printf: %#o|%#5o|%#.5o|%#.5d|%#o|%#5o|%#.5o|\n", 42, 42, 42, 42, -42, -42, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, withd only, precision only, equal len\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#5o|%%#.5o|%%#5o|%%#.5o|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	//    	x =     ft_printf("my  printf: |%#o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
	//        y =        printf("the printf: |%#o|%#.5o|%#5o|%#.5o|\n", 42121, 42121, -4212, -4212);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w > p \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#6.3o|%%#6.3o|%%#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
	//        y =        printf("the printf: |%#6.3o|%#6.3o|%#6.3o|\n", 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #: positive and negative, w < p\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#3.6o|%%#3.6o|%%#3.6o|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
	//        y =        printf("the printf: |%#3.6o|%#3.6o|%#3.6o|\n", 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#-3.6o|%%#- 3.6o|%%#- 3.6o||%%- #3.6o|%%- #3.6o|%%-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//        y =        printf("the printf: |%#-3.6o|%#-3.6o|%#-3.6o||%-#3.6o|%-#3.6o|%-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag + #-: pos and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%#+-3.6o|%%#+-3.6o|%%#+-3.6o||%%-#+3.6o|%%-#+3.6o|%%+-#3.6o|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//        y =        printf("the printf: |%#+-3.6o|%#+-3.6o|%#+-3.6o||%-#+3.6o|%-+#3.6o|%+-#3.6o|\n", 42, 424, -42, 42, 424, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #-: positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%-#6.3o|%%-#6.3o|%%-#6.3o|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
	//        y =        printf("the printf: |%-#6.3o|%-#6.3o|%-#6.3o|%-#6.3o|\n", 42, 424, 424536, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag + #- : positive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|%%+-#6.3o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%+ -#6.3o|%+- #6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
	//        y =        printf("the printf: |%+ -#6.3o|%+- #6.3o|%+-#6.3o|%+-#6.3o|\n", 42, 424, 424536, -42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%-#15.10o|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	//    	x =     ft_printf("my  printf: |%-#15.10o|\n", 42, 42, 42, 42);
	//        y =        printf("the printf: |%-#15.10o|\n", 42, 42, 42, 42);
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%-#5o|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	//    	x =     ft_printf("my  printf: |%-#5o|\n", 42, 42, 42, 42);
	    //    y =        printf("the printf: |%-#5o|\n", 42, 42, 42, 42);
	   	// printf("my  printf return = %d\n", x);
	   	// printf("the printf return = %d\n", y);
	   	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
		//
	   	// printf("===============  \033[33mTEST %d | Flag #- : positive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	    //    printf("test: \033[36m t%%04.2o|%%#2oet %%#-8.3o titi %%%%%%04.2o|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	   	// x =     ft_printf("%%%%04.2o|%%%#2oet %#-8.3o titi %%%04.4o|\n", 0, 0, 0, 0);
	    //    y =        printf("%%%%04.2o|%%%#2oet %#-8.3o titi %%%04.4o|\n", 0, 0, 0, 0);
	   	// printf("my  printf return = %d\n", x);
	   	// printf("the printf return = %d\n", y);
	   	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");


	i = 1;

	int a = 42;
	int	*p = &a;
	//
	//
	// printf("===============  \033[33mTEST %d | Ppinteur addr \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%% p|%%.20p|%%20p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |% p|%.20p|%20p|%30.20p|%20.30p|\n", p, p, p, p, p);
    // y =        printf("the printf: |% p|%.20p|%20p|%30.20p|%20.30p|\n", p, p, p, p, p);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// // char	str[6] = 'c';
	//
	// printf("===============  \033[33mTEST %d | String \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%p|%%.20p|%%20p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%p|%.20p|%20p|%30.20p|%20.30p|\n", str, str, str, str, str);
    // y =        printf("the printf: |%p|%.20p|%20p|%30.20p|%20.30p|\n", str, str, str, str, str);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | - and + \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%p|%%p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%p|%.20p|\n", p, p);
    // y =        printf("the printf: |%p|%.20p|\n", p, p);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// //
	//
    // printf("===============  \033[33mTEST %d | - and + \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%p|%%p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%p|%p|\n", 18446744073709551615, -42);
    // y =        printf("the printf: |%p|%p|\n", 18446744073709551615, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%+p|%%+p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%+p|%+p|\n", 42, -42);
    // y =        printf("the printf: |%+p|%+p|\n", 42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Witdh \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%5p|%%10p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%5p|%10p|\n", 42, -42);
    // y =        printf("the printf: |%5p|%10p|\n", 42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag + and Width \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%+4p|%%+4p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%+4p|%+4p|\n", 42, -42);
    // y =        printf("the printf: |%+4p|%+4p|\n", 42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Precisipn \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%.50p|%%.8p|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%.50p|%.8p|%.11p|\n", 42, -42, -42);
    // y =        printf("the printf: |%.50p|%.8p|%.11p|\n", 42, -42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag + and Precisipn \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%+.10p|%%+.4p|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%+.10p|%+.4p|\n", 42, -42);
    // y =        printf("the printf: |%+.10p|%+.4p|\n", 42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
    // printf("===============  \033[33mTEST %d | Width and Precisipn \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%3.10p|%%3.10p|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	// x =     ft_printf("my  printf: |%3.10p|%3.10p|\n", 21, -21);
    // y =        printf("the printf: |%3.10p|%3.10p|\n", 21, -21);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Width and Precisipn \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%p|%%7.3p|%%14.10p|\033[0m arg: \033[36m 21, 21, 21 \033[0m \n");
	// x =     ft_printf("my  printf: |%p|%7.3p|%14.10p|\n", 21, 21, 21);
    // y =        printf("the printf: |%p|%7.3p|%14.10p|\n", 21, 21, 21);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	//
    // printf("===============  \033[33mTEST %d | Width > Precisipn > l\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%p|%%9.2p|%%9.2p|%%9.2p|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	// x =     ft_printf("my  printf: |%p||%9.2p|%9.2p|\n", 1, 150, -15);
    // y =        printf("the printf: |%p||%9.2p|%9.2p|\n", 1, 150, -15);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
    // ft_putchar('\n');
	//
	//   printf("===============  \033[33mTEST %d | Width > Precisipn > l\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%p|%%9.2p|%%9.2p|%%9.2p|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	// x =     ft_printf("my  printf: |%9.2p|\n", 1, 1, 150, -15);
    // y =        printf("the printf: |%9.2p|\n", 1, 1, 150, -15);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
    // ft_putchar('\n');
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m %%-09.3plpl|%%-09.3p|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	// x =     ft_printf("my  printf: |%-010.4plpl|%-09.3p|\n", -15, 2);
    // y =        printf("the printf: |%-010.4plpl|%-09.3p|\n", -15, 2);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
    // ft_putchar('\n');
	//
    // printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%4.2p|%%-4.2p|\033[0m arg: \033[36m 32, -32\033[0m \n");
	// x =     ft_printf("my  printf: |%4.2p|%-4.2p|\n", 32, -32);
    // y =        printf("the printf: |%4.2p|%-4.2p|\n", 32, -32);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag - : ppsitive and neg,  w < p\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m %%-4.9p |%%4.9p |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	// x =     ft_printf("my  printf: |%-16.26p |%4.9p |%4.9p |\n", -15, -15, 15124);
    // y =        printf("the printf: |%-16.26p |%4.9p |%4.9p |\n", -15, -15, 15124);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, np specifier\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%p|%%#p|%%#p|%%#p|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	// x =     ft_printf("my  printf: |%p|%#p|%#p|%#p|\n", 42, 142, 542, -42);
    // y =        printf("the printf: |%p|%#p|%#p|%#p|\n", 42, 142, 542, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, withd pnly, precisipn pnly\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%#p|%%#5p|%%#.5p|%%#p|%%#5p|%%#.5p|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	// x =     ft_printf("my  printf: %#p|%#5p|%#.5p|%#.5d|%#p|%#5p|%#.5p|\n", 42, 42, 42, 42, -42, -42, -42);
    // y =        printf("the printf: %#p|%#5p|%#.5p|%#.5d|%#p|%#5p|%#.5p|\n", 42, 42, 42, 42, -42, -42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, withd pnly, precisipn pnly, equal len\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%#5p|%%#.5p|%%#5p|%%#.5p|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	// x =     ft_printf("my  printf: %#5p|%#.5p|%#5p|%#.5p|\n", 42121, 42121, -4212, -4212);
    // y =        printf("the printf: %#5p|%#.5p|%#5p|%#.5p|\n", 42121, 42121, -4212, -4212);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, w > p \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%#6.3p|%%#6.3p|%%#6.3p|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	// x =     ft_printf("my  printf: |%#6.3p|%#6.3p|%#6.3p|\n", 42, 424, -42);
    // y =        printf("the printf: |%#6.3p|%#6.3p|%#6.3p|\n", 42, 424, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag #: ppsitive and negative, w < p\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%#3.6p|%%#3.6p|%%#3.6p|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	// x =     ft_printf("my  printf: |%#3.6p|%#3.6p|%#3.6p|\n", 42, 424, -42);
    // y =        printf("the printf: |%#3.6p|%#3.6p|%#3.6p|\n", 42, 424, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag # -: pps and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%#-3.6p|%%#-3.6p|%%#-3.6p||%%-#3.6p|%%-#3.6p|%%-#3.6p|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	// x =     ft_printf("my  printf: |%#-3.6p|%#-3.6p|%#-3.6p||%-#3.6p|%-#3.6p|%-#3.6p|\n", 42, 424, -42, 42, 424, -42);
    // y =        printf("the printf: |%#-3.6p|%#-3.6p|%#-3.6p||%-#3.6p|%-#3.6p|%-#3.6p|\n", 42, 424, -42, 42, 424, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag + # -: pps and neg, w < p, flag -\033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%#+-3.6p|%%#+-3.6p|%%#+-3.6p||%%-#+3.6p|%%-#+3.6p|%%+-#3.6p|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	// x =     ft_printf("my  printf: |%#+-3.6p|%#+-3.6p|%#+-3.6p||%-#+3.6p|%-+#3.6p|%+-#3.6p|\n", 42, 424, -42, 42, 424, -42);
    // y =        printf("the printf: |%#+-3.6p|%#+-3.6p|%#+-3.6p||%-#+3.6p|%-+#3.6p|%+-#3.6p|\n", 42, 424, -42, 42, 424, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag # -: ppsitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%-#6.3p|%%-#6.3p|%%-#6.3p|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	// x =     ft_printf("my  printf: |%-#6.3p|%-#6.3p|%-#6.3p|%-#6.3p|\n", 42, 424, 424536, -42);
    // y =        printf("the printf: |%-#6.3p|%-#6.3p|%-#6.3p|%-#6.3p|\n", 42, 424, 424536, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | Flag + # - : ppsitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%+-#6.3p|%%+-#6.3p|%%+-#6.3p|%%+-#6.3p|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	// x =     ft_printf("my  printf: |%+-#6.3p|%+-#6.3p|%+-#6.3p|%+-#6.3p|\n", 42, 424, 424536, -42);
    // y =        printf("the printf: |%+-#6.3p|%+-#6.3p|%+-#6.3p|%+-#6.3p|\n", 42, 424, 424536, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("======lol=========  \033[33mTEST %d | Flag # - : ppsitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%-#15.10p|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	// x =     ft_printf("my  printf: |%-#15.10p|\n", 42, 42, 42, 42);
    // y =        printf("the printf: |%-#15.10p|\n", 42, 42, 42, 42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===p============  \033[33mTEST %d | Flag # - : ppsitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%-#5p|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	// x =     ft_printf("my  printf: |%-5p|\n", 42);
    // y =        printf("the printf: |%-5p|\n", 42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//
	// ft_printf("    moi = %-#25.12p|\n", 42);
	//    printf("pas moi = %-#25.12p|\n", 42);
	//
	// ft_printf("    moi = %-#25.12p|\n", 1);
	//    printf("pas moi = %-#25.12p|\n", 1);
	//
	// ft_printf("    moi = %-#25.12p|\n", 19786451);
	//    printf("pas moi = %-#25.12p|\n", 19786451);
	//
	// ft_printf("    moi = %-#25.7p|\n", 19786451);
	//    printf("pas moi = %-#25.7p|\n", 19786451);
	//
	// ft_printf("    moi = %-#25.6p|\n", 19786451);
	//    printf("pas moi = %-#25.6p|\n", 19786451);
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//    i = 1;
	//
	//    	printf("===============  \033[33mTEST %d | Precision 0 and Width \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	// 1
	//    	printf("===============  \033[33mTEST %d | Basic \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%s|%%slol|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!' \033[0m \n");
	//    	x =     ft_printf("my  printf: |%s|%slol|\n", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%s|%slol|\n", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//        printf("===============  \033[33mTEST %d | Width \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%15s|%%8s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%15s|%8s|\n", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%15s|%8s|\n", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Precision \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%.15s|%%.3s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%.15s|%.3s|\n", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%.15s|%.3s|\n", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//
	//    	printf("===============  \033[33mTEST %d | Precision 0 and Width \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%.s|%%.0s|%%18.s|%%18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%.s|%.0s|%18.s|%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%.s|%.0s|%18.s|%18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Precision 0 and Width | Flag - \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%.s|%%.0s||%%-18.s|%%-18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%.s|%.0s|%-18.s|%-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%.s|%.0s|%-18.s|%-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag - \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%-15s|%%-8s||%%-.15s|%%-.3s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%-15s|%-8s||%-.15s|%-.3s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%-15s|%-8s||%-.15s|%-.3s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag 0 \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%015s|%%08s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%015s|%08s|\n", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%015s|%08s|\n", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Precision 0 and Width | Flag 0 | Flag - \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%0.s|%%0.0s||%%018.s|%%018.0s||%%0-18.s|%%0-18.0s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |%0.s|%0.0s|%018.s|%018.0s|%0-18.s|%0-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//        y =        printf("the printf: |%0.s|%0.0s|%018.s|%018.0s|%0-18.s|%0-18.0s|\n", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%%15.4s|%%08.2s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x = ft_printf("my  printf: |%15.4s|%8.2s|\n", "Salut 123!", "Salut 123!");
	//     y =    printf("the printf: |%15.4s|%8.2s|\n", "Salut 123!", "Salut 123!");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//    	printf("===============  \033[33mTEST %d | Flag ' ' \033[0m  ===============\n\n", i++);
	//        printf("test: \033[36m |%% 15s|%% 08s|\033[0m arg: \033[36m 'Salut 123!', 'Salut 123!'\033[0m \n");
	//    	x =     ft_printf("my  printf: |% s|% 8s|\n", NULL, "\0");
	//        y =        printf("the printf: |% s|% 8s|\n", NULL, "\0");
	//    	printf("my  printf return = %d\n", x);
	//    	printf("the printf return = %d\n", y);
	//    	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//    	ft_putchar('\n');
	//
	//
	//
	//
	// 	ft_printf("    moi 1 = %s|\n", "Salut 123!");
	// 	   printf("pas moi 1 = %s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 2 = %-.s|\n", "Salut 123!");
	// 	   printf("pas moi 2 = %-.s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 3 = %-18.s|\n", "Salut 123!");
	// 	   printf("pas moi 3 = %-18.s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 4 = %-18.0s|\n", "Salut 123!");
	// 	   printf("pas moi 4 = %-18.0s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 5 = %8.2s|\n", "Salut 123!");
	// 	   printf("pas moi 5 = %8.2s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 6 = %08.2s|\n", "Salut 123!");
	// 	   printf("pas moi 6 = %08.2s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 7 = %0 12.20s|\n", "Salut 123!");
	// 	   printf("pas moi 7 = %0 12.20s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 8 = %0.20s|\n", "Salut 123!");
	// 	   printf("pas moi 8 = %0.20s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 9 = %030.2s|\n", "Salut 123!");
	// 	   printf("pas moi 9 = %030.2s|\n\n", "Salut 123!");
	//
	// 	ft_printf("    moi 10 = %0-30.2s|\n", "Salut 123!");
	// 	   printf("pas moi 10 = %0-30.2s|\n\n", "Salut 123!");

	i = 1;


	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%u|%%u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |%u|%u|\n", 42, -42);
	//     y =        printf("the printf: |%u|%u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%+u|%%+u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |%+u|%+u|\n", 42, -42);
	//     y =        printf("the printf: |%+u|%+u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%4u|%%4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |%4u|%4u|\n", 42, -42);
	//     y =        printf("the printf: |%4u|%4u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%+4u|%%+4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |%+4u|%+4u|\n", 42, -42);
	//     y =        printf("the printf: |%+4u|%+4u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%.4u|%%.4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |%.4u|%.4u|\n", 42, -42);
	//     y =        printf("the printf: |%.4u|%.4u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%+.4u|%%+.4u|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |%+.4u|%+.4u|\n", 4242, -42);
	//     y =        printf("the printf: |%+.4u|%+.4u|\n", 4242, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%2.4u|%%2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%2.4u|%2.4u|\n", 21, -21);
	//     y =        printf("the printf: |%2.4u|%2.4u|\n", 21, -21);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%+2.4u|%%+2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%+2.4u|%+2.4u|\n", 21, -21);
	//     y =        printf("the printf: |%+2.4u|%+2.4u|\n", 21, -21);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%09.2ulul|%%09.2ulul|%%09.2ulul|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	// 	x =     ft_printf("my  printf: |%09.2ulul|%09.2ulul|%09.2ulul|\n", 1, 150, -15);
	//     y =        printf("the printf: |%09.2ulul|%09.2ulul|%09.2ulul|\n", 1, 150, -15);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//     ft_putchar('\n');
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m %%-09.3ulul|%%-09.3u|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	// 	x =     ft_printf("my  printf: |%-09.4ulul|%-09.3u|\n", -15, 1512);
	//     y =        printf("the printf: |%-09.4ulul|%-9.3u|\n", -15, 1512);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//     ft_putchar('\n');
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%4.2u|%%-4.2u|\033[0m arg: \033[36m 32, -32\033[0m \n");
	// 	x =     ft_printf("my  printf: |%4.2u|%-4.2u|\n", 32, -32);
	//     y =        printf("the printf: |%4.2u|%-4.2u|\n", 32, -32);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag - : pusitive and neg,  w < p\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m %%-4.9u |%%4.9u |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	// 	x =     ft_printf("my  printf: |%-4.9u |%4.9u |%4.9u |\n", -15, -15, 15124);
	//     y =        printf("the printf: |%-4.9u |%4.9u |%4.9u |\n", -15, -15, 15124);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, nu specifier\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%u|%%#u|%%#u|%%#u|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |%u|%#u|%#u|%#u|\n", 42, 142, 542, -42);
	//     y =        printf("the printf: |%u|%#u|%#u|%#u|\n", 42, 142, 542, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%#u|%%#5u|%%#.5u|%%#u|%%#5u|%%#.5u|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: %#u|%#5u|%#.5u|%#.5d|%#u|%#5u|%#.5u|\n", 42, 42, 42, 42, -42, -42, -42);
	//     y =        printf("the printf: %#u|%#5u|%#.5u|%#.5d|%#u|%#5u|%#.5u|\n", 42, 42, 42, 42, -42, -42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly, equal len\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%#5u|%%#.5u|%%#5u|%%#.5u|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	// 	x =     ft_printf("my  printf: %#5u|%#.5u|%#5u|%#.5u|\n", 42121, 42121, -4212, -4212);
	//     y =        printf("the printf: %#5u|%#.5u|%#5u|%#.5u|\n", 42121, 42121, -4212, -4212);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w > p \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%#6.3u|%%#6.3u|%%#6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%#6.3u|%#6.3u|%#6.3u|\n", 42, 424, -42);
	//     y =        printf("the printf: |%#6.3u|%#6.3u|%#6.3u|\n", 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w < p\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%#3.6u|%%#3.6u|%%#3.6u|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%#3.6u|%#3.6u|%#3.6u|\n", 42, 424, -42);
	//     y =        printf("the printf: |%#3.6u|%#3.6u|%#3.6u|\n", 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%#-3.6u|%%#-3.6u|%%#-3.6u||%%-#3.6u|%%-#3.6u|%%-#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%#-3.6u|%#-3.6u|%#-3.6u||%-#3.6u|%-#3.6u|%-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	//     y =        printf("the printf: |%#-3.6u|%#-3.6u|%#-3.6u||%-#3.6u|%-#3.6u|%-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag + # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%#+-3.6u|%%#+-3.6u|%%#+-3.6u||%%-#+3.6u|%%-#+3.6u|%%+-#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%#+-3.6u|%#+-3.6u|%#+-3.6u||%-#+3.6u|%-+#3.6u|%+-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	//     y =        printf("the printf: |%#+-3.6u|%#+-3.6u|%#+-3.6u||%-#+3.6u|%-+#3.6u|%+-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # -: pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%-#6.3u|%%-#6.3u|%%-#6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%-#6.3u|%-#6.3u|%-#6.3u|%-#6.3u|\n", 42, 424, 424536, -42);
	//     y =        printf("the printf: |%-#6.3u|%-#6.3u|%-#6.3u|%-#6.3u|\n", 42, 424, 424536, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag + # - : pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%+-#6.3u|%%+-#6.3u|%%+-#6.3u|%%+-#6.3u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%+-#6.3u|%+-#6.3u|%+-#6.3u|%+-#6.3u|\n", 42, 424, 424536, -42);
	//     y =        printf("the printf: |%+-#6.3u|%+-#6.3u|%+-#6.3u|%+-#6.3u|\n", 42, 424, 424536, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%-#15.10u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%-#15.10u|\n", 42, 42, 42, 42);
	//     y =        printf("the printf: |%-#15.10u|\n", 42, 42, 42, 42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%-#5u|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	// 	x =     ft_printf("my  printf: |%-#5u|\n", 42, 42, 42, 42);
	//     y =        printf("the printf: |%-#5u|\n", 42, 42, 42, 42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	// Flag ' '
	//
	// 	    printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% u|%% u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |% u|% u|\n", 42, -42);
	//     y =        printf("the printf: |% u|% u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% +u|%% +u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |% +u|% +u|\n", 42, -42);
	//     y =        printf("the printf: |% +u|% +u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% 4u|%% 4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |% 4u|% 4u|\n", 42, -42);
	//     y =        printf("the printf: |% 4u|% 4u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% +4u|%% +4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |% +4u|% +4u|\n", 42, -42);
	//     y =        printf("the printf: |% +4u|% +4u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% .4u|%% .4u|\033[0m arg: \033[36m 42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |% .4u|% .4u|\n", 42, -42);
	//     y =        printf("the printf: |% .4u|% .4u|\n", 42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% +.4u|%% +.4u|\033[0m arg: \033[36m 4242, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |% +.4u|% +.4u|\n", 4242, -42);
	//     y =        printf("the printf: |% +.4u|% +.4u|\n", 4242, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% 2.4u|%% 2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	// 	x =     ft_printf("my  printf: |% 2.4u|% 2.4u|\n", 21, -21);
	//     y =        printf("the printf: |% 2.4u|% 2.4u|\n", 21, -21);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag +\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%+ 2.4u|%%+ 2.4u|\033[0m arg: \033[36m 21, -21 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%+ 2.4u|%+ 2.4u|\n", 21, -21);
	//     y =        printf("the printf: |%+ 2.4u|%+ 2.4u|\n", 21, -21);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% 09.2ulul|%% 09.2ulul|%% 09.2ulul|\033[0m arg: \033[36m 1, 150, -15\033[0m \n");
	// 	x =     ft_printf("my  printf: |% 09.2ulul|% 09.2ulul|% 09.2ulul|\n", 1, 150, -15);
	//     y =        printf("the printf: |% 09.2ulul|% 09.2ulul|% 09.2ulul|\n", 1, 150, -15);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//     ft_putchar('\n');
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m %% -09.3ulul|%% -09.3u|\033[0m arg: \033[36m -15, 1512\033[0m \n");
	// 	x =     ft_printf("my  printf: |% -09.4ulul|% -09.3u|\n", -15, 1512);
	//     y =        printf("the printf: |% -09.4ulul|% -9.3u|\n", -15, 1512);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//     ft_putchar('\n');
	//
	//     printf("===============  \033[33mTEST %d\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% 4.2u|%% -4.2u|\033[0m arg: \033[36m 32, -32\033[0m \n");
	// 	x =     ft_printf("my  printf: |% 4.2u|% -4.2u|\n", 32, -32);
	//     y =        printf("the printf: |% 4.2u|% -4.2u|\n", 32, -32);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag - : pusitive and neg,  w < p\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m %% -4.9u |%% 4.9u |\033[0m arg: \033[36m -15, -15, 15124\033[0m \n");
	// 	x =     ft_printf("my  printf: |% -4.9u |% 4.9u |% 4.9u |\n", -15, -15, 15124);
	//     y =        printf("the printf: |% -4.9u |% 4.9u |% 4.9u |\n", -15, -15, 15124);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, nu specifier\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% u|%%# u|%%# u|%%# u|\033[0m arg: \033[36m 42, 142, 542, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: |% u|%# u|%# u|%# u|\n", 42, 142, 542, -42);
	//     y =        printf("the printf: |% u|%# u|%# u|%# u|\n", 42, 142, 542, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%# u|%%#5 u|%%# .5u|%%# u|%%# 5u|%%# .5u|\033[0m arg: \033[36m 42, 42, 42, -42, -42, -42\033[0m \n");
	// 	x =     ft_printf("my  printf: %# u|%# 5u|%# .5u|%# .5d|%# u|%# 5u|%# .5u|\n", 42, 42, 42, 42, -42, -42, -42);
	//     y =        printf("the printf: %# u|%# 5u|%# .5u|%# .5d|%# u|%# 5u|%# .5u|\n", 42, 42, 42, 42, -42, -42, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, withd unly, precisiun unly, equal len\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%# 5u|%%# .5u|%%# 5u|%%# .5u|\033[0m arg: \033[36m 42121, 42121, -4212, -4212\033[0m \n");
	// 	x =     ft_printf("my  printf: %# 5u|%# .5u|%# 5u|%# .5u|\n", 42121, 42121, -4212, -4212);
	//     y =        printf("the printf: %# 5u|%# .5u|%# 5u|%# .5u|\n", 42121, 42121, -4212, -4212);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w > p \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%# 6.3u|%%# 6.3u|%%# 6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%# 6.3u|%# 6.3u|%# 6.3u|\n", 42, 424, -42);
	//     y =        printf("the printf: |%# 6.3u|%# 6.3u|%# 6.3u|\n", 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag #: pusitive and negative, w < p\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% #3.6u|%% #3.6u|%% #3.6u|\033[0m arg: \033[36m 42, 424, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |% #3.6u|% #3.6u|% #3.6u|\n", 42, 424, -42);
	//     y =        printf("the printf: |% #3.6u|% #3.6u|% #3.6u|\n", 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%# -3.6u|%%#- 3.6u|%%#- 3.6u||%%- #3.6u|%%- #3.6u|%% -#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |% #-3.6u|% #-3.6u|% #-3.6u||% -#3.6u|% -#3.6u|% -#3.6u|\n", 42, 424, -42, 42, 424, -42);
	//     y =        printf("the printf: |% #-3.6u|% #-3.6u|% #-3.6u||% -#3.6u|% -#3.6u|% -#3.6u|\n", 42, 424, -42, 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag + # -: pus and neg, w < p, flag -\033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%# +-3.6u|%%# +-3.6u|%%# +-3.6u||%% -#+3.6u|%% -#+3.6u|%% +-#3.6u|\033[0m arg: \033[36m 42, 424, -42, 42, 424, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |% #+-3.6u|% #+-3.6u|% #+-3.6u||% -#+3.6u|% -+#3.6u|% +-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	//     y =        printf("the printf: |% #+-3.6u|% #+-3.6u|% #+-3.6u||% -#+3.6u|% -+#3.6u|% +-#3.6u|\n", 42, 424, -42, 42, 424, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # -: pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% -#6.3u|%% -#6.3u|%% -#6.3u|\033[0m arg: \033[36m 42, 4242, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |% -#6.3u|% -#6.3u|% -#6.3u|% -#6.3u|\n", 42, 424, 424536, -42);
	//     y =        printf("the printf: |% -#6.3u|% -#6.3u|% -#6.3u|% -#6.3u|\n", 42, 424, 424536, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag + # - : pusitive and negative, w > p, flag - \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% +-#6.3u|%% +-#6.3u|%% +-#6.3u|%% +-#6.3u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |%+ -#6.3u|%+- #6.3u|% +-#6.3u|% +-#6.3u|\n", 42, 424, 424536, -42);
	//     y =        printf("the printf: |%+ -#6.3u|%+- #6.3u|% +-#6.3u|% +-#6.3u|\n", 42, 424, 424536, -42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%%-# 15.10u|\033[0m arg: \033[36m 42, 424, 424536, -42 \033[0m \n");
	// 	x =     ft_printf("my  printf: |% -#15.10u|\n", 42, 42, 42, 42);
	//     y =        printf("the printf: |% -#15.10u|\n", 42, 42, 42, 42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	ft_putchar('\n');
	//
	// 	printf("===============  \033[33mTEST %d | Flag # - : pusitive and negative, w > p && l > p \033[0m  ===============\n\n", i++);
	//     printf("test: \033[36m |%% -#5u|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	// 	x =     ft_printf("my  printf: |% -#5lu|\n", (unsigned long)-42);
	//     y =        printf("the printf: |% -#5lu|\n", (unsigned long)-42);
	// 	printf("my  printf return = %d\n", x);
	// 	printf("the printf return = %d\n", y);
	// 	y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// 	i = 1;
	//
	// printf("===============  \033[33mTEST %d | HEXADECIMAL \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%llx|%%lX|%%llx|%%hx|%%x|\033[0m arg: \033[36m 18446744073709551615, (uns long)-42, (uns long long)-42, (uns short)-42 \033[0m \n");
	// x =     ft_printf("my  printf: \n-%#20llx|\n-%#lx|\n-%#llx|\n-%#hx|\n-%#x\n", 18446744073709551615, (unsigned long int)45, (unsigned long long int)-42, (unsigned short int)-42, -42);
    // y =        printf("the printf: \n-%#20llx|\n-%#lx|\n-%#llx|\n-%#hx|\n-%#x\n", 18446744073709551615, (unsigned long int)45, (unsigned long long int)-42, (unsigned short int)-42, -42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | UNSIGNED INT \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%u|%%llu|%%hhu|%%lu|\033[0m arg: \033[36m (unsigned int)42, (unsigned long long int)42, (unsigned char)42 \033[0m \n");
	// x =     ft_printf("my  printf: |%-15u|%-30llu|%hhu|%lu|\n", (unsigned int)-42, (unsigned long long int)-42, (unsigned char)-42, 123456789101112);
    // y =        printf("the printf: |%-15u|%-30llu|%hhu|%lu|\n", (unsigned int)-42, (unsigned long long int)-42, (unsigned char)-42, 123456789101112);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// ft_putchar('\n');
	//
	// printf("===============  \033[33mTEST %d | OCTAL \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%o|%%llo|%%hho|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	// x =     ft_printf("my  printf: |%o|%30llo|%hho|\n", (unsigned int)-42, (unsigned long long int)-42, (unsigned char)-42);
    // y =        printf("the printf: |%o|%30llo|%hho|\n", (unsigned int)-42, (unsigned long long int)-42, (unsigned char)-42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	// printf("===============  \033[33mTEST %d | OCTAL \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%d|%%lld|%%hhd|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	// x =     ft_printf("my  printf: |%d|%lld|%hhd|\n", (signed int)-42, (signed long long int)-42, (signed char)-42);
    // y =        printf("the printf: |%d|%lld|%hhd|\n", (signed int)-42, (signed long long int)-42, (signed char)-42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//
	// printf("===============  \033[33mTEST %d | OCTAL \033[0m  ===============\n\n", i++);
    // printf("test: \033[36m |%%d|%%lld|%%hhd|\033[0m arg: \033[36m 42, 42, \033[0m \n");
	// x =     ft_printf("my  printf: |%x|%#-30.20llx|%hhx|\n", (unsigned int)-42, (unsigned long long int)-42, (unsigned char)-42);
    // y =        printf("the printf: |%x|%#-30.20llx|%hhx|\n", (unsigned int)-42, (unsigned long long int)-42, (unsigned char)-42);
	// printf("my  printf return = %d\n", x);
	// printf("the printf return = %d\n", y);
	// y == x ? printf(">>>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>>  \033[31mFAIL\033[0m  <<<<<<<<<<<<<<<<\n");
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//
	//





	return 0;
}
