#include "monty.h"

/**
*f_pall - this function prints stack
*@head: the head variable
*@counter: the counter
* Return: 0
*/

void f_pall(stack_t **head, unsigned int counter)

{

stack_t *h;

(void)counter;

h = *head;

if (h == NULL)

return;

while (h)

{

printf("%d\n", h->n);
h = h->next;
}
}
