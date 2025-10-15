#include "libft.h"

void *ft_memset(void *s, int c, size_t n){
  unsigned char *ptr = (unsigned char*)s;
  size_t i = 0;
  while(n > 0){
    *(ptr + i)= c;
    i++;
    n--;
  }
  return s;
}