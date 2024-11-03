#include "libft.h"

static int	get_number_sign(long num) {
	if (num == 0)
		return 0;
	else if (num < 0)
		return -1;
	else
		return 1;
}

static void	int_to_reversed_string(long num, char *dst) {
	const int	sign = get_number_sign(num);
	int			i;

	i = 0;
	while (num != 0) {
		dst[i] = (num % 10) * sign + '0';
		num /= 10;
		i += 1;
	}
	if (sign < 0) {
		dst[i] = '-';
		i += 1;
	} else if (sign == 0) {
		dst[i] = '0';
		i += 1;
	}
	dst[i] = '\0';
}

static void	reverse_cpy(char *dst, const char *src) {
	const int	len = (int)ft_strlen(src);
	int			i;

	i = 0;
	while (i < len) {
		dst[i] = src[len - i - 1];
		i += 1;
	}
	dst[i] = '\0';
}

char	*ft_ltoa(long n) {
	char			*s;
	char			tmp[21];

	int_to_reversed_string(n, tmp);
	s = malloc(sizeof(char) * (ft_strlen(tmp) + 1));
	if (!s)
		return (NULL);
	reverse_cpy(s, tmp);
	return (s);
}

