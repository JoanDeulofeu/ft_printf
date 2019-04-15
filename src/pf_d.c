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
	if (nb == -2147483648)
	{
		res[i++] = '2';
		nb = 147483648;
		lgnb = ft_nbrlen(nb);
	}
	while (++u < lgnb - 1)
	{
		// ft_putnbr((nb / ft_pow(10, lgnb - u - 2) % 10));
		// ft_putstr("  pow\n");
		res[i++] = (nb / ft_pow(10, lgnb - u - 2) % 10) + 48;
	}
	res[i++] = (nb % 10) + 48;
	return (res);
}

void	ft_part4(t_s *s, char *res, int lgnb,  int nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	u += s->pres - lgnb;
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	u = 0;
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	i += lgnb;
	u = 0;
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < s->champ - (s->pres > lgnb ? s->pres : lgnb))
		res[i++] = ' ';
	// ft_putstr(res);
	printf("%s",res);
}

void	ft_part3(t_s *s, char *res, int lgnb,  int nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < s->champ - lgnb)
		res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	// ft_putstr(res);
	printf("%s",res);
}

void	ft_part2(t_s *s, char *res, int lgnb,  int nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	if (s->pres != 0)
		u += s->pres - lgnb;
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - lgnb))
		res[i++] = ' ';
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	u = 0;
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	// ft_putstr(res);
	printf("%s",res);
}

void	ft_part1(t_s *s, char *res, int lgnb,  int nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->pres > lgnb ? s->pres : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->pres > lgnb ? s->pres : lgnb) + 2);
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	if (s->pres > lgnb)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	// ft_putstr(res);
	printf("%s",res);
}

void	ft_pf_d(t_s *s, int nb)
{
	int		lgnb;
	char	*res;

	s->f->neg = nb < 0 ? TRUE : FALSE;
	nb = nb == -2147483648 ? nb : ft_abs(nb);
	lgnb = ft_nbrlen(nb);
	if (s->f->moins == FALSE)
	{
		if (s->pres >= s->champ)
			ft_part1(s, res, lgnb, nb);
		else if (s->champ > s->pres && s->f->zero == FALSE)
			ft_part2(s, res, lgnb, nb);
		else
			ft_part3(s, res, lgnb, nb);
	}
	else
	{
		if (s->pres >= s->champ)
			ft_part1(s, res, lgnb, nb);
		else
			ft_part4(s, res, lgnb, nb);
	}
}


















//lol
