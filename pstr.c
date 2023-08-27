#include "monty.h"

/**
*f_pstr - print top string
*@head: head variable
*@counter: counter var
*Return: 0
*/

void f_pstr(stack_t **head, unsigned int counter)

{
stack_t *a;  /* Pointer to traverse the stack */

(void)counter;

a = *head;

while (a)

{
/* Check if the value is outside the printable ASCII range */
if (a->n > 127 || a->n <= 0)

{
break;  /* Exit loop if not a printable character */
}

printf("%c", a->n);  /* Print the character */

a = a->next;

}

printf("\n");  /* Print a new line at the end of the string */
}
