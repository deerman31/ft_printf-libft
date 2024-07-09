#include "d_lst.h"

void	*dlst_pop(t_dlst *lst) {
	t_d_node	*free_node;
	void		*re_content;

	if (lst->top == NULL)
		return NULL;
	re_content = lst->top->content;
	free_node = lst->top;
	if (lst->size == 1) {
		free(lst->top);
		lst->top = NULL;
	} else {
		lst->top = lst->top->next;
		lst->top->prev = NULL;
		free(free_node);
	}
	lst->size -= 1;
	return re_content;
}
