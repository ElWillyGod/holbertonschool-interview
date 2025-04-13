#include "search.h"

/**
 * linear_skip - Searches for a value in a sorted skip list
 *
 * @head: Pointer to the head of the skip list
 * @value: Value to search for
 *
 * Return: Pointer first node where value is located, or NULL if not found
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *end;

	if (!list)
		return (NULL);

	node = list;
	end = list->express;

	while (end)
	{
		printf("Value checked at index [%lu] = [%d]\n", end->index, end->n);

		if (end->n >= value)
			break;

		node = end;
		end = end->express;
	}

	if (!end)
	{
		end = list;
		while (end->next)
			end = end->next;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
		node->index, end->index);

	while (node && node->index <= end->index)
	{

		printf("Value checked at index [%lu] = [%d]\n", node->index, node->n);

		if (node->n == value)
			return (node);

		node = node->next;
	}

	return (NULL);
}
