#include "dc_lst.h"

t_dc_node	*dc_node_new(void *content) {
	t_dc_node	*new;

	new = malloc(sizeof(t_dc_node));
	if (new == NULL)
		return NULL;
	new->content = content;
	new->next = new;
	new->prev = new;
	return new;
}
