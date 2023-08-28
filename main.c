#define _POSIX_C_SOURCE 200809L

#include "monty.h"
#include <stdio.h>

 /**
 * main - Entry point of the Monty code interpreter
 * @argc: Number of command-line arguments
 * @argv: Array of command-line argument strings
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
char *content;
FILE *file;
size_t size = 0;
ssize_t read_line = 1;
stack_t *stack = NULL;
unsigned int counter = 0;

/* Check if the correct number of command-line arguments is provided */
if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(EXIT_FAILURE);
}

/* Open the specified Monty file */
file = fopen(argv[1], "r");
bus.file = file;

/* Check if the file was successfully opened */
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(EXIT_FAILURE);
}

/* Read and process each line of the file */
while (read_line > 0)
{
content = NULL;

/* Read a line from the file */
read_line = getline(&content, &size, file);
bus.content = content;
counter++;

/* Process the line if it was successfully read */
if (read_line > 0)
{
execute(content, &stack, counter, file);
}

free(content); /* Free the allocated content memory */
}
free_stack(stack); /* Free the memory used by the stack and close the file */
fclose(file);
return (0);
}
