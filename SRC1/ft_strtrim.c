#include "libft.h"
#include <stdlib.h>

int ft_helper( char const *set,char c){
    while(*set){
        if(*set == c)
            return 1;
        set++;
    }
    return 0;
}
char *ft_strtrim(char const *s1, char const *set){
    if(!s1){
        return NULL;
    }
    int start,end,k;
    start = 0;
    end  = ft_strlen((char *)s1) - 1;
    while((*(s1 + start)) && ft_helper(set,(*(s1 + start)))){
        start++;
    }
    while(end >= start && ft_helper(set,(*(s1 + end)))){
        end--;
    }
    int total = end - start + 2;
    if (total < 0) total = 0;
    char *trimmed = malloc(total);
    if(!trimmed)
        return NULL;
    k = 0;
    while(end >= start && k <= total){
        *(trimmed + k) = *(s1 + start);
        k++;
        start++;
    }
    *(trimmed + k) = '\0';
    return trimmed;
    
}
