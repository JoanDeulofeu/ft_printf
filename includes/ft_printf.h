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

typedef struct			s_q_int
{
	int					i;
	int					res;
	int					tmp;
	int					bf;
}						t_q_int;

typedef struct			s_norm
{
	int					u;
	int					lgdb;
	long long			tmp;
	long double			save;
	int					ps;
	char 				*res;
	int 				i;
	long double 		db;
}						t_norm;

typedef struct			s_flags
{
	char				hash;
	char				xmaj;
	char				zero;
	char				moins;
	char				plus;
	char				point;
	char				el;
	char				big_l;
	char				l_l;
	char				ach;
	char				h_h;
	char				space;
	char				neg;
	char				pctc;
	int					round;
}						t_flags;

typedef struct			s_conv
{
	char				chr;
	unsigned long long	ulglg;
	char				*str;
	long double			ldb;
	double				db;
	long long			nb;
	unsigned long long	unb;
}						t_conv;

/*
****	Structure principale
*/

typedef struct			s_s
{
	t_flags				*f;
	t_conv				*c;
	char				*str;
	char				*res;
	int					mllc;
	int					pres;
	int					champ;
	va_list				params;
	char				hex[16];

}						t_s;

/*
****	Fonction ft_printf
*/

int						ft_printf(char *str, ...);
int						ft_nbrlen(long long nb);
int						ft_unbrlen(unsigned long long nb);
int						ft_ldblen(long double db);
int						ft_plen(t_s *s, unsigned long long unb);
char					*ft_pf_d(t_s *s, long long nb);
char					*ft_pf_u(t_s *s, unsigned long long nb);
char					*ft_pf_p(t_s *s, unsigned long long unb);
char					*ft_pf_x(t_s *s, unsigned long long nb);
char					*ft_pf_f(t_s *s, long double db);
char					*ft_pf_s(t_s *s, char *str);
char					*ft_pf_f2(t_s *s, double db);
void					ft_print_param(t_s *s);
char					*ft_find_conv(t_s *s, int i);
long long				ft_dec_to_oct(long long nb);
unsigned int			ft_dec_to_hex(t_s *s, unsigned long long nb);
char					*ft_xmaj(char *res);
long long				ft_absll(long long c);
void					ft_display(t_s *s, char *buff, int bf);
int						ft_buffering(t_s *s, char *buff, int bf, char *str);
int						ft_emptybuff(t_s *s, char *buff);
char					*pf_ftoa(char *res, int i, long double db, t_s *s);
char					*pf_itoa(char *res, int i, long long nb, int lgnb);
int						ft_truelg(t_s *s, int lgdb);
char					*ft_hashzero(char *res);
char					*ft_spacetozero(char *res);
char					*pf_itoau(char *res, int i, unsigned long long nb, int lgnb);
int						ft_which_flags(t_s *s, int i);
int						ft_reset_flags(t_s *s);
int						ft_champ_size(t_s *s, int i);
int						ft_precision(t_s *s, int i);

/*
****	Fonction de norme
*/

char					*ft_norm_u(char *res, t_s *s);
char					*ft_norm_x(char *res, t_s *s, int i);
char					*ft_norm_dio(char *res, t_s *s, int i);
char					*ft_norm_c(char *res, t_s *s, int i);
char					*ft_norm_f(char *res, t_s *s);
char					ft_normsign(t_s *s);
char					ft_normpart3(t_s *s, int mode);
char					*ft_normround(t_s *s, char *rs, int i);
char					*ft_normround(t_s *s, char *rs, int i);

#endif
