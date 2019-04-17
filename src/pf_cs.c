#include "../includes/ft_printf.h"

int		ft_pf_c(t_s *s, unsigned char chr)
{
	(void)s;
	printf("%c", chr);
	return (1);
}

int		ft_pf_s(t_s *s, char *str)
{
	(void)s;
	printf("%s", str);
	return (ft_strlen(str));
}
