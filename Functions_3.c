#include "monty.h"
/**
 * _stack - sets the stack mode
 * @stack: the stack
 * @line_number: line number
 * Return: nothing
 */
void _stack(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
	argument[1] = "stack";
}
/**
 * queue - sets the queue mode
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void queue(stack_t **stack, unsigned int line_number)
{
	UNUSED(stack);
	UNUSED(line_number);
	argument[1] = "queue";
}
/**
 * _isalpha - checks for alphabetic character
 * @c:is a character
 * Return: nothing
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	return (0);
}
/**
 * free_stack - frees a stack
 * @stack: stack to be freed
 * Return: nothing
 */
void free_stack(stack_t *stack)
{
	stack_t *temp;

	if (stack)
	{
		while ((temp = stack))
		{
			stack = stack->next;
			free(temp);
		}
	}
}
