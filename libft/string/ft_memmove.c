#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len) {
	size_t				i;
	unsigned char		*pd;
	const unsigned char	*ps;

	pd = (unsigned char *)dst;
	ps = (const unsigned char *)src;
	i = 0;
	if (dst > src) {
		while (i < len) {
			pd[len - 1 - i] = ps[len - 1 - i];
			i += 1;
		}
	}
	else
		ft_memcpy(pd, ps, len);
	return dst;
}
