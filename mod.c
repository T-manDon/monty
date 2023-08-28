#include "monty.h"

/**
*f_mod - Calculates remaining division
*@head: head variable
*@counter: counter
*Return: 0
*/

void f_mod(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;

h = *head;

/* Calculate the length of the stack */
while (h)
{
h = h->next;
len++;
}

/* Check if there are at least two elements in the stack */
if (len < 2)
{
fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

h = *head;

/* Check for division by zero */
if (h->n == 0)
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

/* Calculate the remainder of the division */
aux = h->next->n % h->n;
h->next->n = aux;
*head = h->next;

free(h); /* Free the current top node */
}
