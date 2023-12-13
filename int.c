#include "monty.h"
/**
 * f_pint - print the top
 * @head: stack head
 * @counter: line_number
 * Return: not return
 */
void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stat empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}