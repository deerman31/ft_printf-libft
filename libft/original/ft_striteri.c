#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*)) {
	size_t	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i]) {
		f((unsigned int)i, &s[i]);
		i += 1;
	}
}
