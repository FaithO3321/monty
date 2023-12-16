#include "monty.h"
/**
 * f_pstr - prints the string from the top of stack
 * @top: stack head
 * @count: number of lines
*/
void f_pstr(stack_t **top, unsigned int count)
{
	stack_t *h;
	(void)count;

	h = *top;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}


