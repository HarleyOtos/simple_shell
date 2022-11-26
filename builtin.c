#include "main.h"

/**
 * lsh_num_builtins - List of builtin commands, followed
 * by their corresponding functions.
 */
char *newBuilt[] = {
	"cd",
	"help",
	"exit"
};

int (*builtin_func[]) (char **) = {
	&lsh_cd,
	&lsh_help,
	&lsh_exit
};

int lsh_num_builtins(void)
{
	return (sizeof(newBuilt) / sizeof(char *));
}

/**
 * lsh_cd - Builtin command to change directory.
 * @args: List of args.  args[0] is "cd".  args[1] is the directory.
 * Return: Always returns 1, to continue executing.
 */
int lsh_cd(char **args)
{
	if (args[1] == NULL)
	{
		fprintf(stderr, "lsh: expected argument to \"cd\"\n");
	}
	else
	{
		if (chdir(args[1]) != 0)
		{
			perror("lsh");
		}
	}
	return (1);
}

/**
 * lsh_help - Builtin print help command
 * @args: List of args.  Not examined.
 * Return: Always returns 1, to continue executing.
 */
int lsh_help(char **args)
{
	int i;

	printf("Simple Shell's LSH\n");
	printf("Type program names and arguments, and hit enter.\n");
	printf("The following are built in:\n");

	for (i = 0; i < lsh_num_builtins(); i++)
	{
		printf("  %s\n", newBuilt[i]);
	}
	printf("Use the man command for information on other programs.\n");
	return (1);
}

/**
 * lsh_exit - Builtin exit command.
 * @args: List of args.  Not examined.
 * Return: Always returns 0, to terminate execution.
 */
int lsh_exit(char **args)
{
	return (0);
}
