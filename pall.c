#include "monty.h"

/**
 * f_pall - Prints stack elements
 * @head: head pointer
 * @counter: counter variable
 * Return: Nothing
 */

void f_pall(stack_t **head, unsigned int counter)

{
stack_t *h;  /* Pointer to traverse the stack */
(void)counter;

h = *head;

/* Check if the stack is empty */
if (h == NULL)
return;

/* Print each element in the stack */
while (h)
{
printf("%d\n", h->n);
h = h->next;
}
}
