#include "monty.h"

/**
*f_mod - Calculates remaining division
*@head: head variable
*@counter: counter
*Return: 0
*/

void f_mod(stack_t **head, unsigned int counter)

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

fprintf(stderr, "L%d: can't mod, stack too short\n", counter);

fclose(bus.file);

free(bus.content);

free_stack(*head);

exit(EXIT_FAILURE);

}

a = *head;

if (a->n == 0)

{

fprintf(stderr, "L%d: division by zero\n", counter);

fclose(bus.file);

free(bus.content);

free_stack(*head);

exit(EXIT_FAILURE);

}

aux = a->next->n % a->n;

a->next->n = aux;

*head = a->next;

free(a);

}
