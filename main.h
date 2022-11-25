#ifndef _MAIN_H_
#define _MAIN_H_

#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define LSH_TOK_BUFSIZE 64
#define LSH_TOK_DELIM " \t\r\n\a"
#define LSH_RL_BUFSIZE 1024

int main(int argc, char **argv);
void lsh_loop(void);
int lsh_cd(char **args);
int lsh_help(char **args);
int lsh_exit(char **args);
char **lsh_split_line(char *line);
int lsh_execute(char **args);
int lsh_launch(char **args);
char *lsh_read_line(void);

char *sh_builtin[];
int (*builtin_func[]) (char **);
int lsh_num_builtins(void);


#endif
