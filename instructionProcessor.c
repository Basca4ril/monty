#include "monty.h"
#include <stdio.h>

/**
 * is_validint - validates integers
 * @str: string
 * Return: 0 or 1
 */
int is_validint(const char *str)
{
	char *ptr;

	strtol(str, &ptr, 10);

	return (*ptr == '\0');
}

/**
 * executor - executes monty file instructions
 * @lineN: line number
 * @stackLink: list
 */
void executor(char *command, unsigned int lineN, stack_t **stackLink)
{
	char *opcode, *arg;

	opcode = strtok(command, " \t\n");

	if (opcode == NULL || opcode[0] == '#')
	{
		exit(0);
	}

	if (strcmp(opcode, "push") == 0)
	{
		arg = strtok(NULL, " \t\n");

		if (arg == NULL || !is_validint(arg))
		{
			fprintf(stderr, "L%u: usage: push integer\n", lineN);
			exit(EXIT_FAILURE);
		}

		push(stackLink, atoi(arg));
	}
	else if (strcmp(opcode, "pall") == 0)
	{
		pall(stackLink, lineN);
	}
	else
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", lineN, opcode);
		exit(EXIT_FAILURE);
	}
}


/**
 * processor - processes instructions from the monty file
 * @file: file
 * @stackLink: list
 */
void processor(FILE *file, stack_t **stackLink)
{
	char *line = NULL;
	size_t len = 0;
	unsigned int lineN = 0;

	while (getline(&line, &len, file) != -1)
	{
		lineN++;
		executor(line, lineN, stackLink);
	}

	free(line);
}
