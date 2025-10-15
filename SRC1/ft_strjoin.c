#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2){
    if (!s1 || !s2) 
        return NULL;
    int lens1 = ft_strlen(s1);
    int lens2 = ft_strlen(s2);
    int totallent = lens1 + lens2 + 1;
    char *str = malloc(totallent);
    if(!str)
      return NULL;
    int i = 0;
    while(*s1){
        *(str + i) = *s1;
        s1++;
        i++;
    }
    while(*s2){
        *(str + i) = *s2;
        s2++;
        i++;
    }
    *(str + i) = '\0';
    return str;
}