#include "monty.h"

/**
*f_mod - Calculates remaining division
*@head: head variable
*@counter: counter
*Return: 0
*/

void f_mod(stack_t **head, unsigned int counter)

{
stack_t *h;

int len = 0, aux;

h = *head;

while (h)

{
	h = h->next;

	len++;
}

if (len < 2)

{
	fprintf(stderr, "L%d: cannot mod, short stack\n", counter);

	fclose(bus.file);

	free(bus.content);

	free_stack(*head);

	exit(EXIT_FAILURE);
}

h = *head;

if (h->n == 0)

{
	fprintf(stderr, "L%d: divide by zero\n", counter);

	fclose(bus.file);

	free(bus.content);

	free_stack(*head);

	exit(EXIT_FAILURE);
}

	aux = h->next->n % h->n;

	h->next->n = aux;

	*head = h->next;

	free(h);
}
