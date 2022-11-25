#include "main.h"

/**
 * lsh_execute - Execute shell built-in or launch program.
 * @args: Null terminated list of arguments.
 * Return: 1 if the shell should continue running, 0 if it should terminate
 */
int lsh_execute(char **args)
{
	int i;

	if (args[0] == NULL)
	{
		return (1);
	}
	for (i = 0; i < lsh_num_builtins(); i++)
	{
		if (strcmp(args[0], sh_builtin[i]) == 0)
		{
			return ((*builtin_func[i])(args));
		}
	}
	return (lsh_launch(args));
}
