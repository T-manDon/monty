#include "monty.h"

/**
 * f_push - appends node
 * @head: head pointer
 * @counter: counter var
 * Return: Nothing
 */

void f_push(stack_t **head, unsigned int counter)

{
int n, j = 0, flag = 0;

/* Check if the argument exists and is valid */
if (bus.arg)
{
if (bus.arg[0] == '-')
j++;
for (; bus.arg[j] != '\0'; j++)
{
if (bus.arg[j] > 57 || bus.arg[j] < 48)
flag = 1;
}
if (flag == 1)
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}
}
else
{
fprintf(stderr, "L%d: usage: push integer\n", counter);
fclose(bus.file);
free(bus.content);
free_stack(*head);
exit(EXIT_FAILURE);
}

/* Convert argument to an integer */
n = atoi(bus.arg);

/* Check if adding to stack or queue */
if (bus.lifi == 0)
addnode(head, n);  /* Add to stack */
else
addqueue(head, n);  /* Add to queue */
}
