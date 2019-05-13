#include "../includes/ft_printf.h"

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
	t_q_int	q;
	char	buff[64];
	char	*str;

	str = NULL;
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

int		ft_printf(char *str, ...)
{
	t_s		s;
	t_flags	f;
	t_conv	c;
	int		i;

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
	return (i);
}
