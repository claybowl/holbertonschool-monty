#include "monty.h"

char *opGlobal[] = { NULL, NULL, "stack", NULL };

/**
* main - runs the monty
* @argc: argument count
* @argv: the individual arguments
*
* Return: 0
*/

int main(int argc, char **argv)
{
	FILE *fd;

	if (argc != 2) /*checks if correct amount of argc*/
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	fd = fopen(argv[1], "r"); /*opens and reads file*/
	if (fd == NULL) /*checks if file is valid*/
	{
		dprintf(STDERR_FILENO, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	opcode_finder(fd); /*calls function to read file*/
	if (fclose(fd) != 0) /* checks if close failed */
		exit(EXIT_FAILURE);
}

/**
* opcode_check - executes the found opcode
*
* @stack: stack of doubly linked list
* @line: line number of opcode
* @pushOP: decleration
* @pallOP: decleration
* @popOP: decleration
* @swapOP: decleration
*
*/

void opcode_check(int line_number, stack_t **stack)
	{
		int i, opCheck = 0;
		instruction_t opFunction[] = {
		{"push", pushOp},
		{"pall", pallOp},
		{"pint", pintOp},
		{"pop", popOp},
		{"swap", swapOp},
		{"add", addOp},
		{"sub", subOp},
		{"div", divOp},
		{"mod", modOp},
		{"mul", mulOp},
		{"pchar", pcharOp},
		{"pstr", pstrOp},
		{"rotl", rotlOp},
		{"rotr", rotrOp},
		{"stack", stackQOp},
		{"queue", stackQOp},
		{"nop", NULL},
		{NULL, NULL},
	};
	for (i = 0; opFunction[i].opcode != NULL; i++)
		{
		/*input matches an opcode*/
			if (strcmp(oPfunction[i].opcode, opCommand[0] == 0)
				{
					if (opFunction[i].f)
						opFunction[i].f(stack, line_number);
					if (opCommand[3])/*opcode baaad*/
						return;
					opCheck = 1;/*opcode success!*/
					break;
				}
		}
	if (opCheck != 1)/*input not matching any opcode*/
	{
		dprintf(STDERR_FILENO, "L%u: unknown instruction %s\n",
				line_number, opCommand[0]);
		opCommand[3] = "ERROR";
		return;
	}
