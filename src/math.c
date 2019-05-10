#include "../includes/ft_printf.h"

long long			ft_absll(long long c)
{
	c = (c >= 0) ? c : (c * -1);
	return (c);
}

char				*ft_spacetozero(char *res)
{
	int i;

	i = 0;
	while (res[i] == ' ')
		res[i++] = '0';
	return (res);
}

char				*ft_hashzero(char *res)
{
	char	*tmp;
	int		i;

	i = 0;
	if (!(tmp = (char *)malloc(sizeof(char) * ft_strlen(res) + 2)))
		exit(0);
	ft_bzero(tmp, ft_strlen(res) + 2);
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
		i = (res[ft_strlen(res) - 1] == ' ') ? i - 1 : i;
		tmp[i] = '\0';
		res = tmp;
		ft_memdel((void **)&tmp);
	}
	return (res);
}

char				*ft_xmaj(char *res)
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

unsigned int		ft_dec_to_hex(t_s *s, unsigned long long nb)
{
	unsigned long long	div;
	unsigned long long	mod;
	int					i;

	i = 15;
	div = nb / 16;
	mod = nb % 16;
	s->hex[i--] = mod < 10 ? mod + 48 : (mod - 10) + 97;
	while (div > 0)
	{
		mod = div % 16;
		s->hex[i--] = mod < 10 ? mod + 48 : (mod - 10) + 97;
		div = div / 16;
	}
	return (15 - i);
}
