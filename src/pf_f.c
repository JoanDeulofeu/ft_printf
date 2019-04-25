#include "../includes/ft_printf.h"

long double	ft_fpow(long double db, int power)
{
	long double i;
	long double tmp;

	i = 0;
	tmp = db;
	while (i++ < power)
		db *= tmp;
	return (db);
}

char		*pf_ftoa(char *res, int i, long double db, t_s *s)
{
	int u;
	int lgdb = ft_ldblen(db);
	long long tmp = 0;
	long double save = db;
	int pres;

	u = -1;
	pres = (s->pres == 0 ? 6 : s->pres);
	while (++u < lgdb - 1)
	{
		tmp = db / ft_fpow(10, lgdb - u - 2);
		res[i++] = tmp + 48;
		db -= tmp * ft_fpow(10, lgdb - u - 2);
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %d   db= %Lf\n", u, tmp, res[i - 1], db);
	}
	res[i++] = db + 48;
	if (s->f->point == TRUE && s->pres == 0)
		return (res);
	res[i++] = '.';
	tmp = db;
	db -= tmp;
	// printf("test ------->   %Lf\n", db);
	db *= ft_fpow(10, pres - 1);
	// printf("test ------->   %Lf\n", db);
	u = -1;
	while (++u < pres)
	{
		tmp = db / ft_fpow(10, pres - u - 2);
		res[i++] = tmp + 48;
		db -= tmp * ft_fpow(10, pres - u - 2);
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %d   db= %Lf\n", u, tmp, res[i - 1], db);
	}
	return (res);
}

// char		*ft_part1(t_s *s, char *res, int lgnb, long long nb)
// {
// 	int i;
// 	int u;
//
// 	i = 0;
	// u = 0;
	// if (!(res = (char *)malloc(sizeof(char) * (s->pres > lgnb ? s->pres : lgnb) + 2)))
	// 	exit(0);
	// ft_bzero(res, (s->pres > lgnb ? s->pres : lgnb) + 2);
	// if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
	// 	res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	// if (s->pres > lgnb)
	// 	while (u++ < s->pres - lgnb)
	// 		res[i++] = '0';
	// if (s->f->point != TRUE || s->pres != 0 || nb != 0)
	// 	res = pf_itoa(res, i, nb, lgnb);
	// return (res);
// }

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
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 2)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 2);
	u = (s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	if (s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->plus == TRUE ? '+' : ' ';
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
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 2)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 2);
	u = (s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - truelg))
		res[i++] = '0';
	if (s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->plus == TRUE ? '+' : ' ';
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
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 2)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 2);
	u = (s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	if (s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->plus == TRUE ? '+' : ' ';
	res = pf_ftoa(res, i, db, s);
	i += truelg;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	return (res);
}

char		*ft_pf_f(t_s *s, long double db)
{
	int		lgdb;
	char	*res;

	res = NULL;
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
















//lol
