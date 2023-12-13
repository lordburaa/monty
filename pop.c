#include "monty.h"
/**
 * f_pop - prints the top
 * @head: stack head
 * @acounter: line number
 * Return: no return
 */
void f_pop(stack_t **head, unsigned int counter)
{
	stack_t *h;
	stack_t *temp = *head;

	if (*head == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
/*		fclose(bus.file);
		free(bus.content);
*/		exit(EXIT_FAILURE);
	}
	h = *head;
	h = h->next;
	h->prev = NULL;

	*head = h;
	free(temp);
}
