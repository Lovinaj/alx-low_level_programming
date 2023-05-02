#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t list.
 * @head: A pointer to the first node in
 * list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pre;
	listint_t *ahead;

	if (head == NULL || *head == NULL)
		return (NULL);

	pre = NULL;

	while ((*head)->next != NULL)
	{
		ahead = (*head)->next;
		(*head)->next = pre;
		pre = *head;
		*head = ahead;
	}

	(*head)->next = pre;

	return (*head);
}
