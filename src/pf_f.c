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

char	*ft_round_ldb(t_s *s, long double db, char *rs, int i)
{
	int round;

	round = db * 10;
	if (round > 4)
	{
		rs[i] += rs[i] == 57 ? -9 : 1;
		while (rs[i] == '0')
		{
			i = (rs[i - 1] == '.') ? i - 2 : i - 1;
			if (i >= 0 && (rs[i] >= '0' && rs[i] <= '9'))
				rs[i] += (rs[i] == 57) ? -9 : 1;
			else if (rs[i] != ' ')
			{
				if (i < 1)
				{
					ft_memmove(&rs[i + 3], &rs[i + 2], ft_strlen(&rs[i + 1]));
					rs[i + 1] = '1';
				}
				else
				{
					rs[i - 1] = rs[i];
					rs[i] = '1';
				}
				s->f->round++;
			}
			else
			{
				s->f->round++;
				rs[i] = '1';
			}
		}
	}
	return (rs);
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
		if (db != save || tmp != 0)
			res[i++] = tmp + 48;
		db -= tmp * ft_fpow(10, lgdb - u - 2);
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %d   db= %Lf\n", u, tmp, res[i - 1], db);
	}
	res[i++] = db + 48;
	tmp = db;
	db -= tmp;
	if (s->f->point == TRUE && s->pres == 0)
	{
		if (s->f->hash == TRUE)
			res[i] = '.';
		// printf("test=%s\n", res);
		return (ft_round_ldb(s, db, res, i - 1));
	}
	res[i++] = '.';
	// printf("test ------->   %Lf\n", db);
	db *= ft_fpow(10, pres - 1);
	// printf("test ------->   %Lf\n", db);
	u = -1;
	while (++u < pres)
	{
		tmp = db / ((pres - u - 2) > -1 ? ft_fpow(10, pres - u - 2) : 1);
		res[i++] = tmp + 48;
		db -= tmp * ((pres - u - 2) > -1 ? ft_fpow(10, pres - u - 2) : 1);
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %c   db= %Lf   calcul=%d\n", u, tmp, res[i - 1], db, pres - u - 2);
	}
	res = ft_round_ldb(s, db, res, i - 1);
	return (res);
}

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
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 3)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 3);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	u = (s->f->hash == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
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
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 3)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 3);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
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
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 3)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 3);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	res = pf_ftoa(res, i, db, s);
	i += truelg;
	// printf("res 2 = %s\n", res);
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
	// printf("len -------------- %d\n", lgdb);
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
