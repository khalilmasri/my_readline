#include "../include/my_readline.h"

size_t my_strlen(char *str){
    
    size_t index = 0;

    while(str[index])
        index++;

    return index;
}

char *my_strcpy(char* dest, char* src){
   
    if(dest == NULL)
        return NULL;

    char *str = dest;

    while(*src){
        *dest = *src;
        dest++;
        src++;
    }

    *dest = '\0';

    return str;

}

char *my_strcat(char *dest, char* src){

    char *str = dest + my_strlen(dest);

    while(*src)
        *str++ = *src++;

    *str = '\0';

    return dest;
}
