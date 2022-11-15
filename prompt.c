#include "main.h"

/**
 * prompt - a call for prompt from another function (prompt)
 *
 **/
void prompt(void)
{
	for (;;)
	{
		char *text = NULL, **environ;
		pid_t child_pid;
		int status, lenbuf;
		size_t bufsize = 0;

		place("$ ");
		lenbuf = getline(&text, &bufsize, stdin);
		if (lenbuf == -1)
			exit(98);
		if (compareExit(text, "exit") == 0)
			exit(0);
		if (compareEnv(text, "env") == 0)
		{
			while (*environ != NULL)
			{
				if (!(_cmpdir(*environ, "USER")) ||
						!(_cmpdir(*environ, "LANGUAGE")) ||
						!(_cmpdir(*environ, "SESSION")) ||
						!(_cmpdir(*environ, "COMPIZ_CONFIG_PROFILE")) ||
						!(_cmpdir(*environ, "SHLV")) ||
						!(_cmpdir(*environ, "HOME")) ||
						!(_cmpdir(*environ, "C_IS")) ||
						!(_cmpdir(*environ, "DESKTOP_SESSION")) ||
						!(_cmpdir(*environ, "LOGNAME")) ||
						!(_cmpdir(*environ, "TERM")) ||
						!(_cmpdir(*environ, "PATH")))
				{
					place(*environ), place("\n"); }
				environ++; }}
		child_pid = fork();
		if (child_pid < 0)
			perror("Error");
		if (child_pid == 0)
			id_string(text);
		else
			wait(&status);
	}
}
