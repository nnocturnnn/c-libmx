#include "libmx.h"

void mx_pop_back(t_list **head) {
	t_list *here = NULL;
	t_list *prev = NULL;
	if(*head)
	here = *head;
	while(here->next) {
		prev = here;
		here = prev->next;
	}
	if(prev == NULL) {
		free(*head);
		*head = NULL;
	} else {
		free(here->next);
		prev->next = NULL;
	}
}
