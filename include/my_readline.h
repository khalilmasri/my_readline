#ifndef MY_READLINE_H
#define MY_READLINE_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define READLINE_READ_SIZE 10

char *my_readline(int fd, char *buffer);
void create_stdin(int fd, char **argv, int argc);

#endif

/* ------------------------------------------------------------- */

#ifndef MY_STRING_H
#define MY_STRING_H

char *my_strcat(char *dest, char *src);
char *my_strcpy(char *dest, char *src);
size_t my_strlen(char* str);

#endif
