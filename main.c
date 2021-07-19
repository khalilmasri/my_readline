#include "include/my_readline.h"

int main(){

    char *ret_str ;
    int file = open("./text.txt", O_RDONLY);

    if(file < 0)
        return 1;

    while((ret_str = my_readline(file))!= NULL){
        printf("%s\n", ret_str);
    }

    free(ret_str);
    close(file);
    return 0;
}
