#include "../includes/ft_printf.h"

char	*ft_pf_p(t_s *s, unsigned long long unb)
{
	char *res;
	int i = 0;
	int u = 0;

	if (!(res = (char *)malloc(sizeof(char) * 19)))
		exit(0);
	ft_bzero(res , 19);
	ft_dec_to_hex(s, unb);
	res[u++] = '0';
	res[u++] = 'x';
	while (s->hex[i] == '\0')
		i++;
	while (i < 16)
		res[u++] = s->hex[i++];
	return (res);
}
