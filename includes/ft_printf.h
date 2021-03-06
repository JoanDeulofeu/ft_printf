/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgehin <jgehin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/15 18:12:32 by jgehin            #+#    #+#             */
/*   Updated: 2019/05/15 18:12:44 by jgehin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
	char				chr;
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
****	Structure de norme
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
	char				*res;
	int					i;
	long double			db;
}						t_norm;

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
****	Fonction d' x to x
*/

char					*pf_ftoa(char *res, int i, long double db, t_s *s);
char					*pf_itoa(char *res, int i, long long nb, int lgnb);
char					*pf_itoax(char *res, int i, t_s *s, int lgnb);
char					*pf_itoau(char *res, int i, unsigned long long nb, int
	lgnb);

/*
****	Fonction de maths
*/

int						ft_nbrlen(long long nb);
int						ft_unbrlen(unsigned long long nb);
int						ft_ldblen(long double db);
int						ft_dblen(double db);
int						ft_plen(t_s *s, unsigned long long unb);
long long				ft_dec_to_oct(long long nb);
unsigned int			ft_dec_to_hex(t_s *s, unsigned long long nb);
long long				ft_absll(long long c);
char					*ft_hashzero(char *res, char *tmp);

/*
****	Fonction des convertisseur
*/

char					*ft_pf_d(t_s *s, long long nb);
char					*ft_pf_u(t_s *s, unsigned long long nb);
char					*ft_pf_p(t_s *s, unsigned long long unb);
char					*ft_pf_x(t_s *s, unsigned long long nb);
char					*ft_pf_f(t_s *s, long double db);
char					*ft_pf_s(t_s *s, char *str);
char					*ft_pf_f2(t_s *s, double db);

/*
****	Autres fonctions
*/

int						ft_printf(char *str, ...);
void					ft_print_param(t_s *s);
char					*ft_find_conv(t_s *s, int i);
char					*ft_xmaj(char *res);
void					ft_display(t_s *s, char *buff, int bf);
int						ft_buffering(t_s *s, char *buff, int bf, char *str);
int						ft_emptybuff(t_s *s, char *buff);
int						ft_truelg(t_s *s, int lgdb);
char					*ft_spacetozero(char *res);
int						ft_which_flags(t_s *s, int i);
int						ft_reset_flags(t_s *s);
int						ft_champ_size(t_s *s, int i);
int						ft_precision(t_s *s, int i);
char					*ft_add_hex(char *res, int i, t_s *s);
char					*ft_strvide(t_s *s, char *res);

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
char					*ft_normpart4x(char *res, int i, t_s *s, unsigned
	long long nb);
int						ft_norm_u_more(t_s *s, int lgnb, unsigned long
	long nb, int u);

#endif
