#include <stdlib.h>
size_t ft_strlen(char *str){
    if (!str)
        return 0;
    size_t i = 0;
    while(*(str + i )){
        i++;
    }
    return i;
}
char ft_myfunction(unsigned int x, char c){
    if((c >= 'a' && c <= 'z'))
        return c -= 32;
    else if((c >= 'A' && c <= 'Z'))
        return c += 32;
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
