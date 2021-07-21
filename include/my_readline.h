#ifndef MY_READLINE_H
#define MY_READLINE_H

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define READLINE_READ_SIZE 7

typedef enum{
    s,
    f,
    ERROROPT
} option_t; 

char *my_readline(int fd, char *buffer);
option_t check_option(int argc, char **argv);

#endif

/* ------------------------------------------------------------- */

#ifndef MY_STRING_H
#define MY_STRING_H

char *my_strcat(char *dest, char *src);
char *my_strcpy(char *dest, char *src);
size_t my_strlen(char* str);

#endif
