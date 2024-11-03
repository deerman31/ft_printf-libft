#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n) {
	unsigned char		*nd;
	const unsigned char	*ns;
	size_t				i;

	if (dst == src || n == 0)
		return dst;
	nd = (unsigned char *)dst;
	ns = (const unsigned char *)src;
	i = 0;
	while (i < n) {
		nd[i] = ns[i];
		i += 1;
	}
	return nd;
}
