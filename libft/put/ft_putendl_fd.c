#include "libft.h"

int	ft_putendl_fd(char *s, int fd) {
	int		count;

	if (s == NULL)
		return 0;
	count = 0;
	count = ft_putstr_fd(s, fd);
	if (count == -1)
		return -1;
	if (ft_putchar_fd('\n', fd) == -1)
		return -1;
	return count + 1;
}
