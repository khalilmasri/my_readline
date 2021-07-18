/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  my_readline for file reading 
 *
 *        Version:  1.0
 *        Created:  07/14/2021 09:37:26 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Khalil 
 *   Organization:  
 *
 * =====================================================================================
 */

#include "include/my_readline.h"

int main(){
    
    char *ret_str;
    int file = open("./text.txt", O_RDONLY);

    while((ret_str = my_readline(file)) != NULL){
        printf("%s\n", ret_str);
        free(ret_str);
    }
    
    close(file);
    return 0;
}
