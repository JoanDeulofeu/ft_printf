/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   buffer.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:00 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/15 15:40:57 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int		ft_emptybuff(t_s *s, char *buff)
{
	char	*tmp;
	int		i;
	int		u;

	i = -1;
	u = -1;
	if (!(tmp = (char *)malloc(sizeof(char) * (64 * s->mllc))))
		exit(0);
	ft_bzero(tmp, 64 * s->mllc);
	if (s->res == NULL)
		while (++i < 64)
			tmp[i] = buff[i];
	else
	{
		while (++i < 64 * (s->mllc - 1))
			tmp[i] = s->res[i];
		while (++u < 64)
			tmp[i++] = buff[u];
		ft_memdel((void **)&s->res);
	}
	s->res = tmp;
	s->mllc++;
	ft_bzero(buff, 64);
	return (0);
}

int		ft_buffering(t_s *s, char *buff, int bf, char *str)
{
	int		i;

	i = 0;
	if (s->f->pctc == TRUE)
	{
		while (str[i] != '\0')
		{
			buff[bf++] = str[i++];
			bf = (bf == 64) ? ft_emptybuff(s, buff) : bf;
		}
		bf = (i != 0 && bf != 0) ? bf - 1 : bf;
		buff[bf++] = '\0';
		bf = (bf == 64) ? ft_emptybuff(s, buff) : bf;
	}
	else
	{
		while (str[i] != '\0')
		{
			buff[bf++] = str[i++];
			bf = (bf == 64) ? ft_emptybuff(s, buff) : bf;
		}
	}
	ft_memdel((void **)&str);
	return (bf);
}

void	ft_display(t_s *s, char *buff, int bf)
{
	if (s->res != NULL)
		write(1, s->res, 64 * (s->mllc - 1));
	if (bf != 0)
		write(1, buff, bf);
	ft_memdel((void **)&s->res);
}
