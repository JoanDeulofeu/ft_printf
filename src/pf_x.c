#include "../includes/ft_printf.h"

char	 	*pf_itoax(char *res, int i, t_s *s, int lgnb)
{
	int u;

	u = 0;
	lgnb = 0;
	while (s->hex[u] == '\0')
		u++;
	while (u < 16)
		res[i++] = s->hex[u++];
	return (res);
}

char		*ft_part4x(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 4);
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	if (s->f->hash == TRUE)
	{
		res[i++] = '0';
		res[i++] = 'x';
	}
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	u = 0;
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
	{
		res = pf_itoax(res, i, s, lgnb);
		i += lgnb;
	}
	else
		u--;
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	u = s->f->hash == TRUE ? u + 2 : u;
	while (u++ < s->champ - (s->pres > lgnb ? s->pres : lgnb))
		res[i++] = ' ';
	return (res);
}

char		*ft_part3x(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 4);
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	if (s->f->hash == TRUE)
	{
		res[i++] = '0';
		res[i++] = 'x';
	}
	u = s->f->hash == TRUE ? u + 2 : u;
	while (u++ < s->champ - lgnb)
		res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoax(res, i, s, lgnb);
	return (res);
}

char		*ft_part2x(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgnb ? s->champ : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 4);
	if (s->pres != 0 && s->pres > lgnb)
		u += (nb == 0) ? s->pres : s->pres - lgnb;
	// printf("\nu=%d      lgnb=%d\n", u, lgnb);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	u = s->f->hash == TRUE ? u + 2 : u;
	u = (s->pres == 1 && nb == 0) ? u + 1 : u;
	// printf("\nu=%d   valeur=%d\n", u, (nb != 0 ? s->champ - lgnb : s->champ));
	while (u++ < (nb != 0 ? s->champ - lgnb : s->champ))
		res[i++] = ' ';
	// printf("\nu=%d\n", u);
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	u = 0;
	if (s->f->hash == TRUE)
	{
		res[i++] = '0';
		res[i++] = 'x';
	}
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoax(res, i, s, lgnb);
	return (res);
}

char		*ft_part1x(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->pres > lgnb ? s->pres : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->pres > lgnb ? s->pres : lgnb) + 4);
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	if (s->f->hash == TRUE)
	{
		res[i++] = '0';
		res[i++] = 'x';
	}
	if (s->pres > lgnb)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
		res = pf_itoax(res, i, s, lgnb);
	return (res);
}

char		*ft_pf_x(t_s *s, unsigned long long nb)
{
	int		lgnb;
	char	*res;

	res = NULL;
	lgnb = ft_dec_to_hex(s, nb);
	s->c->ulglg = nb;
	if (s->f->moins == FALSE)
	{
		if (s->pres >= s->champ)
			res = ft_part1x(s, res, lgnb, nb);
		else if (s->champ > s->pres && s->f->zero == FALSE)
			res = ft_part2x(s, res, lgnb, nb);
		else
			res = ft_part3x(s, res, lgnb, nb);
	}
	else
	{
		if (s->pres >= s->champ)
			res = ft_part1x(s, res, lgnb, nb);
		else
			res = ft_part4x(s, res, lgnb, nb);
	}
	if (s->f->xmaj == TRUE)
		res = ft_xmaj(res);
	return (res);
}












//lol
