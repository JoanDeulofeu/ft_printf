#include "../includes/ft_printf.h"

int		ft_truelg(t_s *s, int lgdb)
{
	if (s->f->point == TRUE && s->pres == 0)
		return (lgdb);
	return (lgdb + 1 + (s->pres == 0 ? 6 : s->pres));
}

char	*ft_part1f(t_s *s, char *res, int lgdb, long double db)
{
	int i;
	int u;
	int truelg;

	truelg = ft_truelg(s, lgdb);
	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > truelg ? s->champ : truelg) + 6 + 3)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 3);
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
	u = (s->f->hash == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	res = pf_ftoa(res, i, db, s);
	return (res);
}

char	*ft_part2f(t_s *s, char *res, int lgdb, long double db)
{
	int i;
	int u;
	int truelg;

	truelg = ft_truelg(s, lgdb);
	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > truelg ? s->champ : truelg) + 6 + 3)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 3);
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	u = (s->f->hash == TRUE && s->pres == 0) ? u + 1 : u;
	while (u++ < (s->champ - truelg))
		res[i++] = '0';
	res = pf_ftoa(res, i, db, s);
	return (res);
}

char	*ft_part3f(t_s *s, char *res, int lgdb, long double db)
{
	int i;
	int u;
	int truelg;

	truelg = ft_truelg(s, lgdb);
	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
	* (s->champ > truelg ? s->champ : truelg) + 6 + 3)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 3);
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	res = pf_ftoa(res, i, db, s);
	i += truelg;
	i = ((s->f->hash == TRUE) ? i + 1 : i) + s->f->round;
	u = ((s->f->hash == TRUE) ? u + 1 : u) + s->f->round;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	return (res);
}

char		*ft_pf_f(t_s *s, long double db)
{
	int		lgdb;
	char	*res;

	res = NULL;
	s->f->neg = db < 0 ? TRUE : FALSE;
	db = db < 0 ? db * -1 : db;
	lgdb = ft_ldblen(db);
	if (s->f->moins == FALSE)
	{
		if (s->f->zero == FALSE)
			res = ft_part1f(s, res, lgdb, db);
		else
			res = ft_part2f(s, res, lgdb, db);
	}
	else
		res = ft_part3f(s, res, lgdb, db);
	return (res);
}
