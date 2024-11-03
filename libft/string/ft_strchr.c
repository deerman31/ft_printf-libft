#include "libft.h"

char	*ft_strchr(const char *s, int c) {
	const size_t	len = ft_strlen(s);
	size_t			i;

	i = 0;
	while (i <= len) {
		if (s[i] == (char)c)
			return (char *)&s[i];
		i += 1;
	}
	return NULL;
}
