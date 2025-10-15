#include "libft.h"
size_t ft_strlcat(char *dest,const char *src, size_t size){
    size_t len_dest = ft_strlen(dest);
    size_t len_src = ft_strlen(src);
    size_t total_len = len_dest + len_src;
    size_t i = 0;
    if(size <= len_dest){
        return size + len_src;
    }
    while(src[i] &&  len_dest + 1 < size){
        dest[len_dest++] = src[i++];
    }
    dest[len_dest] = '\0';
    return total_len;
}
