#include "libft.h"

int	ft_lstsize(t_list *lst) {
	size_t	i;
	t_list	*tmp;

	tmp = lst;
	i = 0;
	while (tmp != NULL) {
		tmp = tmp->next;
		i++;
	}
	return i;
}
