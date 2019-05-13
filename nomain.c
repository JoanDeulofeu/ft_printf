#include "../includes/ft_printf.h"

void	ft_print_param(t_s *s)
{
	printf("STR -- %s\n", s->str);
	printf("neg %d\nhash %d\nzero %d\npoint %d\nmoins %d\nplus %d\nel %d\nl_l %d\nach %d\nh_h %d\nbig_l %d\nspace %d\npctc %d\n", s->f->neg, s->f->hash, s->f->zero, s->f->point, s->f->moins, s->f->plus, s->f->el, s->f->l_l, s->f->ach, s->f->h_h, s->f->big_l, s->f->space, s->f->pctc);
	printf("pres %d\nchamp %d\n", s->pres, s->champ);
}

void	ft_reset_flags(t_s *s)
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
	s->pres = ft_atoi(&s->str[i+1]);
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
	|| s->str[i] == '-' || s->str[i] == '+' ||  s->str[i] == 'l'
	|| s->str[i] == 'h' || s->str[i] == '.' || s->str[i] == ' '
	|| s->str[i] == 'L' || (s->str[i] >= '0'
	&& s->str[i] <= '9'))
	{
		if (s->str[i] == '#' || s->str[i] == '0' || s->str[i] == '-'
		|| s->str[i] == '+' ||  s->str[i] == 'l' || s->str[i] == ' '
		|| s->str[i] == 'L' || s->str[i] == 'h'|| s->str[i] == 'j'
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

int		ft_loop(t_s *s)
{
	int		i = -1;
	int		res = 0;
	int		tmp = 0;
	int		bf = 0;
	char	buff[64];
	char	*str;

	while (s->str[++i] != '\0')
	{
		if (s->str[i] != '%')
		{
			buff[bf++] = s->str[i];
			bf = (bf == 64) ? ft_emptybuff(s, buff) : bf;
			res++;
		}
		else
		{
			ft_reset_flags(s);
			tmp = 0;
			i = ft_loop2(s, ++i);
			if (s->str[i] == '\0')
				break;
			str = ft_find_conv(s, i);
			tmp = ft_strlen(str);
			if (!(tmp) && s->str[i] != '\0' && s->f->pctc == FALSE && (s->str[i]
			!= 'x' || s->c->ulglg != 0) && s->str[i] != 's' && s->str[i] != 'o'
			&& (s->str[i] != 'd' && s->str[i] != 'i' && s->str[i] != 'u'
			&& s->str[i] != 'X'))
			{
				buff[bf++] = s->str[i];
				bf = (bf == 64) ? ft_emptybuff(s, buff) : bf;
				res++;
			}
			else
				bf = ft_buffering(s, buff, bf, str);
			res = (s->f->pctc == TRUE && !tmp) ? res + 1 : res;
			res += tmp;
		}
	}
	ft_display(s, buff, bf);
	return (res);
}

int	ft_printf(char *str, ...)
{
	t_s		s;
	t_flags	f;
	t_conv	c;
	int i = 0;

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
