#include "monty.h"
/**
 * add - adds the top two elements of the stack
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack && (*stack)->next)
		temp = (*stack)->next;
	if (!temp)
	{
		dprintf(STDERR_FILENO, "L%d: can't add, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	temp->n += (*stack)->n;
	free(*stack);
	*stack = temp;
}
/**
 * swap - swaps the top two elements of the stack
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void swap(stack_t **stack, unsigned int line_number)
{
	int temp;

	if (*stack && (*stack)->next)
	{
		temp = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = temp;
	}
	else
	{
		dprintf(STDERR_FILENO, "L%d: can't swap, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
}
/**
 * sub - subtracts the top element of the stack
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void sub(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack && (*stack)->next)
		temp = (*stack)->next;
	if (!temp)
	{
		dprintf(STDERR_FILENO, "L%d: can't sub, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	temp->n -= (*stack)->n;
	free(*stack);
	*stack = temp;
}
/**
 * _div - divides the second top element of the stack
 * @stack: the stack
 * @line_number: instructions line number
 * Return: nothing
 */
void _div(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack && (*stack)->next)
		temp = (*stack)->next;
	if (!temp)
	{
		dprintf(STDERR_FILENO, "L%d: can't div, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	temp->n /= (*stack)->n;
	free(*stack);
	*stack = temp;
}
/**
 * mul - multiplies the second top element of the stack
 * @stack: the stack
 * @line_number: instruction line number
 * Return: nothing
 */
void mul(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = NULL;

	if (*stack && (*stack)->next)
		temp = (*stack)->next;
	if (!temp)
	{
		dprintf(STDERR_FILENO, "L%d: can't mul, stack too short\n", line_number);
		argument[0] = "FAIL";
		return;
	}
	temp->n *= (*stack)->n;
	free(*stack);
	*stack =  temp;
}
