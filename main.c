#include "includes/ft_printf.h"

int		main(int ac, char **av)
{
	(void)ac;
	(void)av;
	ft_printf("%+d\n", 51371);
	printf("%+d\n", 51371);
	return 0;
}
