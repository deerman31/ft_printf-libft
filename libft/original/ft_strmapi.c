#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t		i;
	size_t		len;
	char		*ptr;

	if (s == NULL || f == NULL)
		return NULL;
	len = ft_strlen(s);
	ptr = ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
		return NULL;
	i = 0;
	while (i < len) {
		ptr[i] = f((unsigned int)i, s[i]);
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}
