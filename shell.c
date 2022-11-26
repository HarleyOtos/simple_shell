#include "main.h"

/**
 * main - function with infinite loop
 * @argc: void not use
 * @argv: void not use
 * Return: loop.
 */
int main(int argc, char **argv)
{
	(void)argv;
	(void)argc;

	signal(SIGINT, ctrlC);
	prompt();
	return (0);
}
