#include "../includes/ft_printf.h"
#include <limits.h>

int 	main()
{
	int		x;
	int		i;
	void	*p;
	int		y;
	float	f;
	long double lf;

	p = realloc;
	i = 1;
	f = 6;
	lf = 900.603665;

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
    y = ft_printf("Test avec %llx et aussi %llX egalement %llx fini %lx\n", 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807);
    x = printf("Test avec %llx et aussi %llX egalement %llx fini %lx\n", 18446744073709551615, 18446744073709551615, -9223372036854775808, 9223372036854775807);
    printf("retour de mon printf = \033[36m%d\033[0m\n", y);
    printf("retour de printf = \033[36m%d\033[0m\n", x);
    y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
    ft_putchar('\n');
	// 1
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y = ft_printf("Test avec %d et aussi %c fini\n", -42, 'G');
	x = printf("Test avec %d et aussi %c fini\n", -42, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %d et aussi %c fini\n", 42, 'G');
	x = printf("Test avec %d et aussi %c fini\n", 42, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y = ft_printf("Test avec %s et aussi %c fini\n", "que onda che", 'G');
	x = printf("Test avec %s et aussi %c fini\n", "que onda che", 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y = ft_printf("Test avec %19s et aussi %c fini\n", "que onda che", 'G');
	x = printf("Test avec %19s et aussi %c fini\n", "que onda che", 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

// 5
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y = ft_printf("Test avec %19.4s et aussi %c fini\n", "que onda che", 'G');
	x = printf("Test avec %19.4s et aussi %c fini\n", "que onda che", 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y = ft_printf("Test avec %-9.4d et aussi %c fini\n", -42, 'G');
	x = printf("Test avec %-9.4d et aussi %c fini\n", -42, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec % d et aussi %c fini\n", 728, 'G');
	x = printf("Test avec % d et aussi %c fini\n", 728, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-d et aussi %c fini\n", -42, 'G');
	x = printf("Test avec %-d et aussi %c fini\n", -42, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-4.5d et aussi %c fini\n", -42, 'G');
	x = printf("Test avec %-4.5d et aussi %c fini\n", -42, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

//10
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-4.1d et aussi %c fini\n", -42968, 'G');
	x = printf("Test avec %-4.1d et aussi %c fini\n", -42968, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %o et aussi %c fini\n", 3568, 'G');
	x = printf("Test avec %o et aussi %c fini\n", 3568, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %.9o et aussi %c fini\n", 3568, 'G');
	x = printf("Test avec %.9o et aussi %c fini\n", 3568, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-12.9o et aussi %c fini\n", 3568, 'G');
	x = printf("Test avec %-12.9o et aussi %c fini\n", 3568, 'G');
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %#o et aussi %c fini et puis %.d|\n", 3568, 'G', 0);
	x = printf("Test avec %#o et aussi %c fini et puis %.d|\n", 3568, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');
//15
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-#12o et aussi %c fini et puis %.d\n", 3568, 'G', 0);
	x = printf("Test avec %-#12o et aussi %c fini et puis %.d\n", 3568, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %#12.2o et aussi %c fini et puis %.d\n", -3568, 'G', 0);
	x = printf("Test avec %#12.2o et aussi %c fini et puis %.d\n", -3568, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d  =========18======\033[0m\n\n", i++);
	y =ft_printf("Test avec %#x et aussi %c fini et puis %.d\n", 3568, 'G', 0);
	x = printf("Test avec %#x et aussi %c fini et puis %.d\n", 3568, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %9.8x et aussi %c fini et puis %.d\n", 8598, 'G', 0);
	x = printf("Test avec %9.8x et aussi %c fini et puis %.d\n", 8598, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %#X et aussi %c fini et puis %.d\n", 58742, 'G', 0);
	x = printf("Test avec %#X et aussi %c fini et puis %.d\n", 58742, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');
//20
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-#19.9X et aussi %c fini et puis %.d\n", 15582, 'G', 0);
	x = printf("Test avec %#-19.9X et aussi %c fini et puis %.d\n", 15582, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST 22\033[0m  ===============||\n\n", i++);
	y =ft_printf("Test avec %#9.8X et aussi %c fini et puis %.d\n", 0, 'G', 0);
	x = printf("Test avec %#9.8X et aussi %c fini et puis %.d\n", 0, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
	ft_putchar('\n');

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-9.8x et aussi %c fini et puis %.d\n", 3568, 'G', 0);
	x = printf("Test avec %-9.8x et aussi %c fini et puis %.d\n", 3568, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %p et aussi %c fini et FROMAGE puis %.d\n", p, 'G', 0);
	x = printf("Test avec %p et aussi %c fini et FROMAGE puis %.d\n", p, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %% et aussi %c fini et puis %.d\n", 'G', 0);
	x = printf("Test avec %% et aussi %c fini et puis %.d\n", 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//25
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %u et aussi %c fini et puis %.d\n", 258, 'G', 0);
	x = printf("Test avec %u et aussi %c fini et puis %.d\n", 258, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-27.0f et aussi %c fini et puis %.d\n", -372.606256066, 'G', 0);
	x = printf("Test avec %-27.0f et aussi %c fini et puis %.d\n", -372.606256066, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %#-27.0f et aussi %c fini et puis %.d\n", -372.606256066, 'G', 0);
	x = printf("Test avec %#-27.0f et aussi %c fini et puis %.d\n", -372.606256066, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-27.0f et aussi %c fini et puis %.d\n", 32.606256066, 'G', 0);
	x = printf("Test avec %-27.0f et aussi %c fini et puis %.d\n", 32.606256066, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ==========????=====\n\n", i++);
	y =ft_printf("Test avec %#-27.0f et aussi %c fini et puis %.d\n", 372.506256066, 'G', 0);
	x = printf("Test avec %#-27.0f et aussi %c fini et puis %.d\n", 372.506256066, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
// 30
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %.13f et aussi %c fini et puis %.d\n", 0.00003000, 'G', 0);
	x = printf("Test avec %.13f et aussi %c fini et puis %.d\n", 0.00003000, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-f et aussi %c fini et puis %.d\n", 0.0001406256066968, 'G', 0);
	x = printf("Test avec %-f et aussi %c fini et puis %.d\n", 0.0001406256066968, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %27.4f et aussi %c fini et puis %.d\n", 372.406256066968, 'G', 0);
	x = printf("Test avec %27.4f et aussi %c fini et puis %.d\n", 372.406256066968, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %.8f et aussi %c fini et puis %.d\n", 3.777777777, 'G', 0);
	x = printf("Test avec %.8f et aussi %c fini et puis %.d\n", 3.777777777, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTTTTTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %0#27.16Lf et aussi %c fini et puis %.d\n", lf, 'G', 0);
	x = printf("Test avec %0#27.16Lf et aussi %c fini et puis %.d\n", lf, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
// 35
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %019.10f et aussi %c fini et puis %.d\n", -10.0003000, 'G', 0);
	x = printf("Test avec %019.10f et aussi %c fini et puis %.d\n", -10.0003000, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31m37TEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("Test avec %-+9.Lf et aussi %c fini et puis |%.d|\n", lf, 'G', 0);
	x = printf("Test avec %-+9.Lf et aussi %c fini et puis |%.d|\n", lf, 'G', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  =======38========\n\n", i++);
	y =ft_printf("Test avec %.13f et aussi %c fini et puis |%.d|\n", 3.1234567890122, '\0', 0);
	x = printf("Test avec %.13f et aussi %c fini et puis |%.d|\n", 3.1234567890122, '\0', 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%15.4d\n", 424242);
	x = printf("%15.4d\n", 424242);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  =========40======\n\n", i++);
	y =ft_printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	x = printf("{% 03d}{% 03d}{% 05d}{% 05d}{%03d}{%03d}{%05d}{%05d}\n", 0, 4, 0, 4, 0, 4, 0, 4);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
// 40
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%15.4d\n", -42);
	x = printf("%15.4d\n", -42);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  =============##########==\n\n", i++);
	y =ft_printf("%u\n", -1);
	x = printf("%u\n", -1);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%15.4d\n", -424242);
	x = printf("%15.4d\n", -424242);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%15.u\n", 8424242);
	x = printf("%15.u\n", 8424242);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ==45=============\n\n", i++);
	y =ft_printf("t %#7.5X %06.2X et %lX!\n", 0xab, 0x876, 0xff11ff11ff1);
	x = printf("t %#7.5X %06.2X et %lX!\n", 0xab, 0x876, 0xff11ff11ff1);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
// 45
	printf("===============  \033[31mTEST %d  ===============\033[0m\n\n", i++);
	y =ft_printf("t %07.5X %006.2X et %000lX!\n", 0xab, 0x876, 0xff11ff11ff1);
	x = printf("t %07.5X %006.2X et %000lX!\n", 0xab, 0x876, 0xff11ff11ff1);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%0#10.0x %0#x\n", 12345, 0);
	x = printf("%0#10.0x %0#x\n", 12345, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y = ft_printf("t%04.2o |%#2o| |%2oet %#-8.3o titi %%\n", 0, 0, 0, 0);
	x = printf("t%04.2o |%#2o| |%2oet %#-8.3o titi %%\n", 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("hello % .d this is a test\n", 0);
	x = printf("hello % .d this is a test\n", 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("allo %hho\n", (char)-50);
	x = printf("allo %hho\n", (char)-50);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
// 50
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("% 10.5d\n", 4242);
	x = printf("% 10.5d\n", 4242);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%00+10.4d|%+10.4d|%+10.4d|%+dd|\n", 0, 0, 2, -0);
	x = printf("%00+10.4d|%+10.4d|%+10.4d|%+dd|\n", 0, 0, 2, -0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%03.2d\n", -1);
	x = printf("%03.2d\n", -1);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%10.5Lf\n", lf);
	x = printf("%10.5Lf\n", lf);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("!% 0.6hhi!\n", (char)1147141248);
	x = printf("!% 0.6hhi!\n", (char)1147141248);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
// 55
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("!%02.19i!\n", (char)-2021849968);
	x = printf("!%02.19i!\n", (char)-2021849968);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("^.^/%0 .52i^.^/\n", (char)-1345575959);
	x = printf("^.^/%0 .52i^.^/\n", (char)-1345575959);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%0.29i\n", (char)-897535525);
	x = printf("%0.29i\n", (char)-897535525);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf(".lim1 %025.d\n", -214);
	x = printf(".lim1 %025.d\n", -214);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf(".1 %05.1d|\n", 42);
	x = printf(".1 %05.1d|\n", 42);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
// 60
	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%010.d|\n",3);
	x = printf("%010.d|\n",3);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf(".0 %05.0d|\n", 42);
	x = printf(".0 %05.0d|\n", 42);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("|||%05.d|\n", -15);
	x = printf("|||%05.d|\n", -15);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%26.4f |YES\n", (double)12999.999999999999999999999999);
	x = printf("%26.4f |YES\n", (double)12999.999999999999999999999999);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d\033[0m  ===============\n\n", i++);
	y =ft_printf("%-.5f |YES\n", (double)3.999999999);
	x = printf("%-.5f |YES\n", (double)3.999999999);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

// 65
	printf("++++++++++++++++++++ TESTS CHIANTS DECIMALS ++++++++++++++++\n\n");

	printf("===============  \033[31mTEST %d | Decimal with res 0  \033[0m  ===============\n\n", i++);
	y =ft_printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 );
	x = printf("|%-5.d|%-5.15d|%-5d|%5.15d|%15.5d|%-15.5d|%0.d|%0.0d|%.0d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | Decimal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |%.d|%d|%5d|%5.d|%-5.d|%5.3d|%3.5d|%-5.3d|%-3.5d| this is a test  |%.d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("hello |%.d|%d|%5d|%5.d|%-5.d|%5.3d|%3.5d|%-5.3d|%-3.5d| this is a test  |%.d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | Decimal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("|% -5.d|% -5.15d|% -5d|% 5.15d|% 15.5d|% -15.5d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("|% -5.d|% -5.15d|% -5d|% 5.15d|% 15.5d|% -15.5d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");
//70
	printf("===============  \033[31mTEST %d | Decimal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |% .d|% d|% 5d|% 5.d|% -5.d|% 5.3d|% 3.5d|% -5.3d|% -3.5d| this is a test  |% .d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	x = printf("hello |% .d|% d|% 5d|% 5.d|% -5.d|% 5.3d|% 3.5d|% -5.3d|% -3.5d| this is a test  |% .d|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("++++++++++++++++++++ TESTS CHIANTS  OCTAL ++++++++++++++++\n\n");

	printf("===============  \033[31mTEST %d | octal with res 0  \033[0m  ===============\n\n", i++);
	y =ft_printf("|%-5.o|%-5.15o|%-5o|%5.15o|%15.5o|%-15.5o|%0.o|%0.0o|%.0o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 );
	x = printf("|%-5.o|%-5.15o|%-5o|%5.15o|%15.5o|%-15.5o|%0.o|%0.0o|%.0o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");



	printf("===============  \033[31mTEST %d | octal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |%.o|%o|%5o|%5.o|%-5.o|%5.3o|%3.5o|%-5.3o|%-3.5o| this is a test  |%.o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("hello |%.o|%o|%5o|%5.o|%-5.o|%5.3o|%3.5o|%-5.3o|%-3.5o| this is a test  |%.o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");


	printf("===============  \033[31mTEST %d | octal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("|% -5.o|% -5.15o|% -5o|% 5.15o|% 15.5o|% -15.5o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	x = printf("|% -5.o|% -5.15o|% -5o|% 5.15o|% 15.5o|% -15.5o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | octal with res 0 | Flag ' ' \033[0m  ===============\n\n", i++);
	y =ft_printf("hello |%.o|% o|% 5o|% 5.o|% -5.o|% 5.3o|% 3.5o|% -5.3o|% -3.5o| this is a test  |% .o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	x = printf("hello |%.o|% o|% 5o|% 5.o|% -5.o|% 5.3o|% 3.5o|% -5.3o|% -3.5o| this is a test  |% .o|\n", 0, 0, 0, 0, 0, 0, 0, 0, 0, 15);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST CHIANTS VARIES \033[0m  ===============\n\n");

	printf("===============  \033[31mTEST %d | \033[0m  ===============\n\n", i++);
	y =ft_printf("lol%0#10.0x %0#x%%%%\n", 12345, 0);
	x = printf("lol%0#10.0x %0#x%%%%\n", 12345, 0);
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");

	printf("===============  \033[31mTEST %d | juste une string un peu complexe \033[0m  ===============\n\n", i++);
	y =ft_printf("%%%%0#10.0x %%%%0#x%%\n");
	x = printf("%%%%0#10.0x %%%%0#x%%\n");
	printf("retour de mon printf = \033[36m%d\033[0m\n", y);
	printf("retour de printf = \033[36m%d\033[0m\n", x);
	y == x ? printf(">>>>>>>>>>>>>>>  \033[32mOK\033[0m  <<<<<<<<<<<<<<<\n\n") : printf(">>>>>>>>>>>>>>>  \033[33mFAIL\033[0m  <<<<<<<<<<<<<<<\n\n");



	return(0);
}
