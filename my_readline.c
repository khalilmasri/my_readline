#include "include/my_readline.h"



char *my_readline(int fd){

    static char buffer[READLINE_READ_SIZE];
    
    char *temp = malloc(1 * sizeof(char));

    int index = 0;
    buffer[index] = '\0';

    while(index < READLINE_READ_SIZE){
        
        if(read(fd, temp,1) <= 0){
            free(temp);
            return NULL;
        }
       
        strcat(buffer, &temp[0]);

        if(temp[0] == '\n')
            break;
        
        index++;
    }

    free(temp);
    return buffer;
}
