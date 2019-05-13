/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:51 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/13 17:56:52 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_part1p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->pres > lgp ? s->pres : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->pres > lgp ? s->pres : lgp) + 3);
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
		return (res);
	if (s->pres > lgp)
		while (u++ < s->pres - lgp)
			res[i++] = '0';
	res = ft_add_hex(res, i, s);
	return (res);
}

char	*ft_part2p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgp ? s->champ : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgp ? s->champ : lgp) + 3);
	u = (s->f->point == TRUE && s->pres == 0 && unb == 0) ? u - 1 : u;
	while (u++ < s->champ - ((s->pres > lgp ? s->pres : lgp) + 2))
		res[i++] = ' ';
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
		return (res);
	u = 0;
	if (s->pres > lgp)
		while (u++ < s->pres - lgp)
			res[i++] = '0';
	res = ft_add_hex(res, i, s);
	return (res);
}

char	*ft_part3p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
		* (s->champ > lgp ? s->champ : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgp ? s->champ : lgp) + 3);
	while ((u++ < s->champ - lgp - 1) && (s->f->point == TRUE
		&& s->pres == 0 && unb == 0))
		res[i++] = ' ';
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
		return (res);
	while (u++ < s->champ - lgp - 1)
		res[i++] = '0';
	res = ft_add_hex(res, i, s);
	return (res);
}

char	*ft_part4p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
	* (s->champ > lgp ? s->champ : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgp ? s->champ : lgp) + 3);
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
	{
		u += 2;
		while (u++ < s->champ)
			res[i++] = ' ';
		return (res);
	}
	while ((s->pres > lgp) && u++ < s->pres - lgp)
		res[i++] = '0';
	res = ft_add_hex(res, i, s);
	u = s->champ - (s->champ - (s->pres > lgp ? s->pres : lgp) - 2);
	while (u++ < s->champ)
		res[i++ + lgp] = ' ';
	return (res);
}

char	*ft_pf_p(t_s *s, unsigned long long unb)
{
	int		lgp;
	char	*res;

	res = NULL;
	lgp = ft_plen(s, unb);
	if (s->f->moins == FALSE)
	{
		if (s->pres >= s->champ)
			res = ft_part1p(s, res, lgp, unb);
		else if (s->pres != 0 || s->f->zero == FALSE)
			res = ft_part2p(s, res, lgp, unb);
		else
			res = ft_part3p(s, res, lgp, unb);
	}
	else
	{
		if (s->pres >= s->champ)
			res = ft_part1p(s, res, lgp, unb);
		else
			res = ft_part4p(s, res, lgp, unb);
	}
	return (res);
}
