#ifndef MONTY_H
#define MONTY_H
#define _POSIX_C_SOURCE 200809L
#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct bus_s - variables -args, file, line content
 * @arg: value
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack <-> queue
 * Description: carries values through the program
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  bus_t;
extern bus_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
void f_push(stack_t **top, unsigned int count);
void f_pall(stack_t **top, unsigned int count);
void f_pint(stack_t **top, unsigned int count);
void f_pop(stack_t **top, unsigned int count);
void f_swap(stack_t **top, unsigned int count);
void f_add(stack_t **top, unsigned int count);
void f_nop(stack_t **top, unsigned int count);
void f_sub(stack_t **top, unsigned int count);
void f_div(stack_t **top, unsigned int count);
void f_mul(stack_t **top, unsigned int count);
void f_mod(stack_t **top, unsigned int count);
int execute(char *content, stack_t **stack, unsigned int count, FILE *file);
void free_stack(stack_t *top);
void f_pchar(stack_t **top, unsigned int count);
void f_pstr(stack_t **top, unsigned int count);
void f_rotl(stack_t **top,  __attribute__((unused)) unsigned int count);
void f_rotr(stack_t **top, __attribute__((unused)) unsigned int count);
void f_stack(stack_t **top, unsigned int count);
void f_queue(stack_t **top, unsigned int count);
void addqueue(stack_t **top, int n);
int main(int argc, char *argv[]);
void addnode(stack_t **top, int n);

#endif /* MONTY_H */