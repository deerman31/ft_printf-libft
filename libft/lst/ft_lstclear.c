#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *)) {
	if (lst == NULL || del == NULL)
		return ;
	while (*lst != NULL) {
		ft_lstdelone(*lst, del);
		*lst = (*lst)->next;
	}
	*lst = NULL;
}
