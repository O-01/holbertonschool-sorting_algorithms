#include "sort.h"

/**
 * insertion_sort_list - sort doubly linked list using insertion sort algorithm
 * @list: object list
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *this, *hold;

	if (!list || !(*list) || !(*list)->next)
		return;

	for (this = *list; this; this = this->next)
	{
		for (; this->next && this->n > this->next->n; print_list(*list))
		{
			hold = this->next;
			this->next = hold->next;
			hold->prev = this->prev;
			if (this->prev)
				this->prev->next = hold;
			if (hold->next)
				hold->next->prev = this;
			this->prev = hold;
			hold->next = this;
			if (hold->prev)
				this = hold->prev;
			else
				*list = hold;
		}
	}
}
