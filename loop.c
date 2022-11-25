#include "main.h"

/**
 * lsh_loop - Loop getting input and executing it.
 * @line: read line string
 * @args: split line string
 */
void lsh_loop(void)
{
  char *line;
  char **args;
  int status;

  do {
    printf("> ");
    line = lsh_read_line();
    args = lsh_split_line(line);
    status = lsh_execute(args);

    free(line);
    free(args);
  } while (status);
}
