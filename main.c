#include "monty.h"
stack_t *head = NULL;

/**
 * main - entry point of the function
 * @argc: arguments count
 * @argv: list of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
	    fprintf(stderr, "UASAGE: monty file\n");
	    exit(EXIT_FAILURE);
    }
    open_file(argv[1]);
    free_nodes();

    return (0);
}
