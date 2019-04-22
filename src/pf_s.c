#include "../includes/ft_printf.h"

char	*ft_part1s(t_s *s, char *res, int lgstr, char *str)
{
	int u;
	int o;
	int i;
	int szof;
	int lgmot;

	lgmot = (s->pres > 0 && s->pres < lgstr) ? s->pres : lgstr;
	szof = s->champ > lgmot ? s->champ : lgmot;
	u = 0;
	i = 0;
	o = 0;
	if ((s->pres > lgstr || s->pres == 0) && s->champ < lgstr)
		return (str);
	if (!(res = (char *)malloc(sizeof(char) * (s->pres < lgstr ? s->pres : lgstr) + 1)))
		exit(0);
	ft_bzero(res, (s->pres < lgstr ? s->pres : lgstr) + 1);
	while (u++ < szof - lgmot)
		res[i++] = ' ';
	while (u++ <= szof)
		res[i++] = str[o++];
	return(res);
}

char	*ft_part2s(t_s *s, char *res, int lgstr, char *str)
{
	int u;
	int i;
	int o;
	int szof;

	szof = s->champ > lgstr ? s->champ : lgstr;
	u = -1;
	i = 0;
	o = 0;
	if (!(res = (char *)malloc(sizeof(char) * szof + 1)))
		exit(0);
	ft_bzero(res, szof + 1);
	while (++u < szof - ((s->pres > 0 && s->pres < lgstr) ? s->pres : lgstr))
		res[i++] = ' ';
	while (u++ < szof)
		res[i++] = str[o++];
	return(res);
}

char	*ft_part3s(t_s *s, char *res, int lgstr, char *str)
{
	int u;
	int i;
	int o;
	int szof;
	int lgmot;

	lgmot = (s->pres > 0 && s->pres < lgstr) ? s->pres : lgstr;
	szof = s->champ > lgmot ? s->champ : lgmot;
	u = -1;
	i = 0;
	o = 0;
	if (!(res = (char *)malloc(sizeof(char) * szof + 1)))
		exit(0);
	ft_bzero(res, szof + 1);
	while (++u < szof - (szof - lgmot))
		res[i++] = str[o++];
	while (u++ < szof)
		res[i++] = ' ';
	return(res);
}

char	*ft_strvide(t_s *s, char *res)
{
	int u;

	u = -1;
	if (!(res = (char *)malloc(sizeof(char) * s->champ + 1)))
		exit(0);
	ft_bzero(res, s->champ + 1);
	while (++u < s->champ)
		res[u] = ' ';
	return (res);
}

char	*ft_pf_s(t_s *s, char *str)
{
	int lgstr;
	char *res;

	res = NULL;
	// if (s->f->pctc == TRUE)
	// {
	// 	if (!(res = (char *)malloc(sizeof(char) * 1 + 1)))
	// 		exit(0);
	// 	res = str;
	// 	return (res);
	// }
	if (str == NULL)
		str = "(null)";
	lgstr = s->f->pctc == TRUE ? 1 : ft_strlen(str);
	if (ft_strcmp(str, "") == 0 && s->champ != 0)
		res = ft_strvide(s, res);
	else if (s->pres >= s->champ && s->f->moins == FALSE)
		res = ft_part1s(s, res, lgstr, str);
	else if (s->champ > s->pres && s->f->moins == FALSE)
		res = ft_part2s(s, res, lgstr, str);
	else
		res = ft_part3s(s, res, lgstr, str);
	return (res);
}
