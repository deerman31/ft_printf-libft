#include "d_lst.h"

void	dlst_add_back(t_dlst *lst, t_d_node *node) {
	t_d_node		*last;

	if (lst->top == NULL)
		lst->top = node;
	else
	{
		last = lst->top;
		while (last->next != NULL)
			last = last->next;
		last->next = node;
		node->prev = last;
	}
	lst->size += 1;
}
