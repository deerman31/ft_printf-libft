#include "libft.h"

static size_t	nbr_len(unsigned int n) {
	size_t	i;

	if (n == 0)
		return (1);
	i = 0;
	while (n != 0) {
		n /= 10;
		i++;
	}
	return (i);
}

static int	putnbr_help(unsigned int n, size_t len, int fd) {
	size_t	i;
	char	c;

	i = 0;
	while (i < len) {
		n /= 10;
		i++;
	}
	c = (n % 10) + '0';
	if (write (fd, &c, 1) == -1)
		return -1;
	return 1;
}

int	ft_putnbr_fd(int n, int fd) {
	size_t			i;
	size_t			len;
	unsigned int	un;
	int				f;

	f = 0;
	if (n < 0) {
		if (write (fd, "-", 1) == -1)
			return (-1);
		un = (unsigned int)(n * -1);
		f = 1;
	}
	else
		un = (unsigned int)n;
	len = nbr_len(un);
	i = 0;
	while (i < len) {
		if (putnbr_help(un, len - i - 1, fd) == -1)
			return -1;
		i++;
	}
	return (int)len + f;
}
