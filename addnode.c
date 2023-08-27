#include "monty.h"

/**
 * addnode - increases the number of nodes
 *
 * @head: stackhead variable
 * @b: the nth value
 * Return: 0
*/

void addnode(stack_t **head, int b)

{

stack_t *new_node, *aux;

aux = *head;

new_node = malloc(sizeof(stack_t));

if (new_node == NULL)

{

printf("Error\n");

exit(0);

}

if (aux)

aux->prev = new_node;

new_node->n = b;

new_node->next = *head;

new_node->prev = NULL;

*head = new_node;

}
