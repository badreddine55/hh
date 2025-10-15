int ft_min(int x ,int y){
  return(x < y?x:y);
}
char *ft_substr(char const *s, unsigned int start,size_t len){
  if (!s)
    return NULL;
  int lenstring = ft_strlen(s);
  if(start >  lenstring){
      char *ptr = malloc(1);
      if(!ptr)
        return NULL;
      ptr[0] = '\0';
      return ptr;
  }
  int actual_len = ft_min(len, lenstring - start);
  char *sub = malloc(actual_len + 1);
  if(!sub){
      return NULL;
  }
  size_t i = 0;
  while(*(s + start)&& i < actual_len){
    *(sub + i)= *(s + start);
      i++;
      start++;
  }
  *(sub + i)= '\0';
  return sub;  
}