#include "dc_lst.h"

void	*dclst_pop(t_dclst *lst) {
	t_dc_node		*free_node;
	void			*re_content;

	if (lst->top == NULL)
		return NULL;
	re_content = lst->top->content;
	free_node = lst->top;
	if (lst->size == 1) {
		free(lst->top);
		lst->top = NULL;
	} else {
		lst->top->next->prev = lst->top->prev;
		lst->top->prev->next = lst->top->next;
		lst->top = lst->top->next;
		free(free_node);
	}
	lst->size -= 1;
	return re_content;
}
