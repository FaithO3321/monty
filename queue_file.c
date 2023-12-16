#include "monty.h"
/**
 * f_queue - prints at the top of stack
 * @top: stack head
 * @count: number of lines
*/
void f_queue(stack_t **top, unsigned int count)
{
	(void)top;
	(void)count;
	bus.lifi = 1;
}

/**
 * addqueue - add node to the tail stack
 * @n: new_value
 * @top: head of the stack
*/
void addqueue(stack_t **top, int n)
{
	stack_t *new_node, *aux;

	aux = *top;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*top = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}


