#include "monty.h"

/**
 * add - adds the top two elements of the stack
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_num)
{
	stack_t *temp = NULL;

	if (*stack && (*stack)->next)
		temp = (*stack)->next;
	if (!temp)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_num);
		argument[0] = "FAIL";
		return;
	}
	temp->n += (*stack)->n;
	free(*stack);
	*stack = temp;
}
