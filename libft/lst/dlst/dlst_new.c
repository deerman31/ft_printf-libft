#include "d_lst.h"

t_dlst	*dlst_new(void) {
	t_dlst	*lst;

	lst = malloc(sizeof(t_dlst));
	if (lst == NULL)
		return NULL;
	lst->top = NULL;
	lst->size = 0;
	return lst;
}
