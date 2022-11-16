#include "main.h"

/**
 * main - function with infinite loop
 * @ac: void not use
 * @av: void not use
 * Return: loop.
 */
int main(int ac, char **av)
{
	(void)av;
	(void)ac;

	signal(SIGINT, ctrlC);
	prompt();
	return (0);
}
