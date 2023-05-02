#include "../inc/libmx.h"

void mx_push_front (t_list **list, void *data) {
	t_list *temp = *list;
	*list = mx_create_node(data);
	(*list)->next = temp;
}


