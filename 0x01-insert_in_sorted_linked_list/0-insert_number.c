#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_t *insert_node - function that inserts a number
 * into a sorted singly linked list.
 * @head: ptr to the list
 * @number: number
 * Return: address of the inserted node
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new = NULL;
	listint_t *tmp = NULL;

	if (!head)
		return (NULL);

	new = malloc(sizeof(*new));
	if (!new)
		return (NULL);

	new->n = number;
	new->next = NULL;

	if (!*head)
		*head = new;
	else if (number < (*head)->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		tmp = *head;
		while (tmp->next && tmp->next->n < number)
		{
			tmp = tmp->next;
		}
		new->next = tmp->next;
		tmp->next = new;
	}
	return (new);
}
