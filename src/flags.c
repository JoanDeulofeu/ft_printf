#include "../includes/ft_printf.h"

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
