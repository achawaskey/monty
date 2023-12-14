#include "monty.h"

/**
 * f_pall - prints the stack
 * @head: head of stack
 * @counter: no used
 * Return: nothing
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *i;
	(void)counter;

	i = *head;
	if (i == NULL)
		return;
	while (i)
	{
		printf("%d\n", i->n);
		i = i->next;
	}
}
