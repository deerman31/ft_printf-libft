#include "dc_lst.h"

t_dclst	*dclst_new(void) {
	t_dclst	*lst;

	lst = malloc(sizeof(t_dclst));
	if (lst == NULL)
		return NULL;
	lst->top = NULL;
	lst->size = 0;
	return lst;
}
