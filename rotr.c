#include "monty.h"

/**
 * f_rotr - Rotates the stack, moving the top element to the bottom.
 * @head: Pointer to the stack's head node.
 * @counter: Line number (unused in this function).
 * Return: Nothing.
 */

void f_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
stack_t *copy;  /* A pointer to traverse the stack */

copy = *head;

/* If the stack is empty or contains only one element, no rotation is needed */
if (*head == NULL || (*head)->next == NULL)
{
return;
}

/* Traverse the stack to find the last element */
while (copy->next)
{
copy = copy->next;
}

/* Update pointers to achieve rotation */
copy->next = *head;
copy->prev->next = NULL;
copy->prev = NULL;
(*head)->prev = copy;
(*head) = copy;  /* Update the head poit*/
