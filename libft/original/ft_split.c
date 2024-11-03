#include "libft.h"

static void	**all_free(char **strs) {
	size_t	i;

	i = 0;
	while (strs[i]) {
		free(strs[i]);
		i += 1;
	}
	free(strs);
	strs = NULL;
	return NULL;
}

static size_t	split_num(char const *s, char c) {
	size_t	ret;
	size_t	i;
	size_t	j;

	ret = 0;
	i = 0;
	while (s[i]) {
		while (s[i] && s[i] == c)
			i += 1;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j += 1;
		if (j > 0)
			ret += 1;
		i += j;
	}
	return ret;
}

static char	**ft_split_help(char **strs, char const *s, char c) {
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	k = 0;
	while (s[i]) {
		while (s[i] && s[i] == c)
			i += 1;
		j = 0;
		while (s[i + j] && s[i + j] != c)
			j += 1;
		if (j > 0) {
			strs[k] = ft_strndup(&s[i], j);
			if (!strs[k])
				return ((char **)all_free(strs));
			k += 1;
		}
		i += j;
	}
	strs[k] = NULL;
	return strs;
}

char	**ft_split(char const *s, char c) {
	char	**strs;

	if (!s)
		return NULL;
	strs = malloc(sizeof(char *) * (split_num(s, c) + 1));
	if (!strs)
		return NULL;
	return ft_split_help(strs, s, c);
}
