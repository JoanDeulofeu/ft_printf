#include "../includes/ft_printf.h"

void	ft_reset_flags(t_s *s)
{
	s->f->hash = FALSE;
	s->f->zero = FALSE;
	s->f->moins = FALSE;
	s->f->plus = FALSE;
	s->f->point = FALSE;
	s->f->el = FALSE;
	s->f->l_l = FALSE;
	s->f->ach = FALSE;
	s->f->h_h = FALSE;
}

int		ft_nbrlen(int nb)
{
	int res;

	res = 1;
	while (nb > 10)
	{
		nb /= 10;
		res++;
	}
	return (res);
}

int		ft_precision(t_s *s, int i)
{
	s->pres = ft_atoi(&s->str[i]);
	i += ft_nbrlen(s->pres);
	return (i);
}

int	ft_which_flags(t_s *s, int i)
{
	if (s->str[i] == '#')
		s->f->hash = TRUE;
	else if (s->str[i] == '0')
		s->f->zero = TRUE;
	else if (s->str[i] == '-')
		s->f->moins = TRUE;
	else if (s->str[i] == '+')
		s->f->plus = TRUE;
	else if (s->str[i] == '.')
		s->f->point = TRUE;
	else if (s->str[i] == 'l')
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
	return (i + 1);
}

void	ft_loop(t_s *s, int ex)
{
	int i = -1;

	while (s->str[++i] != '\0')
	{
		if (s->str[i] != '%')
			ft_putchar(s->str[i]);
		else
		{
			if (s->str[i+1] == '%')
			{
				ft_putchar(s->str[i++]);
				continue ;
			}
			ft_reset_flags(s);
			i++;
			while (s->str[i] == '#' || s->str[i] == '0' || s->str[i] == '-'
			|| s->str[i] == '+' || s->str[i] == '.' || s->str[i] == 'l'
			|| s->str[i] == 'h')
				i = ft_which_flags(s, i);

			if (s->str[i] >= '1' && s->str[i] <= '9')
				i = ft_precision(s, i);

			if (s->f->plus == TRUE)
				ft_putchar('+');

			if (s->str[i] == 'd')
				ft_putnbr(ex);
		}
	}
}

void	ft_printf(char *str, int ex)
{
	t_s		s;
	t_flags	f;

	s.str = str;
	s.f = &f;
	s.pres = 0;
	ft_loop(&s, ex);
}
