#include "dc_lst.h"

void	dclst_add_back(t_dclst *lst, t_dc_node *node) {
	t_dc_node		*last;

	if (lst->top == NULL)
		lst->top = node;
	else {
		last = lst->top->prev;
		node->prev = last;
		node->next = last->next;
		lst->top->prev->next = node;
		lst->top->prev = node;
	}
	lst->size += 1;
}
