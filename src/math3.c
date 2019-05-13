#include "../includes/ft_printf.h"

unsigned long long	ft_powu(unsigned long long nb, unsigned long long power)
{
	unsigned long long i;
	unsigned long long tmp;

	i = 0;
	tmp = nb;
	while (i++ < power)
		nb *= tmp;
	return (nb);
}

char				*pf_itoau(char *res, int i, unsigned long long nb, int lgnb)
{
	int u;

	u = -1;
	while (++u < lgnb - 1)
		res[i++] = (nb / ft_powu(10, lgnb - u - 2) % 10) + 48;
	res[i++] = (nb % 10) + 48;
	return (res);
}
