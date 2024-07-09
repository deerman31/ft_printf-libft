#include "libft.h"

void	*ft_calloc(size_t count, size_t size) {
	unsigned char	*ptr;

	if (count == 0 || size == 0) {
		count = 1;
		size = 1;
	}
	if (size > SIZE_MAX / count)
		return NULL;
	ptr = malloc(count * size);
	if (ptr == NULL)
		return NULL;
	ft_bzero(ptr, count * size);
	return (void *)ptr;
}
