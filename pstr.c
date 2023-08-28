#include "monty.h"

/**
*f_pstr - print top string
*@head: head variable
*@counter: counter var
*Return: 0
*/

void f_pstr(stack_t **head, unsigned int counter)

{
stack_t *h;  /* Pointer to traverse the stack */

(void)counter;

h = *head;

while (h)

{
/* Check if the value is outside the printable ASCII range */
if (h->n > 127 || h->n <= 0)

{
break;  /* Exit loop if not a printable character */
}

printf("%c", h->n);  /* Print the character */

h = h->next;

}

printf("\n");  /* Print a new line at the end of the string */
}
