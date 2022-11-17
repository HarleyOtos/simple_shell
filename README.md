# Simple_Shell project repository

A shell is special user program which provide an interface to user to use
operating system services. 
Shell accept human readable commands from user
and convert them into something which kernel can understand. 
It is a command
language interpreter that execute commands read from input devices such as
keyboards or from files. 
The shell gets started when the user logs in or start the
terminal.

### Basic lifetime of a shell

A shell does three main things in its lifetime.

    • #### Initialize: In this step, a typical shell would read and execute its configuration files.
    These change aspects of the shell’s behavior.

    • #### Interpret: Next, the shell reads commands from stdin (which could be interactive, or a
    file) and executes them.

    • #### Terminate: After its commands are executed, the shell executes any shutdown
    commands, frees up any memory, and terminates

### List of allowed functions and system calls:

    access (man 2 access)
    chdir (man 2 chdir)
    close (man 2 close)
    closedir (man 3 closedir)
    execve (man 2 execve)
    exit (man 3 exit)
    _exit (man 2 _exit)
    fflush (man 3 fflush)
    fork (man 2 fork)
    free (man 3 free)
    getcwd (man 3 getcwd)
    getline (man 3 getline)
    getpid (man 2 getpid)
    isatty (man 3 isatty)
    kill (man 2 kill)
    malloc (man 3 malloc)
    open (man 2 open)
    opendir (man 3 opendir)
    perror (man 3 perror)
    read (man 2 read)
    readdir (man 3 readdir)
    signal (man 2 signal)
    stat (__xstat) (man 2 stat)
    lstat (__lxstat) (man 2 lstat)
    fstat (__fxstat) (man 2 fstat)
    strtok (man 3 strtok)
    wait (man 2 wait)
    waitpid (man 2 waitpid)
    wait3 (man 2 wait3)
    wait4 (man 2 wait4)
    write (man 2 write)


# GCC Compilation Command

    gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh


## Authors Contact Info:

Git: [Harley Otomofa](https://github.com/HarleyOtos), [Smart Obimba](https://github.com/obimbasmart)
