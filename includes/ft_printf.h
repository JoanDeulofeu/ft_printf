#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/includes/libft.h"
# include <stdio.h>
# define FALSE 0
# define TRUE 1

/*
****	Structure Flags
*/

typedef struct		s_flags
{
	char			hash;
	char			zero;
	char			moins;
	char			plus;
	char			point;
	char			el;
	char			l_l;
	char			ach;
	char			h_h;
}					t_flags;

/*
****	Structure principale
*/

typedef struct		s_s
{
	t_flags			*f;
	char			*str;
	int				pres;
}					t_s;

/*
****	Fonction ft_printf
*/

void	ft_printf(char *str, int ex);

#endif
