#ifndef MONT_H
#define MONT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _GNU_SOURCE





/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
        int n;
        struct stack_s *prev;
        struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
        char *opcode;
        void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
/**
 * struct bus_s - bariables - args, file , line content
 * @arg: vlaue
 * @file: pointer to monty file
 * @content: line content
 * @lifi: flag change stack 
 * Description: carries values through the programm
 */
typedef struct bus_s
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
} bus_t;
extern bus_t bus;

/********************** FILE **********************/
void f_pall(stack_t **head, unsigned int counter);
void f_add(stack_t **head, unsigned int counter);
void f_push(stack_t **head, unsigned int counter);
void addnode(stack_t **head, int n);
int execute(char *content, stack_t **stack, unsigned int counter, FILE *file);
void f_pint(stack_t **head, unsigned int counter);
void f_pop(stack_t **head, unsigned int counter);


#endif
