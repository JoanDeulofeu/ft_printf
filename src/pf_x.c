#include "../includes/ft_printf.h"

char	 	*pf_itoax(char *res, int i, t_s *s, int lgnb)
{
	int u;

	u = 0;
	while (s->hex[u] == '\0')
		u++;
	while (u > 16)
		res[i++] = s->hex[u++];
	return (res);
}

void		ft_part4x(t_s *s, char *res, int lgnb, unsigned long long nb)
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
		res = pf_itoax(res, i, s, lgnb);
	i += lgnb;
	u = 0;
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < s->champ - (s->pres > lgnb ? s->pres : lgnb))
		res[i++] = ' ';
	// ft_putstr(res);
	printf("%s",res);
}

void		ft_part3x(t_s *s, char *res, int lgnb, unsigned long long nb)
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
		res = pf_itoax(res, i, s, lgnb);
	// ft_putstr(res);
	printf("%s",res);
}

void		ft_part2x(t_s *s, char *res, int lgnb, unsigned long long nb)
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
		res = pf_itoax(res, i, s, lgnb);
	// ft_putstr(res);
	printf("%s",res);
}

void		ft_part1x(t_s *s, char *res, int lgnb, unsigned long long nb)
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
		res = pf_itoax(res, i, s, lgnb);
	// ft_putstr(res);
	printf("%s",res);
}

void		ft_pf_x(t_s *s, unsigned long long nb)
{
	int		lgnb;
	char	*res;

	lgnb = ft_dec_to_hex(s, nb);
	if (s->f->moins == FALSE)
	{
		if (s->pres >= s->champ)
			ft_part1x(s, res, lgnb, nb);
		else if (s->champ > s->pres && s->f->zero == FALSE)
			ft_part2x(s, res, lgnb, nb);
		else
			ft_part3x(s, res, lgnb, nb);
	}
	else
	{
		if (s->pres >= s->champ)
			ft_part1x(s, res, lgnb, nb);
		else
			ft_part4x(s, res, lgnb, nb);
	}
}












//lol
