#include "../includes/ft_printf.h"

int		ft_dec_to_oct(int nb)
{
	int div;
	int mod;
	int res;
	int i;

	i = 1;
	mod = 0;
	res = 0;
	div = nb / 8;
	mod = nb % 8;
	res = mod;
	while (div > 0)
	{
		mod = div % 8;
		res += (i * 10) * mod;
		i *= 10;
		div = div / 8;
	}
	return (res);
}

int		ft_find_conv(t_s *s, int i)
{
	int nb;

	nb = va_arg(s->params, int);
	if (s->str[i] == 'o')
	{
		nb = ft_dec_to_oct(nb);
		s->f->plus = FALSE;
		s->f->space = FALSE;
	}
	if (s->str[i] == 'd' || s->str[i] == 'o')
	{
		// ft_putstr("worst conv\n");
		if (s->pres > 0 || s->f->moins == TRUE)
			s->f->zero = FALSE;
		ft_pf_d(s, nb);
		return (1);
	}
	return (0);
}
