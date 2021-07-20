#include "../include/my_readline.h"

int get_size(char **argv){

    int index = 0,
        size = 0;

    while(argv[index]){
        size += my_strlen(argv[index]);
        index++;
    }

    return size+1;
}

void create_stdin(int fd, char **argv, int argc){

    int index = 1;
    int size = get_size(argv)+argc;

    char *ret_str = malloc((sizeof(char)*size));

    while(argv[index]){

        if(index > 1)
            my_strcat(ret_str ," ");

        my_strcat(ret_str, argv[index]);

        index++;
    }

    my_strcat(ret_str, "\0");

    write(fd, ret_str, size);
    free(ret_str);
}


char *my_readline(int fd, char *buffer){

    
    char *temp = malloc(1 * sizeof(char));

    int index = 0;
    buffer[index] = '\0';

    while(index < READLINE_READ_SIZE){
        
        if(read(fd, temp,1) <= 0){
            free(temp);
            return NULL;
        }

        if(temp[0] == '\n')
            break;
       
        my_strcat(buffer, &temp[0]);
        
        index++;
    }

    free(temp);
    return buffer;
}
