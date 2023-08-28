#include "monty.h"

/**
*execute - Executes the given opcode
*@stack: Pointer to the head of the linked list (stack)
*@counter: counter var
*@file: file pointer
*@content: line content
*Return: 0
*/
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
/* List of available opcodes and their corresponding functions */
instruction_t opst[] = {
{"push", f_push}, {"pall", f_pall},/*combined to minimize spacing */
{"pop", f_pop}, {"nop", f_nop}, /*for the pop opcode task */
{"swap", f_swap}, {"pchar", f_pchar}, /* swaps the varibales */
{"add", f_add}, {"mod", f_mod}, /* add the variables */
{"sub", f_sub}, {"stack", f_stack}, /*for subtraction */
{"div", f_div}, {"rotl", f_rotl}, /*for division */
{"mul", f_mul}, {"queue", f_queue}, /* for multipliication */
{"pstr", f_pstr}, {"rotr", f_rotr}, /* for queing */
{"pint", f_pint},
{NULL, NULL}
};
unsigned int i = 0;
char *op;
op = strtok(content, " \n\t");  /* Tokenize the opcode from the content */
/* If the line is a comment, return success */
if (op && op[0] == '#')
return (0);
bus.arg = strtok(NULL, " \n\t");  /* Tokenize the argument from the content */
/* Loop through the opcode list to find a match */
while (opst[i].opcode && op)
{
if (strcmp(op, opst[i].opcode) == 0)
{
opst[i].f(stack, counter);  /* Execute the corresponding function */
return (0);  /* Return success */
}
i++;
}
/* If opcode is unknown, print an error message and exit */
if (op && opst[i].opcode == NULL)
{
fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
fclose(file);
free(content);
free_stack(*stack);
exit(EXIT_FAILURE);
}
return (1);  /* Return failure */
}
