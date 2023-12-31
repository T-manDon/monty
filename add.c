#include "monty.h"

/**
 * f_add - this function adds the top element
 *
 * @head: the stack head variable
 * @counter: counter variable
 * Return: 0
*/

void f_add(stack_t **head, unsigned int counter)
{

stack_t *h;

int len = 0, aux;

h = *head;

/* Count the number of elements in the stack */
while (h)
{

h = h->next;

len++;

}
/* Check if there are at least 2 elements in the stack */
if (len < 2)
{
fprintf(stderr, "L%d: can't add, stack too short\n", counter);

fclose(bus.file); /* closes the file */
free(bus.content); /* frees the funct */
free_stack(*head);
exit(EXIT_FAILURE); /* output incase of failure */
}

h = *head;
aux = h->n + h->next->n;
h->next->n = aux;
*head = h->next;
free(h);  /* Free the previous top element */
}
