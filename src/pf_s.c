/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:54 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/15 17:43:26 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_part1s(t_s *s, char *res, int lgstr, char *str)
{
	int u;
	int o;
	int i;
	int szof;
	int lgmot;

	lgmot = (s->pres > 0 && s->pres < lgstr) ? s->pres : lgstr;
	szof = s->champ > lgmot ? s->champ : lgmot;
	u = 0;
	i = 0;
	o = -1;
	if ((s->pres > lgstr || s->pres == 0) && s->champ < lgstr)
		return (ft_strdup(str));
	if (!(res = (char *)malloc(sizeof(char)
		* (s->pres < lgstr ? s->pres : lgstr) + 20)))
		exit(0);
	ft_bzero(res, (s->pres < lgstr ? s->pres : lgstr) + 20);
	while (u++ < szof - lgmot)
		res[i++] = s->f->zero == TRUE ? '0' : ' ';
	while (u++ <= szof)
		res[i++] = str[o += o < lgstr ? 1 : 0];
	return (res);
}

char	*ft_part2s(t_s *s, char *res, int lgstr, char *str)
{
	int u;
	int i;
	int o;
	int szof;

	szof = s->champ > lgstr ? s->champ : lgstr;
	szof = s->pres != 0 ? s->champ : szof;
	u = -1;
	i = 0;
	o = 0;
	if (!(res = (char *)malloc(sizeof(char) * szof + 1)))
		exit(0);
	ft_bzero(res, szof + 1);
	while (++u < szof - ((s->pres > 0 && s->pres < lgstr) ? s->pres : lgstr))
		res[i++] = s->f->zero == TRUE ? '0' : ' ';
	while (u++ < szof)
		res[i++] = str[o++];
	return (res);
}

char	*ft_part3s(t_s *s, char *res, int lgstr, char *str)
{
	int u;
	int i;
	int o;
	int szof;
	int lgmot;

	lgmot = (s->pres > 0 && s->pres < lgstr) ? s->pres : lgstr;
	szof = s->champ > lgmot ? s->champ : lgmot;
	u = -1;
	i = 0;
	o = 0;
	if (!(res = (char *)malloc(sizeof(char) * szof + 1)))
		exit(0);
	ft_bzero(res, szof + 1);
	while (++u < szof - (szof - lgmot))
		res[i++] = str[o++];
	while (u++ < szof)
		res[i++] = ' ';
	return (res);
}

char	*ft_part5s(t_s *s, char *res)
{
	int i;

	i = 0;
	if (!(res = (char *)malloc(sizeof(char) * (1 + s->champ))))
		exit(0);
	ft_bzero(res, 1 + s->champ);
	while (s->champ > i)
		res[i++] = ' ';
	return (res);
}

char	*ft_pf_s(t_s *s, char *str)
{
	int		lgstr;
	char	*res;

	res = NULL;
	if (s->f->point == TRUE && s->pres == 0)
	{
		res = ft_part5s(s, res);
		return (res);
	}
	if (str == NULL)
		str = "(null)";
	lgstr = s->f->pctc == TRUE ? 1 : ft_strlen(str);
	if (ft_strcmp(str, "") == 0 && s->champ != 0)
		res = ft_strvide(s, res);
	else if (s->pres >= s->champ && s->f->moins == FALSE)
		res = ft_part1s(s, res, lgstr, str);
	else if (s->champ > s->pres && s->f->moins == FALSE)
		res = ft_part2s(s, res, lgstr, str);
	else
		res = ft_part3s(s, res, lgstr, str);
	if (s->f->chr == TRUE && s->c->chr != 0)
		ft_memdel((void **)&str);
	return (res);
}
