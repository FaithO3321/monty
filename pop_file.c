#include "monty.h"
/**
 * f_pop - prints the top of stack
 * @top: stack head
 * @count: line_number
*/
void f_pop(stack_t **top, unsigned int count)
{
	stack_t *h;

	if (*top == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	*top = h->next;
	free(h);
}


