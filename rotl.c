#include "monty.h"

/**
 * f_rotl - Rotates the stack.
 * @head: Pointer to the stack head.
 * @counter: Line number (unused).
 *
 * Return: No return.
 */

void f_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *tmp = *head, *aux;

/* If the stack is empty or has only one element, no rotation needed */
if (*head == NULL || (*head)->next == NULL)
{
return;
}

aux = (*head)->next;  /* Store the second element */
aux->prev = NULL;  /* Update the previous pointer of the second element to NULL */

/* Traverse to the last element */
while (tmp->next != NULL)
{
tmp = tmp->next;
}

tmp->next = *head;  /* Set the next pointer of the last element to the current head */
(*head)->next = NULL;  /* Update the next pointer of the current head to NULL */
(*head)->prev = tmp;  /* Update the previous pointer of the current head to the last element */

(*head) = aux;  /* Update the head to point to the second element, effectively rotating */
}
