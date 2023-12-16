#include "monty.h"
/**
 * f_add - adds the top two elements of the stack.
 * @top: stack head
 * @count: line_number
*/
void f_add(stack_t **top, unsigned int count)
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
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*top = h->next;
	free(h);
}
