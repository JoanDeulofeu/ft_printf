#include "../includes/ft_printf.h"

int		ft_emptybuff(t_s *s, char *buff)
{
	char	*tmp;
	int		i = -1;
	int		u = -1;

	if (!(tmp = (char *)malloc(sizeof(char) * (64 * s->mllc))))
		exit(0);
	// printf("\ns->res == %s\n", s->res);
	if (s->res == NULL)
	{
		s->res = tmp;
		while (++i < 64)
			s->res[i] = buff[i];
	}
	else
	{
		while (++i < 64 * (s->mllc - 1))
			tmp[i] = s->res[i];
		while (++u < 64)
			tmp[i++] = buff[u];
		ft_memdel((void **)&s->res);
		s->res = tmp;
	}
	// printf("\ns->res == |%s|\n", s->res);
	s->mllc++;
	ft_bzero(buff, 64);
	return (0);
}

int		ft_buffering(t_s *s, char *buff, int bf, char *str)
{
	int i = 0;
	int verif = 0;

	if (s->f->pctc == TRUE)
	{
		while (str[i] != '\0')
		{
			verif++;
			buff[bf++] = str[i++];
			if (bf == 64)
				bf = ft_emptybuff(s, buff);
		}
		if (verif != 0)
			bf--;
		buff[bf++]= '\0';
		if (bf == 64)
			bf = ft_emptybuff(s, buff);
	}
	else
	{
		while (str[i] != '\0')
		{
			buff[bf++] = str[i++];
			// printf("buff == %s\n", buff);
			if (bf == 64)
				bf = ft_emptybuff(s, buff);
		}
	}
	return (bf);
}

void	ft_display(t_s *s, char *buff, int bf)
{
	// printf("\ns->res == |%s|\n", s->res);
	// printf("buff == |%s|\n", buff);
	// printf("64 * s->mllc == |%d|\n", 64 * (s->mllc - 1));
	if (s->res != NULL)
		write(1, s->res, 64 * (s->mllc - 1));
	if (bf != 0)
		write(1, buff, bf);
}
