#include "../include/my_readline.h"

int main(int argc, char **argv){

    char *ret_str ;
    int file;
    
    static char buffer[READLINE_READ_SIZE+1];

    if(argc < 2)
        file = open("./text.txt", O_RDONLY);
    else if(argc >= 2){
        file = open("./stdin.txt", O_CREAT | O_WRONLY);
        create_stdin(file, argv, argc);
        file = open("./stdin.txt", O_RDONLY);
    }

    if(file < 0){
        printf("File provided doesn't exist\n");
        return 1;
    }

    while((ret_str = my_readline(file, buffer))!= NULL){
        printf("%s \n", ret_str);
    }

    free(ret_str);
    close(file);

    if(argc >= 2)
        remove("./stdin.txt");

    return 0;
}
