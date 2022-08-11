#include "monty.h"

/**
 *push - pushes an element onto a stack
 *@stack: the stack to push the element to
 *@line_number: the line number of the particulare opcode instruction
 *              in the monty byte code file
 *
 *Return: void
 */

void push(stack_t **stack, unsigned int line_number)
{
	char *arg = Arg.argument;  /* fetch the argument to the opcode that we stored in our global variable --- defined un the header file*/
	int data, i;
	stack_t *element;

	/* check if this opcode had an argument --- push requires an argument because it involves inserting an element onto the stack */
	if (arg == NULL)
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	
	/* check if the argument can be converted to a number --- for this program, we will be working with integers only */
	for (i = 0; arg[i] != '\0'; i++)
	{
		if ((isdigit(arg[i])) == 0 && arg[i] != '-')
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}

	data = atoi(arg);  /* change opcode argument to integer */
	
	/* create a node for the new element that will be added to the stack --- */
	element = malloc(sizeof(stack_t));
	if (element == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	
	/* fill the new node with our argument and push it onto the stack */
	element->n = data;
	element->prev = NULL;
	element->next = *stack;
	if (*stack != NULL)
		(*stack)->prev = element;
	*stack = element;
}
