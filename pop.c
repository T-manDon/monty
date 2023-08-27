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
stack_t *a;  /* Temporary pointer to the top element */

if (*head == NULL)

{
fprintf(stderr, "L%d: can't pop an empty stack\n", counter);

fclose(bus.file);

free(bus.content);

free_stack(*head);

exit(EXIT_FAILURE);
}

a = *head;           /* Store the current top element */

*head = a->next;      /* Move the head to the next element */

free(a);              /* Free the previous top element */
}
