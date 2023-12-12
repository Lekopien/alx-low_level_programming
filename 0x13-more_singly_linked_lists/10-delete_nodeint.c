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
    listint_t *current, *temp;
    unsigned int count = 0;

    if (*head == NULL)
        return (-1);

    if (index == 0)
    {
        temp = *head;
        *head = temp->next;
        free(temp);
        return (1);
    }

    current = *head;
    while (current != NULL && count < index - 1)
    {
        current = current->next;
        count++;
    }

    if (current == NULL || current->next == NULL)
        return (-1);

    temp = current->next;
    current->next = temp->next;
    free(temp);

    return (1);
}

