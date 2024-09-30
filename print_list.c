#include "sort.h"

/**
 * print_list - Prints a list of integers
 * @list: The list to be printed
 */
void print_list(const listint_t *list)
{
	for (; list; list = list->next)
		printf("%d%s", list->n, list->next ? ", " : "");
	printf("\n");
}
