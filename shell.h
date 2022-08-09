#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
/* shell_read_line.c */
char *shell_read_line();
/* shell_split_line.c */
char **shell_split_line(char *line, char *delims, char sep);
/* shell_create_child.c */
int create_child(char *_line, char **_args, char **_av);
/* shell_aux_function.c */
void sig_handler(int signo);
int separator_counter(char *line, char sep);
/* shell_execute.c */
char *search_execute(char *exe);
char *get_path();
void print_env(void);
/* shell_free.c */
void free_arg(char **arg);
#endif
