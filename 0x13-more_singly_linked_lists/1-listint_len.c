#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * listint_len - Returns the number of elements
 *               in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elements in the listint_t list.
 */

size_t listint_len(const listint_t *h)
{
size_t i = 0;
for (; h != NULL; i++)
{
h = h->next;
}
return (i);
}
