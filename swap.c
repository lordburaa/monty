#include "monty.h"

void f_swap(stack_t **head, unsigned int counter)
{
	stack_t *second = (*head)->next;
	stack_t *first = *head;
	
	if (counter == 100)
	{
		printf("ypp");
	}

	first->next = second->next;
	second->next = first;
	(*head) = second;
}
