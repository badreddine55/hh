void *ft_memmove(void *dest, const void *src, size_t n){
  const unsigned char *s = (const unsigned char*)src;
  unsigned char *d = (unsigned char*)dest;
  if (!d && !s)
        return NULL;
  
  if(d > s){
      while(n > 0){
        *(d + n)= *(s + n);
        n--;
      }
  }
  else{
    size_t i = 0;
    while(--n > 0){
      *(d + i)= *(s + i);
      i++;
    }
  }
  return dest;
}