#include "monty.h"

void f_pchar(stack_t **head, unsigned int len_number)
{
	if (!(*head))
	{
		fprintf(stderr, "L%d: can't pchar m stack empty", len_number);
		exit(EXIT_FAILURE);
	}
	
	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range", len_number);
		exit(EXIT_FAILURE);
	}

	putchar((*head)->n);
	putchar('\n');
}
