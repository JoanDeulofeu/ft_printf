/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_conv_norm.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:08 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/15 17:41:00 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	*ft_norm_u(char *res, t_s *s)
{
	if (s->f->point == TRUE)
		s->f->zero = FALSE;
	if (s->c->unb == 0 && s->f->point == TRUE && s->pres == 0)
		s->champ += 1;
	s->f->plus = FALSE;
	s->f->space = FALSE;
	res = ft_pf_u(s, s->c->unb);
	return (res);
}

char	*ft_norm_x(char *res, t_s *s, int i)
{
	if (s->f->point == TRUE)
		s->f->zero = FALSE;
	if (s->c->unb == 0 && s->f->point == FALSE && s->f->zero == FALSE
		&& s->f->moins == FALSE)
		s->champ -= 1;
	s->f->plus = FALSE;
	s->f->space = FALSE;
	if (s->str[i] == 'X')
		s->f->xmaj = TRUE;
	if (s->c->unb == 0)
		s->f->hash = FALSE;
	res = ft_pf_x(s, s->c->unb);
	return (res);
}

char	*ft_norm_dio(char *res, t_s *s, int i)
{
	if (s->str[i] == 'o')
	{
		s->c->unb = ft_dec_to_oct(s->c->unb);
		s->f->plus = FALSE;
		s->f->space = FALSE;
	}
	if (s->c->nb == 0 && (s->str[i] == 'd' || s->str[i] == 'i') && s->pres == 0
	&& s->f->point == TRUE)
		s->champ += 1;
	if (s->c->unb == 0 && s->str[i] == 'o' && s->f->point == TRUE
	&& s->pres == 0)
		s->champ += 1;
	if (s->pres > 0 || s->f->moins == TRUE)
		s->f->zero = FALSE;
	if ((s->str[i] == 'd' || s->str[i] == 'i'))
		s->f->hash = FALSE;
	if (s->f->point == TRUE && s->str[i] == 'o')
		s->f->zero = FALSE;
	res = (s->str[i] == 'd' || s->str[i] == 'i') ? ft_pf_d(s, s->c->nb)
	: ft_pf_u(s, s->c->unb);
	if (s->f->hash == TRUE && ((s->f->point == TRUE && s->pres == 0
		&& s->c->unb == 0) || s->c->unb != 0))
		res = ft_hashzero(res, NULL);
	return (res);
}

char	*ft_norm_c(char *res, t_s *s, int i)
{
	s->f->chr = TRUE;
	if (s->c->str)
		ft_memdel((void **)&s->c->str);
	if (!(s->c->str = (char *)malloc(sizeof(char) * (1 + 1))))
		exit(0);
	if (s->str[i] == '%')
		s->c->chr = '%';
	s->c->str[0] = (char)s->c->chr;
	s->c->str[1] = '\0';
	if (s->c->str[0] == '\0')
		s->f->pctc = TRUE;
	res = ft_pf_s(s, s->c->str);
	if (s->f->zero == TRUE)
		res = ft_spacetozero(res);
	if (s->c->chr == 0)
		ft_memdel((void **)&s->c->str);
	return (res);
}

char	*ft_norm_f(char *res, t_s *s)
{
	if (s->f->moins == TRUE)
		s->f->zero = FALSE;
	res = s->f->big_l == TRUE ? ft_pf_f(s, s->c->ldb) : ft_pf_f2(s, s->c->db);
	return (res);
}
