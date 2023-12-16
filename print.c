#include "monty.h"
/**
 * f_pall - print the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
 */
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
	{
		check = 0;
		return;
	}
	while (h)
	{ 
		
		pall_buf[check] = h->n;
		h = h->next;
		check++;
	}

}
