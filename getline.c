#include "main.h"

/**
 * lsh_read_line - a function that read lines of input
 *
 * Return: line
 */
char *lsh_read_line(void)
{
    char *line = NULL;
    ssize_t buffsize = 0;

    if (getline(&line, &buffsize, stdin) == -1){
        if (feof(stdin)) {
            exit(EXIT_SUCCESS);
        } else {
        perror("readline");
        exit(EXIT_FAILURE);
        }
    }
    return line;
}
