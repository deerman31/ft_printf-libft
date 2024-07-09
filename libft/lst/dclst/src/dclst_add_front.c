#include "dc_lst.h"

void	dclst_add_front(t_dclst *lst, t_dc_node *node) {
	if (lst->top == NULL)
		lst->top = node;
	else {
		node->next = lst->top;
		node->prev = lst->top->prev;
		lst->top->prev->next = node;
		lst->top->prev = node;
		lst->top = node;
	}
	lst->size += 1;
}
