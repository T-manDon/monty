#include "monty.h"

/**
 * f_pop - eliminates top elements
 * @head: head pointer
 * @counter: counter variable
 *
 * Return: Nothing
 */

void f_pop(stack_t **head, unsigned int counter)

{
stack_t *h;  /* Temporary pointer to the top element */

if (*head == NULL)

{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);

fclose(bus.file);

free(bus.content);

free_stack(*head);

exit(EXIT_FAILURE);
}

h = *head;           /* Store the current top element */

*head = h->next;      /* Move the head to the next element */

free(h);              /* Free the previous top element */
}
