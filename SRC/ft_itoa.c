#include <stdlib.h>
int ft_counter(long x){
    int res = 1;
    while (x / 10 > 0){
        x /= 10;
        res++;
    }
    return res;
}
char *ft_itoa(int n){
  long num = n;
  char *result;
  if (num == 0){
      if (!(result = malloc(2))) return NULL;
      result[0] = '0';
      result[1] = '\0';
      return result;
  }
  int flag,lent;
  flag = 0;
  lent = 0;
  if(num < 0){
      flag = 1;
      num *= -1;
      lent++;
  }
  lent += ft_counter(num); 
  if(!(result = malloc(lent + 1))) return NULL;
    *(result + lent) = '\0';
    while(num > 0){
      lent--;
      *(result + lent) = (num % 10) + '0';
      num /= 10;  
    }
    if(flag){
      *(result + 0) = '-';
    }
    return result;
}
