#include "monty.h"
/**
 * f_mod - computes ttherest of the diveion of the secn 
 * @top elemtn ot s hte stack by the top elemt of th estck
 * Retiurn: no retrn
 */
void f_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int len = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		len++;
	}
	if (len< 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: divison by er\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
		}
	aux = h->next->n % h->n ;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
