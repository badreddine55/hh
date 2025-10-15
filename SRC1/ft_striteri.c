#include "libft.h"
void ft_myfunction(unsigned int x, char* c){
  if((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'))
    *c += x;
}

void ft_striteri(char *s, void (*f)(unsigned int,char*)){
    if (!s)
        return;
    int i = 0;
    while(*(s + i)){
      f(i,(s + i));
        i++;
    }
}
