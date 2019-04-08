/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/09 19:50:02 by jgehin            #+#    #+#             */
/*   Updated: 2018/11/16 20:34:44 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char *t;

	t = (0);
	while (*s)
	{
		if (*(s) == c)
			t = (char*)s;
		++s;
	}
	if (t)
		return (t);
	if (c == '\0')
		return ((char *)s);
	return (t);
}
