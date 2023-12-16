#include "monty.h"
/**
 * f_mul - multiplies the top two elements of the stack.
 * @top: stack head
 * @count: number of lines
*/
void f_mul(stack_t **top, unsigned int count)
{
	stack_t *h;
	int length = 0, aux;

	h = *top;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	aux = h->next->n * h->n;
	h->next->n = aux;
	*top = h->next;
	free(h);
}


