#include "monty.h"

/**
 * executor - executes instructions
 * @line: line
 * @lineN: line number
 */
void executor(char *line, unsigned int lineN)
{
	char *opcode, *num;

	opcode = strtok(line, " \t\n");
	if (!opcode || opcode[0] == '#')
		return;

	if (strcmp(opcode, "push") == 0)
	{
		num = strtok(NULL, "\t\n");
		if (!num)
		{
			fprintf(stderr, "L%d: usage: push integer\n", lineN);
			exit(EXIT_FAILURE);
		}
		push(&stackLink, atoi(num));
	}
	else if (strcmp(opcode, "pall") == 0)
		pall(&stackLink, lineN);

	else
	{
		fprintf(stderr, "L%d: unknown intruction %s\n", lineN, opcode);
		exit(EXIT_FAILURE);
	}
}


