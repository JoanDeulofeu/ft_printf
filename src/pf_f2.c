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

int		ft_dblen(double db)
{
	int res;

	res = 0;
	if (db == 0)
		return (1);
	while (db >= 1)
	{
		// printf("ENTREE db = %f\n", db);
		db /= 10;
		res++;
		// printf("SORTIE db = %f\n", db);
	}
	return (res);
}

char	*ft_round_db(double db, char *res, int i)
{
	int round;
	int decal;

	decal = 0;
	// printf("db = %Lf\n", db);
	round = db * 10;
	// printf("round = %d\n", round);
	if (round > 4)
	{
		// printf("res[%d] = %c\n", i, res[i]);
		res[i] += res[i] == 57 ? -9 : 1;
		while (res[i] == '0')
		{
			// printf("res[%d] = %c\n", i, res[i]);
			i--;
			if (res[i] == '.')
				i--;
			// printf("--res[%d] = %c\n", i, res[i]);
			if (i >= 0 && (res[i] >= '0' && res[i] <= '9'))
				res[i] += (res[i] == 57) ? -9 : 1;
			else if (res[i] != ' ')
			{
				if (i < 1)
				{
					decal = 1;
					// printf("else res[%d] =%s\n", i, &res[i+1]);
					// printf("i     = %d\ndecal = %d \n", i, decal);
					// printf("else res[%d] = %c\n", 1, res[1]);
					ft_memmove(&res[i + decal + 2], &res[i + decal + 1], ft_strlen(&res[i + decal]));
					res[i + decal] = '1';
					// printf("else res[%d] =%s\n", i, &res[i+1]);
				}
				else
				{
					// printf("else res[%d] =%c\n", i, res[i]);
					res[i - 1] = res[i];
					res[i] = '1';
				}
			}
			else
				res[i] = '1';
		}
	}
	// printf("TEST = %s\n", res);
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
		tmp = db / ((lgdb - u - 2) > -1 ? ft_fpow2(10, lgdb - u - 2) : 1);
		if (db != save || tmp != 0)
			res[i++] = tmp + 48;
		db -= tmp * ((lgdb - u - 2) > -1 ? ft_fpow2(10, lgdb - u - 2) : 1);
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %d   db= %f\nres = %s\n", u, tmp, res[i - 1], db, res);
	}
	tmp = db / ((lgdb - u - 2) > -1 ? ft_fpow2(10, lgdb - u - 2) : 1);
	res[i++] = db + 48;
	db -= tmp;
	// printf("test ------->   %f\n", db);
	if (s->f->point == TRUE && s->pres == 0)
	{
		// printf("TEEEEEEEESSSSSST\n");
		if (s->f->hash == TRUE)
			res[i] = '.';
			printf("res = %s|\n", res);
		return (ft_round_db(db, res, i - 1));
	}
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
		// printf("\nTEST(%d) \ntmp= %lld   res[i]= %d   db= %f\nres = %s\n", u, tmp, res[i - 1], db, res);
	}
	res = ft_round_db(db, res, i - 1);
	return (res);
}

char	*ft_part1f2(t_s *s, char *res, int lgdb, double db)
{
	// printf("PART1\n");
	int i;
	int u;
	int truelg;

	truelg = ft_truelg(s, lgdb);
	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > truelg ? s->champ : truelg) + 6 + 3)))
		exit(0);
	ft_bzero(res, (s->champ > truelg ? s->champ : truelg) + 6 + 3);
	// ft_printf("CHAMP=%d\nPRES=%d\nLGDB=%d\nTRUELG=%d\n", s->champ, s->pres, lgdb, truelg);
	u = (s->f->neg == TRUE || s->f->space == TRUE || s->f->plus == TRUE) ? u + 1 : u;
	u = (s->f->hash == TRUE) ? u + 1 : u;
	while (u++ < (s->champ - truelg))
		res[i++] = ' ';
	if (s->f->neg == TRUE || s->f->plus == TRUE || s->f->space == TRUE)
		res[i++] = s->f->neg == TRUE ? '-' : s->f->plus == TRUE ? '+' : ' ';
	res = pf_ftoa2(res, i, db, s);
	return (res);
}

char	*ft_part2f2(t_s *s, char *res, int lgdb, double db)
{
	// printf("PART2\n");
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
	res = pf_ftoa2(res, i, db, s);
	return (res);
}

char	*ft_part3f2(t_s *s, char *res, int lgdb, double db)
{
	// printf("PART3\n");
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
	res = pf_ftoa2(res, i, db, s);
	i += truelg;
	i = (s->f->hash == TRUE) ? i + 1 : i;
	u = (s->f->hash == TRUE) ? u + 1 : u;
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
	// printf("len -------------- %d\n", lgdb);
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
