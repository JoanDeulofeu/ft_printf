#include "../includes/ft_printf.h"

int		ft_pow(int nb, int power)
{
	int i;
	int tmp;

	i = 0;
	tmp = nb;
	while (i++ < power)
		nb *= tmp;
	return (nb);
}

char	*pf_itoa(char *res, int i, int nb, int lgnb)
{
	int u;

	u = -1;
	while (++u < lgnb - 1)
	{
		// ft_putnbr((nb / ft_pow(10, lgnb - u - 2) % 10));
		// ft_putstr("  pow\n");
		res[i++] = (nb / ft_pow(10, lgnb - u - 2) % 10) + 48;
	}
	res[i++] = (nb % 10) + 48;
	return (res);
}

void	ft_pf_d(t_s *s)
{
	int		nb;
	int		lgnb;
	int		i;
	char	*res;
	int		u;

	i = 0;
	u = 0;
	nb = va_arg(s->params, int);
	if (nb < 0)
		s->f->neg = TRUE;
	nb = ft_abs(nb);
	lgnb = ft_nbrlen(nb);
	// if (s->f->zero == TRUE)	// pas terrible
	// 	s->pres = s->champ;
	if (s->pres >= s->champ)
	{
		if (!(res = (char *)malloc(sizeof(char) * (s->pres > lgnb ? s->pres : lgnb) + 2)))
			exit(0);
		ft_bzero(res, (s->pres > lgnb ? s->pres : lgnb) + 2);
		if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
			res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
		if (s->pres > lgnb)
			while (u++ < s->pres - lgnb)
				res[i++] = '0';
		res = pf_itoa(res, i, nb, lgnb);
		ft_putstr(res);
	}
	else
	{
		if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 2)))
			exit(0);
		ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
		u += s->pres - lgnb;
		u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
		while (u++ < s->champ - lgnb)
			res[i++] = ' ';
		if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
			res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
		u = 0;
		if (s->pres > 0)
			while (u++ < s->pres - lgnb)
				res[i++] = '0';
		res = pf_itoa(res, i, nb, lgnb);
		ft_putstr(res);
	}
}
