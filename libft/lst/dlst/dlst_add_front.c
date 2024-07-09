#include "d_lst.h"

void	dlst_add_front(t_dlst *lst, t_d_node *node) {
	if (lst->top == NULL)
		lst->top = node;
	else {
		node->next = lst->top;
		lst->top->prev = node;
		lst->top = node;
	}
	lst->size += 1;
}
