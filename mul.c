#include "monty.h"

/**
 * f_mul - Multiplies slack elements
 * @head: head pointer
 * @counter: counter variable
 * Return: Nothing
 */

void f_mul(stack_t **head, unsigned int counter)

{
stack_t *a;          /* main variable */
int len = 0, aux;

a = *head;

/* Count the number of elements in the stack */
while (a)
{
a = a->next;
len++;
}

/* Ensure there are at least 2 elements for multiplication */
if (len < 2)
{
fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

a = *head;
aux = a->next->n * a->n;   /* Multiply the top two elements */
a->next->n = aux;          /* Store the result in the next element */
*head = a->next;           /* Move the head to the next element */
free(a);                   /* Free the previous top element */
}
