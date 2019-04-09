#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/includes/libft.h"
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# define FALSE 0
# define TRUE 1

/*
****	Structure Flags & Convertisseur
*/

typedef struct		s_flags
{
	char			hash;
	char			zero;
	char			moins;
	char			plus;
	char			el;
	char			l_l;
	char			ach;
	char			h_h;
}					t_flags;

typedef struct		s_conv
{
	char			chr;
	short			shrt;
	int				nti;
	long int		lgint;
	long long int	lglgint;
	Uint8			uchar;
	Uint16			ushrt;
	Uint32			uint;
	Uint64			ulgint;
	Uint128			ulglgint;
	char			*str;
}					t_conv;

/*
****	Structure principale
*/

typedef struct		s_s
{
	t_flags			*f;
	t_conv			*c;
	char			*str;
	int				pres;
	int				champ;
	va_list			params;
}					t_s;

/*
****	Fonction ft_printf
*/

void	ft_printf(char *str, ...);
void	ft_pf_d(t_s *s, int i);

#endif
