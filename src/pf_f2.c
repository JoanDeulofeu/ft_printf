#include "../includes/ft_printf.h"

double	ft_fpow2(double db, int power)
{
	double i;
	double tmp;

	i = 0;
	tmp = db;
	while (i++ < power)
		db *= tmp;
	return (db);
}

int		ft_dblen(long double db)
{
	int res;

	res = 1;
	if (db == 0)
		return (1);
	while (db > 9)
	{
		db /= 10;
		res++;
	}
	return (res);
}

char	*ft_round_db(double db, char *res, int i)
{
	int round;

	round = db * 10;
	// printf("\nround = %d\n", round);
	if (round > 4)
	{
		res[i] += res[i] == 57 ? -9 : 1;
		while (res[i] == '0')
		{
			i--;
			if (res[i] == '.')
				i--;
			res[i] += 1;
		}

	}
	return (res);
}

char		*pf_ftoa2(char *res, int i, double db, t_s *s)
{
	int u;
	int lgdb = ft_dblen(db);
	long long tmp = 0;
	double save = db;
	int pres;

	u = -1;
	pres = (s->pres == 0 ? 6 : s->pres);
	while (++u < lgdb - 1)
	{
		tmp = db / ft_fpow2(10, lgdb - u - 2);
		res[i++] = tmp + 48;
		db -= tmp * ft_fpow2(10, lgdb - u - 2);
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %d   db= %f\n", u, tmp, res[i - 1], db);
	}
	res[i++] = db + 48;
	if (s->f->point == TRUE && s->pres == 0)
		return (res);
	res[i++] = '.';
	tmp = db;
	db -= tmp;
	// printf("test ------->   %f\n", db);
	db *= ft_fpow2(10, pres - 1);
	// printf("test ------->   %f\n", db);
	u = -1;
	while (++u < pres)
	{
		tmp = db / ((pres - u - 2) > -1 ? ft_fpow2(10, pres - u - 2) : 1);
		res[i++] = tmp + 48;
		db -= tmp * ((pres - u - 2) > -1 ? ft_fpow2(10, pres - u - 2) : 1);
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %d   db= %f\n", u, tmp, res[i - 1], db);
	}
	res = ft_round_db(db, res, i - 1);
	return (res);
}

char	*ft_part1f2(t_s *s, char *res, int lgdb, double db)
{
	printf("PART1\n");
	int i;
	int u;
	int truelg;

	truelg = ft_truelg(s, lgdb);
	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 2)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 2);
	// ft_printf("CHAMP=%d\nPRES=%d\nLGDB=%d\nTRUELG=%d\n", s->champ, s->pres, lgdb, truelg);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	res = pf_ftoa2(res, i, db, s);
	return (res);
}

char	*ft_part2f2(t_s *s, char *res, int lgdb, double db)
{
	printf("PART2\n");
	int i;
	int u;
	int truelg;

	truelg = ft_truelg(s, lgdb);
	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 2)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 2);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	while (u++ < (s->champ - truelg))
		res[i++] = '0';
	res = pf_ftoa2(res, i, db, s);
	return (res);
}

char	*ft_part3f2(t_s *s, char *res, int lgdb, double db)
{
	printf("PART3\n");
	int i;
	int u;
	int truelg;

	truelg = ft_truelg(s, lgdb);
	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 2)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 2);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	res = pf_ftoa2(res, i, db, s);
	i += truelg;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	return (res);
}

char		*ft_pf_f2(t_s *s, double db)
{
	int		lgdb;
	char	*res;

	res = NULL;
	s->f->neg = db < 0 ? TRUE : FALSE;
	db = db < 0 ? db * -1 : db;
	lgdb = ft_dblen(db);
	if (s->f->moins == FALSE)
	{
		if (s->f->zero == FALSE)
			res = ft_part1f2(s, res, lgdb, db);
		else
			res = ft_part2f2(s, res, lgdb, db);
	}
	else
		res = ft_part3f2(s, res, lgdb, db);
	return (res);
}
