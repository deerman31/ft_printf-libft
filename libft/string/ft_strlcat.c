#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize) {
	size_t		i;
	size_t		j;
	size_t		d_len;
	size_t		s_len;

	d_len = 0;
	if (dst != NULL)
		d_len = ft_strlen(dst);
	s_len = ft_strlen(src);
	i = 0;
	j = d_len;
	if (dstsize <= d_len)
		return s_len + dstsize;
	while (j + 1 < dstsize && src[i]) {
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return d_len + s_len;
}
