#include "../includes/ft_printf.h"

int		ft_plen(t_s *s, unsigned long long unb)
{
	int len = 0;
	int i = 0;

	ft_dec_to_hex(s, unb);
	while (s->hex[i] == '\0')
		// printf("i = %d\n", i++);
		i++;
	while (i++ < 16)
		// printf("i = %d\n", i);
		len++;
	// printf("lgp = %d\n", len);
	return (len);
}

char	*ft_part1p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	// printf("PART1\n");
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->pres > lgp ? s->pres : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->pres > lgp ? s->pres : lgp) + 3);
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
		return(res);
	if (s->pres > lgp)
		while (u++ < s->pres - lgp)
			res[i++] = '0';
	u = 0;
	while (s->hex[u] == '\0')
		u++;
	while (u < 16)
		res[i++] = s->hex[u++];
	return (res);
}

char	*ft_part2p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	// printf("PART2\n");
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgp ? s->champ : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgp ? s->champ : lgp) + 3);
	// printf("u = %d       len = %d\n", u, (s->pres > lgp ? s->pres : lgp) + 2);
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
		u--;
	while (u++ < s->champ - ((s->pres > lgp ? s->pres : lgp) + 2))
		res[i++] = ' ';
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
		return (res);
	u = 0;
	if (s->pres > lgp)
		while (u++ < s->pres - lgp)
			res[i++] = '0';
	u = 0;
	while (s->hex[u] == '\0')
		u++;
	while (u < 16)
		res[i++] = s->hex[u++];
	return (res);
}

char	*ft_part3p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	// printf("PART3\n");
	int i;
	int u;

	i = 0;
	u = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgp ? s->champ : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgp ? s->champ : lgp) + 3);
	// printf("u = %d       len = %d\n", u, (s->pres > lgp ? s->pres : lgp) + 2);
	while ((u++ < s->champ - lgp - 1) && (s->f->point == TRUE && s->pres == 0 && unb == 0))
		res[i++] = ' ';
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
		return (res);
	while (u++ < s->champ - lgp - 2)
		res[i++] = '0';
	u = 0;
	while (s->hex[u] == '\0')
		u++;
	while (u < 16)
		res[i++] = s->hex[u++];
	return (res);
}

char	*ft_part4p(t_s *s, char *res, int lgp, unsigned long long unb)
{
	printf("PART4\n");
	int i;
	int u;
	int o;

	i = 0;
	u = 0;
	o = 0;
	if (!(res = (char *)malloc(sizeof(char) * (s->champ > lgp ? s->champ : lgp) + 3)))
		exit(0);
	ft_bzero(res, (s->champ > lgp ? s->champ : lgp) + 3);
	// printf("u = %d       len = %d\n", u, (s->pres > lgp ? s->pres : lgp) + 2);
	res[i++] = '0';
	res[i++] = 'x';
	if (s->f->point == TRUE && s->pres == 0 && unb == 0)
	{
		u += 2;
		while (u++ < s->champ)
			res[i++] = ' ';
		return (res);
	}
	if (s->pres > lgp)
		while (u++ < s->pres - lgp)
			res[i++] = '0';
	o = u;
	u = 0;
	while (s->hex[u] == '\0')
		u++;
	while (u < 16)
		res[i++] = s->hex[u++];
	u = s->champ - (s->champ - (s->pres > lgp ? s->pres : lgp) - 2);
	// printf("u = %d = %d - %d - %d\n",  s->champ - (s->pres > lgp ? s->pres : lgp) - 2, s->champ, (s->pres > lgp ? s->pres : lgp), 2);
	while (u++ < s->champ)
		res[i++] = ' ';
	return (res);
}

char	*ft_pf_p(t_s *s, unsigned long long unb)
{
	int		lgp;
	char	*res;

	res = NULL;
	lgp = ft_plen(s, unb);
	if (s->f->moins == FALSE)
	{
		if (s->pres >= s->champ)
			res = ft_part1p(s, res, lgp, unb);
		else if (s->pres != 0 || s->f->zero == FALSE)
			res = ft_part2p(s, res, lgp, unb);
		else
			res = ft_part3p(s, res, lgp, unb);
	}
	else
	{
		if (s->pres >= s->champ)
			res = ft_part1p(s, res, lgp, unb);
		else
			res = ft_part4p(s, res, lgp, unb);
	}
	return (res);
}
