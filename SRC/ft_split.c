#include <stdlib.h>
int ft_counter(char *str,char c){
    int counter = -1;
    int i = 0;
    while(*(str + i)){
        if(*(str + i) == c){
            counter++;
            while(*(str + i) == c)
            i++;
        }
        i++;
    }
    return counter;
}
char **ft_split(char const *s, char c){
    int lenWords = ft_counter(s,c);
    int total = lenWords + 1;
    char **words;
    if(!(words = malloc(total * sizeof(char *)))){
        return NULL;
    }
    int lent,i,j,k,a;
    i = 0;
    j = 0;
    while(*(s + i) && j < lenWords){
        while(*(s + i) == c)
            i++;
        lent = 0;
        k = i;
        while((*(s + i)) && *(s + i) != c ){
            lent++;
            i++;
        }
        if(!(words[j] = malloc(lent + 1))){
            return NULL;
        }
        a = 0;
        while(k < i){
            words[j][a] = *(s + k);
            a++;
            k++;
        }
        words[j][a] ='\0';
        j++;
    }
    words[j] = NULL;
    return words;

}