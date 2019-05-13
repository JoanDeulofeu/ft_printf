/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_x.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:58 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/13 17:57:00 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_part4x(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
	* (s->champ > lgnb ? s->champ : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 4);
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	if (s->f->hash == TRUE)
	{
		res[i++] = '0';
		res[i++] = 'x';
	}
	if (s->pres > 0)
		while (u++ < s->pres - lgnb)
			res[i++] = '0';
	ft_normpart4x(res, i, s, nb);
	return (res);
}

char		*ft_part3x(t_s *s, char *res, int lgnb, unsigned long long nb)
{
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char)
	* (s->champ > lgnb ? s->champ : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 4);
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	u = (s->f->neg == TRUE || s->f->space == TRUE
		|| s->f->plus == TRUE) ? u + 1 : u;
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
	if (!(res = (char *)malloc(sizeof(char)
	* (s->champ > lgnb ? s->champ : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->champ > lgnb ? s->champ : lgnb) + 4);
	u = ft_norm_u_more(s, lgnb, nb, u);
	while (u++ < (nb != 0 ? s->champ - lgnb : s->champ))
		res[i++] = ' ';
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
	u = 0;
	if (s->f->hash == TRUE)
		res[i++] = '0';
	if (s->f->hash == TRUE)
		res[i++] = 'x';
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
	if (!(res = (char *)malloc(sizeof(char)
		* (s->pres > lgnb ? s->pres : lgnb) + 4)))
		exit(0);
	ft_bzero(res, (s->pres > lgnb ? s->pres : lgnb) + 4);
	if ((res[i] = ft_normsign(s)) != '\0')
		i++;
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
