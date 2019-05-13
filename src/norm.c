#include "../includes/ft_printf.h"

char	*ft_normround(t_s *s, char *rs, int i)
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
