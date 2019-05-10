#include "../includes/ft_printf.h"

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

int		ft_nbrlen(long long nb)
{
	int res;

	res = 1;
	if (nb > 999999999999999999)
		return (19);
	if (nb == 0)
		return (1);
	while (nb > 9)
	{
		nb /= 10;
		res++;
	}
	return (res);
}

int		ft_unbrlen(unsigned long long nb)
{
	int res;

	res = 1;
	if (nb == 0)
		return (1);
	while (nb > 9)
	{
		nb /= 10;
		res++;
	}
	return (res);
}

int		ft_ldblen(long double db)
{
	int res;

	res = 0;
	if (db == 0)
		return (1);
	while (db >= 1)
	{
		db /= 10;
		res++;
		if (res > 4935)
			return (4935);
	}
	return (res);
}

int		ft_plen(t_s *s, unsigned long long unb)
{
	int len = 0;
	int i = 0;

	ft_dec_to_hex(s, unb);
	while (s->hex[i] == '\0')
		i++;
	while (i++ < 16)
		len++;
	return (len);
}
