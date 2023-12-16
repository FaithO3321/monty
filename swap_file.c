#include "monty.h"
/**
 * f_swap - adds the top two elements of the stack.
 * @top: stack head
 * @count: line_number
*/
void f_swap(stack_t **top, unsigned int count)
{
	stack_t *h;
	int len = 0, aux;

	h = *top;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}


