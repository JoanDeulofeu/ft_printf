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

char		*pf_itoau(char *res, int i, unsigned long long nb, int lgnb)
{
	int u;

	u = -1;
	// ft_putstr("lgnb = ");
	// ft_putnbr(lgnb);
	// ft_putstr("\n");
	while (++u < lgnb - 1)
	{
		// ft_putnbr((nb / ft_pow(10, lgnb - u - 2) % 10));
		// ft_putstr("  pow\n");
		res[i++] = (nb / ft_powu(10, lgnb - u - 2) % 10) + 48;
	}
	res[i++] = (nb % 10) + 48;
	return (res);
}

char		*ft_part4u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	// printf("PART4\n");
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
		res = pf_itoau(res, i, nb, lgnb);
	else
		i--;
	i += lgnb;
	u = 0;
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < s->champ - (s->pres > lgnb ? s->pres : lgnb))
		res[i++] = ' ';
	return(res);
}

char		*ft_part3u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	// printf("PART3\n");
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
		res = pf_itoau(res, i, nb, lgnb);
	return(res);
}

char		*ft_part2u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	// printf("PART2\n");
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	if (s->pres != 0 && s->pres > lgnb)
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
		res = pf_itoau(res, i, nb, lgnb);
	return(res);
}

char		*ft_part1u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	// printf("PART1\n");
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
		res = pf_itoau(res, i, nb, lgnb);
	return(res);
}

char		*ft_pf_u(t_s *s, unsigned long long nb)
{
	int		lgnb;
	char	*res;

	res = NULL;
	lgnb = ft_unbrlen(nb);
	if (s->f->moins == FALSE)
	{
		if (s->pres >= s->champ)
			res = ft_part1u(s, res, lgnb, nb);
		else if (s->champ > s->pres && s->f->zero == FALSE)
			res = ft_part2u(s, res, lgnb, nb);
		else
			res = ft_part3u(s, res, lgnb, nb);
	}
	else
	{
		if (s->pres >= s->champ)
			res = ft_part1u(s, res, lgnb, nb);
		else
			res = ft_part4u(s, res, lgnb, nb);
	}
	// write(1, "res = ", 6);
	// write(1, res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	// write(1, "|\n", 2);
	return (res);
}
