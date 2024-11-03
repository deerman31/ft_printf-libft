#include "libft.h"

static size_t	lead_check(char const *s1, char const *set) {
	size_t	lead;

	lead = 0;
	while (s1[lead]) {
		if (ft_strchr(set, s1[lead]))
			lead += 1;
		else
			break ;
	}
	return lead;
}

static size_t	end_check(char const *s1, char const *set)
{
	size_t	end;

	end = ft_strlen(s1);
	while (end > 0) {
		if (ft_strchr(set, s1[end - 1]))
			end -= 1;
		else
			break ;
	}
	return end;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	lead;
	size_t	end;
	size_t	len;
	char	*ptr;

	if (s1 == NULL || set == NULL)
		return NULL;
	lead = lead_check(s1, set);
	end = end_check(s1, set);
	if (lead >= end)
		return ft_strdup("");
	len = end - lead;
	ptr = ft_substr(s1, lead, len);
	return ptr;
}
