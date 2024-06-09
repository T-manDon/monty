#include "monty.h"

/**
 * f_pint - function to print top values
 * @head: head variable
 * @counter: counter variable
 *
 * Return: nothing
*/

void f_pint(stack_t **head, unsigned int counter)

{

if (*head == NULL)

{
fprintf(stderr, "L%u: can't pint, stack empty\n", counter);

fclose(bus.file);

free(bus.content);

free_stack(*head);

exit(EXIT_FAILURE);
}

/**Print the value at the top of the stack */
printf("%d\n", (*head)->n);
}
