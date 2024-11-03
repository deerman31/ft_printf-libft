#include "libft.h"

char	*ft_strrchr(const char *s, int c) {
	const size_t	len = ft_strlen(s);
	size_t			i;

	i = 0;
	while (i <= len) {
		if (s[len - i] == (char)c)
			return (char *)&s[len - i];
		i += 1;
	}
	return NULL;
}
