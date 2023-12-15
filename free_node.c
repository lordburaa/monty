#include "monty.h"
/**
 * free_stack - free a double linked list
 * @head: head of the stack
 */
void free_stack(stack_t *head)
{
	stack_t *new;

	new = head;
	while (head)
	{

		new = head;
		head = head->next;
		free(new);
	}
}
