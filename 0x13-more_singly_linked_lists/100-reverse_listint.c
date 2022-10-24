#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
 * reverse_listint - function that reverses a listint_t linked list.
 * @head: A pointer to the address of
 *        the head of the list_t list.
 *
 * Return: A pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *forw, *prev;
if (head == NULL || *head == NULL)
return (NULL);
prev = NULL;
while ((*head)->next != NULL)
{
forw = (*head)->next;
(*head)->next = prev;
behind = *head;
*head = forw;
}
(*head)->next = prev;
return (*head);
}
