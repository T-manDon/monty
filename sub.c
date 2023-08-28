#include "monty.h"

/**
 * f_sub - Subtracts the top element of the stack from the second top element
 * @head: Pointer to the stack's head
 * @counter: Line number being executed
 * Return: No return value
 */
void f_sub(stack_t **head, unsigned int counter)
{
stack_t *current_node;
int difference, node_count;

current_node = *head;

/* Count the number of nodes in the stack */
for (node_count = 0; current_node != NULL; node_count++)
current_node = current_node->next;

/* Check if there are at least two elements in the stack */
if (node_count < 2)
{
printf(stderr, "L%d: can't sub, stack too short\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

current_node = *head;

/* Calculate the difference between the second top and top elements */
difference = current_node->next->n - current_node->n;
current_node->next->n = difference;
*head = current_node->next;

/* Free the previous top node */
free(current_node);
}
