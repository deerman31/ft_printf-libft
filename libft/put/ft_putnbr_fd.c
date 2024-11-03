#include "libft.h"

static int	get_number_sign(int num) {
	if (num == 0)
		return 0;
	else if (num < 0)
		return -1;
	else
		return 1;
}

static void	int_to_reversed_string(int num, char *dst) {
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

int	ft_putnbr_fd(int n, int fd) {
	char	tmp[12];
	char	s[12];
	size_t	ret;

	int_to_reversed_string(n, tmp);
	reverse_cpy(s, tmp);
	ret = write (fd, s, ft_strlen(s));
	return (int)(ret);
}
