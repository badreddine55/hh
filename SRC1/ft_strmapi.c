#include "libft.h"
#include <stdlib.h>

char ft_myfunction(unsigned int x, char c){
    if((c >= 'a' && c <= 'z'))
        return c -= x;
    else if((c >= 'A' && c <= 'Z'))
        return c += x;
    else
        return c;
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char)){
    if (!s)
        return NULL;
    size_t lentS = ft_strlen(s);
    char *str ;
    if(!(str = malloc(lentS + 1)))
        return NULL;
    int i,k;
    i = 0;
    k = 0;
    while(*(s + i)){
        *(str + k) = f(i,*(s + i));
        k++;
        i++;
    }
    *(str + k) = '\0';
    return str;

}
