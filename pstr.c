#include "monty.h"
/**
 * f_pstr - pritns the string starting at the top of teh stack 
 * @head: stack head
 * @counter: LINE NUMBER
 * Return: no return
 */
void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	while (h)
	{
		if (h->n > 123 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
