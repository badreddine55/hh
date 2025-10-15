#include "libft.h"

void *ft_calloc(size_t num, size_t size){
  size_t total = num * size;
  void *ptr = malloc(total);
  if(!ptr)
    return NULL;
  size_t i = 0;
  unsigned char *p = (unsigned char*)ptr;
  while(i < total){
    *(p + i) = 0;
    i++;
  }
  return ptr;
}