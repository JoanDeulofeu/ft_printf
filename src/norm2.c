/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:37 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/14 15:30:11 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*pf_itoax(char *res, int i, t_s *s, int lgnb)
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

char		*ft_normpart4x(char *res, int i, t_s *s, unsigned long long nb)
{
	int u;
	int lgnb;

	lgnb = ft_dec_to_hex(s, nb);
	u = 0;
	if (s->f->point != TRUE || s->pres != 0 || nb != 0)
	{
		res = pf_itoax(res, i, s, lgnb);
		i += lgnb;
	}
	else
		u--;
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
	u = s->f->hash == TRUE ? u + 2 : u;
	while (u++ < s->champ - (s->pres > lgnb ? s->pres : lgnb))
		res[i++] = ' ';
	return (res);
}

int			ft_norm_u_more(t_s *s, int lgnb, unsigned long long nb, int u)
{
	if (s->pres != 0 && s->pres > lgnb)
		u += (nb == 0) ? s->pres : s->pres - lgnb;
	u = (s->f->neg == 1 || s->f->space == 1 || s->f->plus == 1) ? u + 1 : u;
	u = s->f->hash == TRUE ? u + 2 : u;
	u = (s->pres == 1 && nb == 0) ? u + 1 : u;
	return (u);
}
