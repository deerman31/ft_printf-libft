#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
	t_list	*new_list;
	t_list	*add_list;
	t_list	*tmp;

	if (lst == NULL || f == NULL || del == NULL)
		return NULL;
	new_list = NULL;
	tmp = lst;
	while (tmp) {
		add_list = ft_lstnew((f)(tmp->content));
		if (!add_list) {
			ft_lstclear(&tmp, del);
			return NULL;
		}
		ft_lstadd_back(&new_list, add_list);
		tmp = tmp->next;
	}
	return new_list;
}
