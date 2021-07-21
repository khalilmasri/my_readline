#include "../include/my_readline.h"

option_t check_option(int argc, char **argv){
    
    if(argc > 3)
        return ERROROPT;

    if(argv[1][0] == '-'){
        if(my_strlen(argv[1]) == 2){
            switch (argv[1][1]){
                case 'f':
                    return f;
                    break;
                case 's':
                    return s;
                    break;
                default:
                    return ERROROPT;
                    break;
            }
        }else{
            return ERROROPT;
        }
    }
    return ERROROPT;
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
