#include "monty.h"

/**
* free_stack - the function frees the list
*
* @head: head variable
*/

void free_stack(stack_t *head)

{

stack_t *aux;

aux = head;

while (head)

{

aux = head->next;

free(head);

head = aux;

}
}
