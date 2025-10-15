size_t ft_strlen(const char *str){
    if (!str)
        return 0;
    size_t i = 0;
    while(*(str + i )){
        i++;
    }
    return i;
}