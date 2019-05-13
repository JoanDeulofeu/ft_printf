/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   math3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/13 17:56:24 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/13 17:56:25 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int					ft_dblen(double db)
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

unsigned long long	ft_powu(unsigned long long nb, unsigned long long power)
{
	unsigned long long i;
	unsigned long long tmp;

	i = 0;
	tmp = nb;
	while (i++ < power)
		nb *= tmp;
	return (nb);
}

char				*pf_itoau(char *res, int i, unsigned long long nb, int lgnb)
{
	int u;

	u = -1;
	while (++u < lgnb - 1)
		res[i++] = (nb / ft_powu(10, lgnb - u - 2) % 10) + 48;
	res[i++] = (nb % 10) + 48;
	return (res);
}

long long			ft_pow(long long nb, int power)
{
	long long i;
	long long tmp;

	i = 0;
	tmp = nb;
	while (i++ < power)
		nb *= tmp;
	return (nb);
}

char				*pf_itoa(char *res, int i, long long nb, int lgnb)
{
	int u;

	u = -1;
	if (nb < -9223372036854775807)
	{
		res[i++] = '9';
		nb = 223372036854775808;
		lgnb = ft_nbrlen(nb);
	}
	while (++u < lgnb - 1)
		res[i++] = (nb / ft_pow(10, lgnb - u - 2) % 10) + 48;
	res[i++] = (nb % 10) + 48;
	return (res);
}
