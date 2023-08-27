#include "monty.h"

/**
 * f_pall - Prints stack elements
 * @head: head pointer
 * @counter: counter variable
 * Return: Nothing
 */

void f_pall(stack_t **head, unsigned int counter)

{
stack_t *a;  /* Pointer to traverse the stack */
(void)counter;

a = *head;
    
/* Check if the stack is empty */
if (a == NULL)
return;

/* Print each element in the stack */
while (a)
{
printf("%d\n", a->n);
a = a->next;
}
}
