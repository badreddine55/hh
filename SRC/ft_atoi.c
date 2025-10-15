int ft_isdigit(int c){
    return ((c >= '0' && c <= '9'));
}
int ft_atoi(const char *str){
    int i = 0;
    int sign = 0;
     while (*(str + i) == ' ' || *(str + i) == '\t' || *(str + i) == '\n' ||
           *(str + i) == '\v' || *(str + i) == '\f' || *(str + i) == '\r')
        i++;
    while(*(str + i) && (*(str + i) == '-' || *(str + i) == '+')){
        if(*(str + i) == '-' )
            sign++;
        i++;
    }
    int num = 0; 
    while(*(str + i) && (ft_isdigit(*(str + i)) == 1)){
        num = (num * 10) + (*(str + i) - '0');
        i++;
    }
    return (num * ((sign % 2 == 1) ? -1 : 1));
        
}