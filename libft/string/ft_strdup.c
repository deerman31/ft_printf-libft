#include "libft.h"

char	*ft_strdup(const char *s1) {
	char	*ps;
	size_t	len;

	len = ft_strlen(s1);
	ps = malloc(sizeof(char) * (len + 1));
	if (!ps)
		return NULL;
 	ft_memcpy(ps, s1, len);
	return ps;
}
