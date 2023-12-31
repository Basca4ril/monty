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

	else if (strcmp(opcode, "pint") == 0)
		pint(&stackLink, lineN);

	else if (strcmp(opcode, "pop") == 0)
		pop(&stackLink, lineN);

	else if (strcmp(opcode, "swap") == 0)
		swap(&stackLink, lineN);

	else if (strcmp(opcode, "add") == 0)
		add(&stackLink, lineN);

	else if (strcmp(opcode, "nop") == 0)
		nop(&stackLink, lineN);

	else if (strcmp(opcode, "sub") == 0)
		sub(&stackLink, lineN);

	else if (strcmp(opcode, "div") == 0)
		divid(&stackLink, lineN);

	else if (strcmp(opcode, "mul") == 0)
		mul(&stackLink, lineN);

	else if (strcmp(opcode, "mod") == 0)
		mod(&stackLink, lineN);

	else if (opcode == NULL || opcode[0] == '#')
		return;

	else if (strcmp(opcode, "pchar") == 0)
		pchar(&stackLink, lineN);

	else if (strcmp(opcode, "pstr") == 0)
		pstr(&stackLink, lineN);

	else if (strcmp(opcode, "rotl") == 0)
		rotl(&stackLink, lineN);
	
	else if (strcmp(opcode, "rotr") == 0)
		rotr(&stackLink, lineN);


	else
	{
		fprintf(stderr, "L%d: unknown instruction %s\n", lineN, opcode);
		exit(EXIT_FAILURE);
	}
}
