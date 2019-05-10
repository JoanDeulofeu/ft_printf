#include "../includes/ft_printf.h"

void	ft_print_param(t_s *s)
{
	printf("STR -- %s\n", s->str);
	printf("neg %d\nhash %d\nzero %d\npoint %d\nmoins %d\nplus %d\nel %d\nl_l %d\nach %d\nh_h %d\nbig_l %d\nspace %d\npctc %d\n", s->f->neg, s->f->hash, s->f->zero, s->f->point, s->f->moins, s->f->plus, s->f->el, s->f->l_l, s->f->ach, s->f->h_h, s->f->big_l, s->f->space, s->f->pctc);
	printf("pres %d\nchamp %d\n", s->pres, s->champ);
}

int		ft_reset_flags(t_s *s)
{
	s->f->hash = FALSE;
	s->f->xmaj = FALSE;
	s->f->zero = FALSE;
	s->f->moins = FALSE;
	s->f->plus = FALSE;
	s->f->point = FALSE;
	s->f->el = FALSE;
	s->f->big_l = FALSE;
	s->f->l_l = FALSE;
	s->f->ach = FALSE;
	s->f->h_h = FALSE;
	s->f->space = FALSE;
	s->f->neg = FALSE;
	s->f->pctc = FALSE;
	s->f->round = 0;
	s->pres = 0;
	s->champ = 0;
	ft_bzero(s->hex, 16);
	return (0);
}

int	ft_which_flags2(t_s *s, int i)
{
	if (s->str[i] == 'l')
	{
		if (s->str[i + 1] == 'l')
		{
			i++;
			s->f->l_l = TRUE;
		}
		else
			s->f->el = TRUE;
	}
	else if (s->str[i] == 'h')
	{
		if (s->str[i + 1] == 'h')
		{
			i++;
			s->f->h_h = TRUE;
		}
		else
			s->f->ach = TRUE;
	}
	return (i);
}

int	ft_which_flags(t_s *s, int i)
{
	if (s->str[i] == '#')
		s->f->hash = TRUE;
	else if (s->str[i] == '0')
		s->f->zero = TRUE;
	else if (s->str[i] == 'L')
		s->f->big_l = TRUE;
	else if (s->str[i] == '-')
		s->f->moins = TRUE;
	else if (s->str[i] == '+')
		s->f->plus = TRUE;
	else if (s->str[i] == ' ')
		s->f->space = TRUE;
	else if (s->str[i] == 'z')
		s->f->el = TRUE;
	else if (s->str[i] == 'j')
		s->f->l_l = TRUE;
	else if (s->str[i] == 'l' || s->str[i] == 'h')
		i = ft_which_flags2(s, i);
	return (i);
}

int		ft_precision(t_s *s, int i)
{
	s->pres = ft_atoi(&s->str[i + 1]);
	i += ft_nbrlen(s->pres);
	return (i);
}

int		ft_champ_size(t_s *s, int i)
{
	s->champ = ft_atoi(&s->str[i]);
	i += ft_nbrlen(s->champ);
	return (i - 1);
}

int		ft_loop2(t_s *s, int i)
{
	while (s->str[i] == '#' || s->str[i] == 'j' || s->str[i] == 'z'
	|| s->str[i] == '-' || s->str[i] == '+' || s->str[i] == 'l'
	|| s->str[i] == 'h' || s->str[i] == '.' || s->str[i] == ' '
	|| s->str[i] == 'L' || (s->str[i] >= '0'
	&& s->str[i] <= '9'))
	{
		if (s->str[i] == '#' || s->str[i] == '0' || s->str[i] == '-'
		|| s->str[i] == '+' || s->str[i] == 'l' || s->str[i] == ' '
		|| s->str[i] == 'L' || s->str[i] == 'h' || s->str[i] == 'j'
		|| s->str[i] == 'z')
			i = ft_which_flags(s, i);
		if (s->str[i] == '.')
			s->f->point = TRUE;
		if (s->str[i] == '.' && (s->str[i + 1] >= '0' && s->str[i + 1] <= '9'))
			i = ft_precision(s, i);
		else if (s->str[i] >= '1' && s->str[i] <= '9')
			i = ft_champ_size(s, i);
		i++;
	}
	return (i);
}

t_q_int	ft_loop1(t_s *s, t_q_int q, char *buff, char *str)
{
	q.tmp = ft_reset_flags(s);
	q.i = ft_loop2(s, ++q.i);
	if (s->str[q.i] == '\0')
		return (q);
	str = ft_find_conv(s, q.i);
	if (!(q.tmp = ft_strlen(str)))
	{
		if (s->str[q.i] != '\0' && s->f->pctc == FALSE && (s->str[q.i]
		!= 'x' || s->c->ulglg != 0) && s->str[q.i] != 's' && s->str[q.i] != 'o'
		&& (s->str[q.i] != 'd' && s->str[q.i] != 'i' && s->str[q.i] != 'u'
		&& s->str[q.i] != 'X'))
		{
			buff[q.bf++] = s->str[q.i];
			q.bf = (q.bf == 64) ? ft_emptybuff(s, buff) : q.bf;
			q.res++;
		}
	}
	else
		q.bf = ft_buffering(s, buff, q.bf, str);
	q.res = (s->f->pctc == TRUE && !q.tmp) ? q.res + 1 : q.res;
	q.res += q.tmp;
	return (q);
}

int		ft_loop(t_s *s)
{
	t_q_int q;
	char	buff[64];
	char	*str = NULL;

	q.i = -1;
	q.res = 0;
	q.tmp = 0;
	q.bf = 0;
	while (s->str[++q.i] != '\0')
	{
		if (s->str[q.i] != '%')
		{
			buff[q.bf++] = s->str[q.i];
			q.bf = (q.bf == 64) ? ft_emptybuff(s, buff) : q.bf;
			q.res++;
		}
		else
			q = ft_loop1(s, q, buff, str);
	}
	ft_display(s, buff, q.bf);
	return (q.res);
}

int	ft_printf(char *str, ...)
{
	t_s		s;
	t_flags	f;
	t_conv	c;
	int	i;

	i = 0;
	va_start(s.params, str);
	s.str = str;
	s.f = &f;
	s.c = &c;
	s.res = NULL;
	s.mllc = 1;
	s.pres = 0;
	s.champ = 0;
	i = ft_loop(&s);
	// ft_print_param(&s);
	return (i);
}
