#ifndef DC_LST_H
#define DC_LST_H

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct s_dc_node {
	void				*content;
	struct s_dc_node	*next;
	struct s_dc_node	*prev;
}			t_dc_node;

typedef struct s_dclst {
	t_dc_node	*top;
	size_t		size;
}			t_dclst;

t_dclst			*dclst_new();
void			dclst_add_back(t_dclst *, t_dc_node *);
void			dclst_add_front(t_dclst *, t_dc_node *);
void			dclst_free(t_dclst *);
t_dc_node		*dc_node_new(void *);
void			*dclst_pop(t_dclst *);

#endif
