#include "d_lst.h"

void	dlst_free(t_dlst *lst) {
	size_t	size;

	size = lst->size;
	while (size > 0) {
		dlst_pop(lst);
		size -= 1;
	}
	free(lst);
}
