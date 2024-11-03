#include "libft.h"

static size_t	atoi_space(const unsigned char *ntr, int *sign) {
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (('\t' <= ntr[i] && ntr[i] <= '\r') || ntr[i] == ' ')
		i += 1;
	while (ntr[i + j] == '+' || ntr[i + j] == '-') {
		if (ntr[i + j] == '-')
			*sign *= -1;
		j += 1;
		if (j == 2) {
			*sign = 0;
			return i;
		}
	}
	return i + j;
}

static int	over_check(unsigned int long s_div, unsigned int s_mod, int sign) {
	const unsigned int long	ov_div = LONG_MAX / 10;
	const unsigned int		ov_mod = LONG_MAX % 10;
	const unsigned int long	un_div = LONG_MIN / 10 * -1;
	const unsigned int		un_mod = LONG_MIN % 10 * -1;

	if (sign == 1 && (ov_div < s_div || (ov_div == s_div && ov_mod < s_mod)))
		return 1;
	if (sign == -1 && (un_div < s_div || (un_div == s_div && un_mod < s_mod)))
		return -1;
	return 0;
}

int	ft_atoi(const char *str) {
	const unsigned char	*ntr = (const unsigned char *)str;
	size_t				i;
	int					sign;
	unsigned long int	s1;
	unsigned int		s2;

	sign = 1;
	i = atoi_space(ntr, &sign);
	if (sign == 0)
		return 0;
	s1 = 0;
	while (ft_isdigit(ntr[i])) {
		s2 = ntr[i] - '0';
		if (over_check(s1, s2, sign) == 1)
			return (int)LONG_MAX;
		if (over_check(s1, s2, sign) == -1)
			return (int)LONG_MIN;
		s1 = s1 * 10 + s2;
		i += 1;
	}
	return (int)(s1 * sign);
}
