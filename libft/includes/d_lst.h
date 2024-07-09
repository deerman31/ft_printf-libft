#ifndef D_LST_H
#define D_LST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_d_node {
	void			*content;
	struct s_d_node	*next;
	struct s_d_node	*prev;
}			t_d_node;

typedef struct s_dlst {
	t_d_node	*top;
	size_t		size;
}			t_dlst;

t_dlst			*dlst_new();
void			dlst_add_back(t_dlst *, t_d_node *);
void			dlst_add_front(t_dlst *, t_d_node *);
void			dlst_free(t_dlst *);
t_d_node		*d_node_new(void *);
void			*dlst_pop(t_dlst *);

#endif
