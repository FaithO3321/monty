#include "monty.h"
/**
 * f_pall - Function to print entire stack
 * @top: stack head
 * @count: no used
*/
void f_pall(stack_t **top, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *top;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
