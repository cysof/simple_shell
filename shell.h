#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

#define MAX_INPUT_LEN 1024
extern char **environ;
void display_prompt(void);
void exit_function(void);
char *strdup(const char *str);
char *_strcat(char *dest, char *src);
int _strcmp(const char *str1, const char *str2);
size_t _strlen(const char *str);
int is_whitespace(char c);
char *_strtrim(char *c);
char *get_path(char *command);
char *_strcpy(char *dest, char *src);
int _strncmp(const char *s1, const char *s2, size_t n);
char *_getenv(const char *name);
int exe_command(char *command_with_args);
void execute_child_process(char *command, char *args[]);
void print_env(void);
#endif /* SHELL_H */
