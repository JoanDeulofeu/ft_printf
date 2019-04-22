#include "../includes/ft_printf.h"

long long	ft_absll(long long c)
{
	c = (c >= 0) ? c : (c * -1);
	return (c);
}

char		*ft_hashzero(char *res)
{
	char	*tmp;
	int i = 0;

	if (!(tmp = (char *)malloc(sizeof(char) * ft_strlen(res) + 2)))
		exit(0);
	while (res[i] == ' ' || res[i] == '0')
		i++;
	if (i > 0)
		res[i - 1] = '0';
	else
	{
		tmp[i++] = '0';
		while (res[i - 1] != '\0')
		{
			tmp[i] = res[i - 1];
			i++;
		}
		if (res[ft_strlen(res) - 1] == ' ')
			i--;
		tmp[i] = '\0';
		ft_memdel((void **)&res);
		res = tmp;
	}
	return (res);
}

char		*ft_xmaj(char *res)
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

long long	ft_modif(t_s *s, long long nb)
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
		nb = (char)va_arg(s->params, unsigned int);
	else if (s->f->ach == TRUE)
		nb = (short)va_arg(s->params, unsigned int);
	else if (s->f->l_l == TRUE)
		nb = va_arg(s->params, unsigned long long);
	else if (s->f->el == TRUE)
		nb = va_arg(s->params, unsigned long);
	else
		nb = va_arg(s->params, unsigned int);
	return (nb);
}

char		*ft_find_conv(t_s *s, int i)
{
	unsigned char		chr;
	char				*str;
	char				*res;
	long long			nb;
	unsigned long long	unb;

	ft_bzero(s->hex, 16);
	chr = '\0';
	str = NULL;
	nb = 0;
	res = NULL;
	unb = 0;

	if (s->str[i] == 'c')
		chr = (unsigned char)va_arg(s->params, int);
	else if (s->str[i] == 's')
		str = va_arg(s->params, char *);
	else if (s->str[i] == 'd' || s->str[i] == 'o')
		nb = ft_modif(s, nb);
	else if (s->str[i] == 'u' || s->str[i] == 'x' || s->str[i] == 'X')
		unb = ft_modif_unsign(s, unb);

	if (s->str[i] == 'o')
	{
		if (nb == 0)
			s->champ++;
		nb = ft_dec_to_oct(nb);
		s->f->plus = FALSE;
		s->f->space = FALSE;
	}

	if (s->str[i] == 'u')
	{
		s->f->plus = FALSE;
		s->f->space = FALSE;
		res = ft_pf_u(s, unb);
	}
	else if (s->str[i] == 'x' || s->str[i] == 'X')
	{
		s->f->plus = FALSE;
		s->f->space = FALSE;
		if (s->str[i] == 'X')
			s->f->xmaj = TRUE;
		if (unb == 0)
			s->f->hash = FALSE;
		res = ft_pf_x(s, unb);
	}
	else if (s->str[i] == 'd' || s->str[i] == 'o')
	{
		// if (nb == 0)
		// 	s->champ++;
		// ft_putstr("worst conv\n");
		if (s->pres > 0 || s->f->moins == TRUE)
			s->f->zero = FALSE;
		res = ft_pf_d(s, nb);
		if (s->f->hash == TRUE)
			res = ft_hashzero(res);
	}
	else if (s->str[i] == 'c' || s->str[i] == '%')
	{
		if (!(str = (char *)malloc(sizeof(char) * 1 + 1)))
			exit(0);
		if (s->str[i] == '%')
			chr = '%';
		str[0] = (char)chr;
		str[1] = '\0';
		if (str[0] == '\0')
			s->f->pctc = TRUE;
		res = ft_pf_s(s, str);
		ft_memdel((void **)&str);
	}
	else if (s->str[i] == 's')
		res = ft_pf_s(s, str);
	else
	{
		if (!(res = (char *)malloc(sizeof(char) * 1)))
			exit(0);
		res[0] = '\0';
	}
	return (res);
}
