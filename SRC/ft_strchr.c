char *ft_strchr(const char *s, int c){
  int i = 0;
  while(*(str + i)){
    if((*(str + i)) == (char)c){
      return (char *)(s + i);
    }
    i++;
  }
  if(c == '\0'){
    return (char *)(s + i);
  }
  return 0;
}