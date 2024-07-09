#include "libft.h"

char	*ft_strchr(const char *s, int c) {
	size_t		i;
	size_t		len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len) {
		if (s[i] == (char)c)
			return (char *)&s[i];
		i++;
	}
	return NULL;
}
