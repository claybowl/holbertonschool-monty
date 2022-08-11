#ifndef MONTY_H
#define MONTY_H

/* Common libraries */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <unistd.h>


/* END */



/* Structures */

/**
* struct stack_s - doubly linked list representation of a stack (or queue)
* @n: integer
* @prev: points to the previous element of the stack (or queue)
* @next: points to the next element of the stack (or queue)
*
* Description: doubly linked list node structure
* for stack, queues, LIFO, FIFO
*/
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;



/**
* struct instruction_s - opcode and its function
* @opcode: the opcode
* @f: function to handle the opcode
*
* Description: opcode and its function
* for stack, queues, LIFO, FIFO
*/
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_num);
} instruction_t;


/**
* struct arg - global variable to hold the value of the argument to the opcode
* @argument: char variable.
*/

typedef struct arg
{
	char *argument;
} arg;
arg Arg;

/* END */



/* Prototypes */

<<<<<<< HEAD
void pushOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd);
void pallOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd);
void popOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd);
void swapOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd);
char *opGlobal[] = { NULL, NULL, "stack", NULL };
void opcode_check(int line_number, stack_t **stack);
=======
void add(stack_t **stack, unsigned int line_num)
void swap(stack_t **stack, unsigned int line_num)
void sub(stack_t **stack, unsigned int line_num)
void _div(stack_t **stack, unsigned int line_num)
void mul(stack_t **stack, unsigned int line_num)
void pushOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd)
void pallOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd)
void popOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd)
void swapOP(stack_t **stack, unsigned int line_num, char *opcode, FILE *fd)
char *opGlobal[] = { NULL, NULL, "stack", NULL }
int main(int argc, char **argv)
void opcode_check(int line_number, stack_t **stack)
>>>>>>> dba415de0dc8e434168a081507710b4e6191a478

/* END */



#endif /* MONTY_H */
