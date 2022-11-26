#include "main.h"

/**
 * main - evaluate if there is a input and proccess an output
 * @argc: don't used
 * @argv: arguments to proccess
 * @envp: array whit enviroment
 *
 * Return: always 0
 */

int main(int argc, char **argv, char **envp)
{
	char *buffer = NULL;
	size_t buffer_size = 0;
	ssize_t prints = 1;
	int count = 0;

	(void)argc;
	(void)argv;

	while (prints > 0)
	{
		signal(SIGINT, sig_handler);
		if (isatty(STDIN_FILENO))
			write(STDOUT_FILENO, "($) ", 4);
		prints = getline(&buffer, &buffer_size, stdin);
		if (prints == -1)
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			break;
		}
		count = words_in_string(buffer);
		if (count > 0)
			index_function(buffer, envp);
	}
	free(buffer);
	return (0);
}
