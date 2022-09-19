#include "lists.h"

/**
 * check_cycle - check for a cycle in a list
 * @list: list
 * Return: cycle ? 1 : 0
 */
int check_cycle(listint_t *list)
{
	listint_t *chaser, *runner;

	if (!list || !list->next)
		return (0);

	chaser = list->next;
	runner = (list->next)->next;

	for (; runner;)
	{
		if (chaser == runner)
			return (1);

		chaser = chaser->next;
		runner = (runner->next)->next;
	}

	return (0);
}
