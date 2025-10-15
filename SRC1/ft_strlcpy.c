#include "libft.h"
size_t  ft_strlcpy(char *dest,const char *src, size_t size){
    unsigned int  len = 0;
    if(size!= 0){
        while(*(src + len )  && len < size - 1){
            *dest++ = *(src + len++);
            size--;
        }
        *dest = '\0';
    }
    while(*(src + len)){
        len++;
    }
    return len;
}