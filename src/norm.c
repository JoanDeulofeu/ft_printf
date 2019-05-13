/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   norm.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:55:46 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/13 17:55:49 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char		*ft_add_hex(char *res, int i, t_s *s)
{
	int u;

	u = 0;
	while (s->hex[u] == '\0')
		u++;
	while (u < 16)
		res[i++] = s->hex[u++];
	return (res);
}

char		*ft_normround(t_s *s, char *rs, int i)
{
	while (rs[i] == '0')
	{
		i = (rs[i - 1] == '.') ? i - 2 : i - 1;
		if (i >= 0 && (rs[i] >= '0' && rs[i] <= '9'))
			rs[i] += (rs[i] == 57) ? -9 : 1;
		else if (rs[i] != ' ')
		{
			if (i < 1)
				ft_memmove(&rs[i + 3], &rs[i + 2], ft_strlen(&rs[i + 1]));
			if (i < 1)
				rs[i + 1] = '1';
			else
			{
				rs[i - 1] = rs[i];
				rs[i] = '1';
			}
			s->f->round++;
		}
		else
		{
			s->f->round++;
			rs[i] = '1';
		}
	}
	return (rs);
}

char		ft_normpart3(t_s *s, int mode)
{
	char	res;

	res = '\0';
	if (mode == 1)
	{
		if ((s->f->neg == TRUE || s->f->plus == TRUE)
		&& (s->f->point != TRUE || s->pres != 0))
			res = s->f->neg == TRUE ? '-' : '+';
		else if ((s->f->neg != TRUE && s->f->plus != TRUE) && s->f->space == 1
		&& (s->f->point != TRUE || s->pres != 0))
			res = ' ';
	}
	else
	{
		if ((s->f->neg == TRUE || s->f->plus == TRUE)
		&& (s->f->point == TRUE && s->pres == 0))
			res = s->f->neg == TRUE ? '-' : '+';
		else if ((s->f->neg != TRUE && s->f->plus != TRUE) && s->f->space == 1
		&& (s->f->point == TRUE && s->pres == 0))
			res = ' ';
	}
	return (res);
}

char		ft_normsign(t_s *s)
{
	char res;

	res = '\0';
	if (s->f->neg == TRUE || s->f->plus == TRUE)
		res = s->f->neg == TRUE ? '-' : '+';
	else if (s->f->space == TRUE)
		res = ' ';
	return (res);
}

char		*ft_strvide(t_s *s, char *res)
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
