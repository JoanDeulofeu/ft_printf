#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "../libft/includes/libft.h"
# include <stdio.h>
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <stdarg.h>
# include <math.h>
# define FALSE 0
# define TRUE 1

/*
****	Structure Flags & Convertisseur
*/

typedef struct			s_flags
{
	char				hash;
	char				zero;
	char				moins;
	char				plus;
	char				el;
	char				l_l;
	char				ach;
	char				h_h;
	char				space;
	char				neg;
}						t_flags;

typedef struct			s_conv
{
	char				chr;
	short				shrt;
	int					nti;
	long int			lgint;
	long long int		lglgint;
	unsigned char		uchar;
	unsigned short		ushrt;
	unsigned int 		uint;
	unsigned long		ulg;
	unsigned long long	ulglg;
	char				*str;
}						t_conv;

/*
****	Structure principale
*/

typedef struct			s_s
{
	t_flags				*f;
	t_conv				*c;
	char				*str;
	unsigned int		pres;
	unsigned int		champ;
	va_list				params;
}						t_s;

/*
****	Fonction ft_printf
*/

void					ft_printf(char *str, ...);
int						ft_nbrlen(int nb);
void					ft_pf_d(t_s *s);

#endif
