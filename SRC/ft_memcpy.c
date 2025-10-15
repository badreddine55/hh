void *ft_memcpy(void *dest, const void *src, size_t n){
  const unsigned char *s = (const unsigned char*)src;
  unsigned char *d = (unsigned char*)dest;
  size_t i = 0;
  while(n > 0){
    *(d + i)= *(s + i);
    i++;
    n--;
  }
  return dest;
}