#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n) {
	size_t				i;
	const unsigned char	*ps;

	ps = (const unsigned char *)s;
	i = 0;
	while (i < n) {
		if (ps[i] == (unsigned char)c)
			return ((void *)&ps[i]);
		i += 1;
	}
	return NULL;
}
