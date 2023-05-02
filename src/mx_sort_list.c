#include "../inc/libmx.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    if (!list || !cmp) return list;
    t_list *check = list;
	int counter = 1;
	while (check->next != NULL) {
		check = check->next;
		counter++;
	}
    t_list *curr = list;
    for (int i = 0; i < counter - 1; i++) {
        curr = list;
        for (int j = 0; j < counter - 1; j++){
            if (cmp(curr->data, curr->next->data)) {
                void *temp = curr->next->data;
                curr->next->data = curr->data;
                curr->data = temp;
            }
            curr = curr->next;
        }
    }
    return list;
}

bool cmp(void *s, void *t) {
		if (s > t)
			return true;
		else if (s < t)
			return false;
	 	return false;
}
