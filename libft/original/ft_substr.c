#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ptr;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return NULL;
	s_len = ft_strlen(s);
	if (s_len < start || len == 0)
		return ft_strdup("");
	if (s_len - start < len)
		len = s_len - start;
	ptr = ft_calloc(len + 1, sizeof(char));
	if (ptr == NULL)
		return NULL;
	i = 0;
	while (i < len) {
		ptr[i] = s[start + i];
		i++;
	}
	ptr[i] = '\0';
	return ptr;
}
