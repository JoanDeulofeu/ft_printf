#include "../includes/ft_printf.h"

char		*ft_part4u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgnb ? s->champ : lgnb) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 3);
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoau(res, i, nb, lgnb);
	else
		i--;
	i += lgnb;
	u = 0;
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < s->champ - (s->pres > lgnb ? s->pres : lgnb))
		res[i++] = ' ';
	return (res);
}

char		*ft_part3u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgnb ? s->champ : lgnb) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 3);
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < s->champ - lgnb)
		res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoau(res, i, nb, lgnb);
	return (res);
}

char		*ft_part2u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgnb ? s->champ : lgnb) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 3);
	if (s->pres != 0 && s->pres > lgnb)
		u += s->pres - lgnb;
	while (u++ < (s->champ - lgnb))
		res[i++] = ' ';
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	u = 0;
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoau(res, i, nb, lgnb);
	return (res);
}

char		*ft_part1u(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->pres > lgnb ? s->pres : lgnb) + 3)))
		exit(0);
	ft_bzero(res, (s->pres > lgnb ? s->pres : lgnb) + 3);
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	if (s->pres > lgnb)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoau(res, i, nb, lgnb);
	return (res);
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
	return (res);
}
