#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2) {
	char	*ptr;
	size_t	s1_len;
	size_t	s2_len;

	if (s1 == NULL || s2 == NULL)
		return NULL;
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	ptr = ft_calloc((s1_len + s2_len + 1), sizeof(char));
	if (ptr == NULL)
		return NULL;
	ft_strlcpy(ptr, s1, s1_len + 1);
	ft_strlcat(ptr, s2, s1_len + s2_len + 1);
	return ptr;
}
