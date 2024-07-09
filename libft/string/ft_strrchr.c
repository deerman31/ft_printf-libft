#include "libft.h"

char	*ft_strrchr(const char *s, int c) {
	size_t		i;
	size_t		len;

	len = ft_strlen(s);
	i = 0;
	while (i <= len) {
		if (s[len - i] == (char)c)
			return (char *)&s[len - i];
		i++;
	}
	return NULL;
}
