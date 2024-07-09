#include "d_lst.h"

t_d_node	*d_node_new(void *content) {
	t_d_node	*new;

	new = malloc(sizeof(t_d_node));
	if (new == NULL)
		return NULL;
	new->content = content;
	new->next = NULL;
	new->prev = NULL;
	return new;
}
