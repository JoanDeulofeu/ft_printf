/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm_f.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:33 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/13 17:56:34 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char		*ft_round_ldb(t_s *s, long double db, char *rs, int i)
{
	int round;

	round = db * 10;
	if (round > 4)
	{
		rs[i] += rs[i] == 57 ? -9 : 1;
		rs = ft_normround(s, rs, i);
	}
	return (rs);
}

t_norm		ft_normftoa(t_norm n)
{
	while (++n.u < n.lgdb - 1)
	{
		n.tmp = n.db / ft_fpow(10, n.lgdb - n.u - 2);
		if (n.db != n.save || n.tmp != 0)
			n.res[n.i++] = n.tmp + 48;
		n.db -= n.tmp * ft_fpow(10, n.lgdb - n.u - 2);
	}
	n.res[n.i++] = n.db + 48;
	n.tmp = n.db;
	n.db -= n.tmp;
	return (n);
}

t_norm		ft_normftoa2(t_norm n)
{
	n.res[n.i++] = '.';
	n.db *= ft_fpow(10, n.ps - 1);
	n.u = -1;
	while (++n.u < n.ps)
	{
		n.tmp = n.db / ((n.ps - n.u - 2) > -1
		? ft_fpow(10, n.ps - n.u - 2) : 1);
		n.res[n.i++] = n.tmp + 48;
		n.db -= n.tmp * ((n.ps - n.u - 2) > -1
		? ft_fpow(10, n.ps - n.u - 2) : 1);
	}
	return (n);
}

char		*pf_ftoa(char *res, int i, long double db, t_s *s)
{
	t_norm			n;

	n.u = -1;
	n.lgdb = ft_ldblen(db);
	n.tmp = 0;
	n.save = db;
	n.ps = (s->pres == 0 ? 6 : s->pres);
	n.res = res;
	n.i = i;
	n.db = db;
	n = ft_normftoa(n);
	if (s->f->point == TRUE && s->pres == 0)
	{
		if (s->f->hash == TRUE)
			n.res[n.i] = '.';
		return (ft_round_ldb(s, n.db, n.res, n.i - 1));
	}
	n = ft_normftoa2(n);
	return (ft_round_ldb(s, n.db, n.res, n.i - 1));
}
