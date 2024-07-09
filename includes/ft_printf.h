#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <limits.h>
#include <stdint.h>
#include "../libft/includes/libft.h"

#define MODIFIER "cspdiuxX%"
#define S_NULL "(null)"

typedef struct s_sc {
	va_list		ap;
	int			count;
	const char	*format;
}				t_sc;

int		ft_printf(const char *, ...);
int		x_convert(unsigned int, const char);
int		p_convert(uintptr_t);
int		u_putnbr(unsigned int);
int		di_putnbr(int);

int		c_print(struct s_sc *);
int		s_print(struct s_sc *);
int		p_print(struct s_sc *);
int		di_print(struct s_sc *);
int		ux_print(struct s_sc *, const char);

#endif
