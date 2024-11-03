#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*ptr;

	if (s == NULL || f == NULL)
		return NULL;
	len = ft_strlen(s);
	ptr = malloc(sizeof(char) * (len + 1));
	if (ptr == NULL)
		return NULL;
	i = 0;
	while (i < len) {
		ptr[i] = f((unsigned int)i, s[i]);
		i += 1;
	}
	ptr[i] = '\0';
	return ptr;
}
