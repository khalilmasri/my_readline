#include "../include/my_readline.h"

int main(int argc, char **argv){

    char *ret_str ;
    int file;
    option_t option;
    
    static char buffer[READLINE_READ_SIZE+1];

    if(argc < 2)
        file = open("./text.txt", O_RDONLY);
    else if(argc >= 2){

        option = check_option(argc, argv);

         if(option == s)
             file = STDIN_FILENO;
         else if(option == f)
             file = open(argv[2], O_RDONLY);
         else if(option == ERROROPT){
             printf("option provided isn't valid.\n");
             return 1;
         }
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


    return 0;
}
