#include "monty.h"
/**
 * f_pint - prints the top of stack
 * @top: stack head
 * @count: line_number
*/
void f_pint(stack_t **top, unsigned int count)
{
	if (*top == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", count);
		fclose(bus.file);
		free(bus.content);
		free_stack(*top);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*top)->n);
}


