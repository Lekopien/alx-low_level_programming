#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: Pointer to a pointer to the first node of the list
 * @index: The index of the node to be deleted
 *
 * Return: 1 if successful, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
    if (head == NULL || *head == NULL)
        return (-1);

    listint_t *current = *head;
    listint_t *temp = NULL;

    if (index == 0)
    {
        *head = (*head)->next;
        free(current);
        return (1);
    }

    for (unsigned int i = 0; current != NULL && i < index - 1; i++)
        current = current->next;

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

