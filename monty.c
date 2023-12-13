#define _GNU_SOURCE
#include "monty.h"


bus_t bus = {NULL, NULL, NULL, 0};

/**
 * main - monty interpreter
 * @argc: number of argumets
 * @argv: monty file locatoin
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *con;
	FILE *file;
	ssize_t readline = 1;
	unsigned int count = 0;
	size_t size = 0;
	stack_t *stack = NULL;


	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (readline > 0)
	{
		con = NULL;
		readline = getline(&con, &size, file);
		bus.content = con;
		count++;
		if (readline > 0)
		{
			execute(con, &stack, count, file);
		}
	}
	fclose(file);
	return (0);
}
