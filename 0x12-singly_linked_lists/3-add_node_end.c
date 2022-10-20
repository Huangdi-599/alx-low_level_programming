#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - Adds a new node at the end
 *                of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new element.
 */
list_t *add_node_end(list_t **head, const char *str)
{
char *dup;
int i, j;
list_t *new, *tail;
new = malloc(sizeof(list_t));
if (new == NULL)
return (NULL);
dup = strdup(str);
if (str == NULL)
{
free(new);
return (NULL);
}
for (i = 0; str[i]; i++)
new->str = dup;
new->len = i;
new->next = NULL;
if (*head == NULL)
*head = new;
else
{
tail = *head;
for (j = 0; tail->next != NULL; j++)
{
tail = tail->next;
}
tail->next = new;
}
return (*head);
}
