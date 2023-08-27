#include "monty.h"

/**
 * f_pchar - Prints the top charactrs on stack
 * @head: stackhead pointer
 * @counter: counter variable
 * Return: Nothing
 */

void f_pchar(stack_t **head, unsigned int counter)

{
stack_t *a;  /* Pointer to traverse the stack */

a = *head;

/* Check if the stack is empty */
if (!a)
{
fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);

}

/* Check if the value is within the valid ASCII range */
if (a->n > 127 || a->n < 0)
{
fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);

}

/* Print the character corresponding to the ASCII value */
printf("%c\n", a->n);

}
