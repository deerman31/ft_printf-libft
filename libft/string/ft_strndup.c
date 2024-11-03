#include <libft.h>

char	*ft_strndup(const char *s1, size_t n) {
	char	*str;
	size_t	len;

	len = ft_strlen(s1);
	if (len > n)
		len = n;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return NULL;
 	ft_memcpy(str, s1, len);
	return str;
}
