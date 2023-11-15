#include "monty.h"

int main(int argc, char *argv[])
{
	FILE *file;
	stack_t *st = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		return (EXIT_FAILURE);
	}

	file = fopen(argv[1], "r");

	if (file == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		return (EXIT_FAILURE);
	}

	processor(file, &st);

	fclose(file);

	return (EXIT_SUCCESS);
}
