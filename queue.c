#include "monty.h"
/**
 * f_queue - Switches the stack to queue mode (FIFO).
 * @head: Pointer to the stack head.
 * @counter: Line number.
 * Return: Nothing.
 */
void f_queue(stack_t **head, unsigned int counter)
{
(void)head;  /* Unused parameter */
(void)counter;  /* Unused parameter */
bus.lifi = 1;  /* Set the flag to indicate queue behavior */
}
/**
 * addqueue - Adds a new node to the tail of the stack (queue).
 * @b: New value to be added.
 * @head: Pointer to the head of the stack.
 * Return: Nothing
 */
void addqueue(stack_t **head, int b)
{
stack_t *new_node, *aux;
aux = *head;  /* Temporarily store the current head pointer */
new_node = malloc(sizeof(stack_t));  /* Allocate memory for the new node */
if (new_node == NULL)
{
printf("Error\n");  /* Handle allocation error */
}
new_node->n = b; /* Assign the new value to the new node */
new_node->next = NULL;  /* Set the next pointer of the new node to NULL */
if (aux)
{
while (aux->next)
aux = aux->next;  /* Traverse to the last node in the stack */
}
if (!aux)  /* If the stack is empty */
{
*head = new_node;  /* Update the head to point to the new node */
new_node->prev = NULL;  /* Set the previous pointer of the new node to NULL */
}
else  /* If the stack is not empty */
{
aux->next = new_node;  /* Set the next pointer */
new_node->prev = aux;  /* Set the previous pointer */
}
}
