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

stack_t *a;

int len = 0, aux;

a = *head;

while (a)

{

a = a->next;

len++;

}

if (len < 2)

{

fprintf(stderr, "L%d: can't add, stack too short\n", counter);

fclose(bus.file);

free(bus.content);

free_stack(*head);

exit(EXIT_FAILURE);

}

a = *head;

aux = a->n + a->next->n;

a->next->n = aux;

*head = a->next;

free(a);

}
