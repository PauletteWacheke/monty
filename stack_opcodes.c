#include "monty.h"
/**
 * push - function pushes an element to the stack
 * @stack: is the double pointer to the top of the stack
 * @line_number: value of the new element
 *
 * Return: nothing
 */
void push(stack_t **stack, unsigned int line_number)
{
	int n;
	stack_t *new;

	if (global.argument == NULL || isdigit(global.argument))
	{
		fprintf(stderr, "L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	n = atoi(global.argument);

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *stack;

	if (*stack != NULL)
		(*stack)->prev = new;
	*stack = new;
}
/**
 * pall - function prints all values on a stack
 * @stack: double pointer to the top of the stack
 * @line_number: line number of the current operation
 * Return: nothing
 */
void pall(stack_t **stack, unsigned int line_number)
{
	stack_t *current;

	(void)line_number;

	current = *stack;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
	}

}
