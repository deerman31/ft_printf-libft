#include "libft.h"

void	*ft_memset(void *b, int c, size_t len) {
	size_t			i;
	unsigned char	*ptr;
	unsigned char	pc;

	ptr = (unsigned char *)b;
	pc = (unsigned char)c;
	i = 0;
	while (i < len) {
		ptr[i] = pc;
		i += 1;
	}
	return b;
}
