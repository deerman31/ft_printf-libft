#include "dc_lst.h"

void	dclst_free(t_dclst *lst) {
	size_t	size;

	size = lst->size;
	while (size > 0) {
		dclst_pop(lst);
		size -= 1;
	}
	free(lst);
}
