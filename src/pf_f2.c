/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_f2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:47 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/13 17:56:49 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_part1f2(t_s *s, char *res, int lgdb, double db)
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

char	*ft_part2f2(t_s *s, char *res, int lgdb, double db)
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

char	*ft_part3f2(t_s *s, char *res, int lgdb, double db)
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

char	*ft_pf_f2(t_s *s, double db)
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
