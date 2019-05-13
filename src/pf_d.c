#include "../includes/ft_printf.h"

long long	ft_pow(long long nb, int power)
{
	long long i;
	long long tmp;

	i = 0;
	tmp = nb;
	while (i++ < power)
		nb *= tmp;
	return (nb);
}

char		*pf_itoa(char *res, int i, long long nb, int lgnb)
{
	int u;

	u = -1;
	if (nb < -9223372036854775807)
	{
		res[i++] = '9';
		nb = 223372036854775808;
		lgnb = ft_nbrlen(nb);
	}
	while (++u < lgnb - 1)
		res[i++] = (nb / ft_pow(10, lgnb - u - 2) % 10) + 48;
	res[i++] = (nb % 10) + 48;
	return (res);
}

char		ft_normsign(t_s *s)
{
	char res;

	res = '\0';
	if (s->f->neg == TRUE || s->f->plus == TRUE)
		res = s->f->neg == TRUE ? '-' : '+';
	else if (s->f->space == TRUE)
		res = ' ';
	return (res);
}

char		*ft_part4(t_s *s, char *res, int lgnb, long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgnb ? s->champ : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	else
		i--;
	i += lgnb;
	u = 0;
	u = (s->f->neg == 1 || s->f->space == 1 || s->f->plus == 1) ? u + 1 : u;
	while (u++ < s->champ - (s->pres > lgnb ? s->pres : lgnb))
		res[i++] = ' ';
	return (res);
}

char		ft_normpart3(t_s *s, int mode)
{
	char	res;

	res = '\0';
	if (mode == 1)
	{
		if ((s->f->neg == TRUE || s->f->plus == TRUE)
		&& (s->f->point != TRUE || s->pres != 0))
			res = s->f->neg == TRUE ? '-' : '+';
		else if ((s->f->neg != TRUE && s->f->plus != TRUE) && s->f->space == 1
		&& (s->f->point != TRUE || s->pres != 0))
			res = ' ';
	}
	else
	{
		if ((s->f->neg == TRUE || s->f->plus == TRUE)
		&& (s->f->point == TRUE && s->pres == 0))
			res = s->f->neg == TRUE ? '-' : '+';
		else if ((s->f->neg != TRUE && s->f->plus != TRUE) && s->f->space == 1
		&& (s->f->point == TRUE && s->pres == 0))
			res = ' ';
	}
	return (res);
}

char		*ft_part3(t_s *s, char *res, int lgnb, long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgnb ? s->champ : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	if ((res[i] = ft_normpart3(s, 1)) != '\0')
		i++;
	u = (s->f->neg == 1 || s->f->space == 1 || s->f->plus == 1) ? u + 1 : u;
	while (u++ < s->champ - lgnb)
		res[i++] = (s->f->point == TRUE && s->pres == 0) ? ' ' : '0';
	if ((res[i] = ft_normpart3(s, 2)) != '\0')
		i++;
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	return (res);
}

char		*ft_part2(t_s *s, char *res, int lgnb, long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgnb ? s->champ : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 2);
	if (s->pres != 0 && s->pres > lgnb)
		u += s->pres - lgnb;
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - lgnb))
		res[i++] = ' ';
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	u = 0;
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	return (res);
}

char		*ft_part1(t_s *s, char *res, int lgnb, long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->pres > lgnb ? s->pres : lgnb) + 2)))
		exit(0);
	ft_bzero(res, (s->pres > lgnb ? s->pres : lgnb) + 2);
	if (s->f->neg == TRUE || s->f->plus == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : '+';
	if ((s->f->neg != TRUE && s->f->plus != TRUE) && s->f->space == TRUE)
		res[i++] = ' ';
	if (s->pres > lgnb)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoa(res, i, nb, lgnb);
	return (res);
}

char		*ft_pf_d(t_s *s, long long nb)
{
	int		lgnb;
	char	*res;

	res = NULL;
	s->f->neg = nb < 0 ? TRUE : FALSE;
	nb = nb < -9223372036854775807 ? nb : ft_absll(nb);
	lgnb = ft_nbrlen(nb);
	if (s->f->moins == FALSE)
	{
		if (s->pres >= s->champ)
			res = ft_part1(s, res, lgnb, nb);
		else if (s->champ > s->pres && s->f->zero == FALSE)
			res = ft_part2(s, res, lgnb, nb);
		else
			res = ft_part3(s, res, lgnb, nb);
	}
	else
	{
		if (s->pres >= s->champ)
			res = ft_part1(s, res, lgnb, nb);
		else
			res = ft_part4(s, res, lgnb, nb);
	}
	return (res);
}
