#include "monty.h"
/**
*f_div - this function divs top 2 elements
*@head: this is the head variable
*@counter: the number var
*Return: 0
*/
void f_div(stack_t **head, unsigned int counter)
{
stack_t *h;
int len = 0, aux;
h = *head; /* Count the number of elements in the stack */

while (h)
{
h = h->next;
len++;
}
if (len < 2) /* Check if there are at least 2 elements in the stack */
{
fprintf(stderr, "L%d: can't div, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
h = *head;
if (h->n == 0) /* Check for division by zero */
{
fprintf(stderr, "L%d: division by zero\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
aux = h->next->n / h->n;/* Calculate the division result */
h->next->n = aux; /* Store the result in the next node */
*head = h->next;/* Update the head to the next node */
free(h); /* Free the previous top element */
}
