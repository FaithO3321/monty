#include "monty.h"
/**
 * f_pchar - prints the charcter at the top of the stack
 * @top: stack head
 * @count: number of lines
*/
void f_pchar(stack_t **top, unsigned int count)
{
	stack_t *h;

	h = *top;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}


