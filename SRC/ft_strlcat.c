size_t ft_strlcat(char *dest,const char *src, size_t size){
    int len_dest = ft_strlen(dest);
    int len_src = ft_strlen(src);
    int total_len = len_dest + len_src;
    int i = 0;
    if(size <= len_dest){
        return size + len_src;
    }
    while(src[i] &&  len_dest + 1 < size){
        dest[len_dest++] = src[i++];
    }
    dest[len_dest] = '\0';
    return total_len;
}
