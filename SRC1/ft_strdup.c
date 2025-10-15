#include "libft.h"
char *ft_strdup(const char *s){
  size_t len = ft_strlen(s);
  char *p = (char *)malloc(len + 1);
  if(!p)
    return NULL;
  int i = 0;
  while(*(s+i)){
    *(p+i) = *(s+i);
    i++;
  }
  *(p+i) = '\0';
  return p;
}