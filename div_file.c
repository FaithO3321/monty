#include "monty.h"
/**
 * f_div - divides the top two elements of the stack.
 * @top: stack head
 * @count: number of lines
*/
void f_div(stack_t **top, unsigned int count)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	h = *top;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*top = h->next;
	free(h);
}


