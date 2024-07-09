#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
	t_list	*new_list;
	t_list	*add_list;

	if (lst == NULL || f == NULL || del == NULL)
		return NULL;
	new_list = NULL;
	while (lst != NULL) {
		add_list = ft_lstnew((f)(lst->content));
		if (add_list == NULL) {
			ft_lstclear(&lst, del);
			return NULL;
		}
		ft_lstadd_back(&new_list, add_list);
		lst = lst->next;
	}
	return new_list;
}
