#include "../includes/ft_printf.h"

char	*ft_xmaj(char *res)
{
	int i;

	i = -1;
	while (res[++i] != '\0')
	{
		if (res[i] == 'x' || (res[i] >= 97 && res[i] <= 102))
			res[i] = res[i] - 32;
	}
	return (res);
}

int		ft_dec_to_hex(t_s *s, unsigned long long nb)
{
	unsigned long long div;
	unsigned long long mod;
	int i;

	i = 15;
	div = nb / 16;
	mod = nb % 16;
	s->hex[i--] = mod < 10 ? mod + 48 : (mod - 10) + 97; // 97 = 'a'
	while (div > 0)
	{
		mod = div % 16;
		s->hex[i--] = mod < 10 ? mod + 48 : (mod - 10) + 97;
		// ft_putnbr(i);
		// ft_putstr("       <---- i\n");
		// ft_putchar(s->hex[12]);
		// ft_putstr("       <---- hex12\n");
		// ft_putchar(s->hex[13]);
		// ft_putstr("       <---- hex13\n");
		// ft_putchar(s->hex[14]);
		// ft_putstr("       <---- hex14\n");
		// ft_putchar(s->hex[15]);
		// ft_putstr("       <---- hex15\n");
		div = div / 16;
	}
	return (15 - i);
}

long long	ft_dec_to_oct(long long nb)
{
	long long div;
	long long mod;
	long long res;
	long long i;

	i = 1;
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

int			ft_find_conv(t_s *s, int i)
{
	long long nb;
	unsigned long long unb;

	ft_bzero(s->hex, 16);
	if (s->str[i] == 'd' || s->str[i] == 'o')
		nb = va_arg(s->params, long long);
	else if (s->str[i] == 'u' || s->str[i] == 'x' || s->str[i] == 'X')
		unb = va_arg(s->params, unsigned long long);
	if (s->str[i] == 'o')
	{
		nb = ft_dec_to_oct(nb);
		s->f->plus = FALSE;
		s->f->space = FALSE;
	}
	if (s->str[i] == 'u')
	{
		s->f->plus = FALSE;
		s->f->space = FALSE;
		ft_pf_u(s, unb);
		return (1);
	}
	else if (s->str[i] == 'x' || s->str[i] == 'X')
	{
		s->f->plus = FALSE;
		s->f->space = FALSE;
		if (s->str[i] == 'X')
			s->f->xmaj = TRUE;
		ft_pf_x(s, unb);
		return (1);
	}
	else if (s->str[i] == 'd' || s->str[i] == 'o')
	{
		// ft_putstr("worst conv\n");
		if (s->pres > 0 || s->f->moins == TRUE)
			s->f->zero = FALSE;
		ft_pf_d(s, nb);
		return (1);
	}
	return (0);
}
