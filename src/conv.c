#include "../includes/ft_printf.h"

long long			ft_modif(t_s *s, long long nb)
{
	if (s->f->h_h == TRUE)
		nb = (char)va_arg(s->params, int);
	else if (s->f->ach == TRUE)
		nb = (short)va_arg(s->params, int);
	else if (s->f->l_l == TRUE)
		nb = va_arg(s->params, long long);
	else if (s->f->el == TRUE)
		nb = va_arg(s->params, long);
	else
		nb = va_arg(s->params, int);
	return (nb);
}

unsigned long long	ft_modif_unsign(t_s *s, unsigned long long nb)
{
	if (s->f->h_h == TRUE)
		nb = (unsigned char)va_arg(s->params, unsigned int);
	else if (s->f->ach == TRUE)
		nb = (unsigned short)va_arg(s->params, unsigned int);
	else if (s->f->l_l == TRUE)
		nb = va_arg(s->params, unsigned long long);
	else if (s->f->el == TRUE)
		nb = va_arg(s->params, unsigned long);
	else
		nb = va_arg(s->params, unsigned int);
	return (nb);
}

void				ft_find_arg(t_s *s, int i)
{
	if (s->str[i] == 'c')
		s->c->chr = (unsigned char)va_arg(s->params, int);
	else if (s->str[i] == 's')
		s->c->str = va_arg(s->params, char *);
	else if (s->str[i] == 'f' && s->f->big_l == TRUE)
		s->c->ldb = va_arg(s->params, long double);
	else if (s->str[i] == 'f' && s->f->big_l == FALSE)
		s->c->db = va_arg(s->params, double);
	else if (s->str[i] == 'p')
		s->c->unb = va_arg(s->params, unsigned long long);
	else if ((s->str[i] == 'd' || s->str[i] == 'i'))
		s->c->nb = ft_modif(s, s->c->nb);
	else if (s->str[i] == 'o' || s->str[i] == 'u'
		|| s->str[i] == 'x' || s->str[i] == 'X')
		s->c->unb = ft_modif_unsign(s, s->c->unb);
}

char				*ft_init_sconv(t_s *s)
{
	ft_bzero(s->hex, 16);
	s->c->chr = '\0';
	s->c->str = NULL;
	s->c->nb = 0;
	s->c->unb = 0;
	s->c->ldb = 0;
	return (NULL);
}

char				*ft_find_conv(t_s *s, int i)
{
	char				*res;

	res = ft_init_sconv(s);
	ft_find_arg(s, i);
	if (s->str[i] == 'u')
		res = ft_norm_u(res, s);
	else if (s->str[i] == 'x' || s->str[i] == 'X')
		res = ft_norm_x(res, s, i);
	else if ((s->str[i] == 'd' || s->str[i] == 'i') || s->str[i] == 'o')
		res = ft_norm_dio(res, s, i);
	else if (s->str[i] == 'c' || s->str[i] == '%')
		res = ft_norm_c(res, s, i);
	else if (s->str[i] == 's')
		res = ft_pf_s(s, s->c->str);
	else if (s->str[i] == 'f')
		res = ft_norm_f(res, s);
	else if (s->str[i] == 'p')
		res = ft_pf_p(s, s->c->unb);
	else
	{
		if (!(res = (char *)malloc(sizeof(char) * 1)))
			exit(0);
		res[0] = '\0';
	}
	return (res);
}
