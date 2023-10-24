#include "sort.h"
/**
 * nodes_swap - swap nodes in list
 * @n1: first node
 * @n2: second node
*/
void nodes_swap(listint_t *n1, listint_t *n2)
{
	if (n1->prev != NULL)
	{
		n1->prev->next = n2;
	}
	if (n2->next != NULL)
	{
		n2->next->prev = n1;
	}
	n1->next = n2->next;
	n2->prev = n1->prev;
	n1->prev = n2;
	n2->next = n1;
}

/**
 * insertion_sort_list - func using insertion algo to sort array
 * @list: list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *pivot;
	listint_t *itr;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
	{
		return;
	}

	pivot = (*list)->next;
	while (pivot != NULL)
	{
		itr = pivot;
		pivot = pivot->next;
		while (itr != NULL && itr->prev != NULL)
		{
			if (itr->prev->n > itr->n)
			{
				nodes_swap(itr->prev, itr);
				if (itr->prev == NULL)
				{
					*list = itr;
				}
				print_list((const listint_t *)*list);
			}
			else
			{
				itr = itr->prev;

			}
		}
	}
}
