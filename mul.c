#include "monty.h"
/**
 * f_mul - multiplicative of the number
 * @head: head
 * @len_number: len number
 */
void f_mul(stack_t **head, unsigned int len_number)
{
	stack_t *temp;

	temp = *head;
	if (temp->next == NULL || temp == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short", len_number);
		exit(EXIT_FAILURE);
	}
	temp->n = (*head)->next->n * (*head)->n;
	temp->next = temp->next->next;
	*head = temp;
}
