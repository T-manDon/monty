#include "monty.h"

/**
*f_div - this function divs top 2 elements
*@head: this is the head variable
*@counter: the number var
*Return: 0
*/

void f_div(stack_t **head, unsigned int counter)

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

fprintf(stderr, "L%d: can't div, stack too short\n", counter);

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

aux = a->next->n / a->n;

a->next->n = aux;

*head = a->next;

free(a);
}
