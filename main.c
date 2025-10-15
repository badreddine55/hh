#include "libft.h"
#include <stdio.h>   // for printf

int main(void)
{
    // --- Test ft_strlen ---
    const char *str = "Hello 42!";
    printf("ft_strlen(\"%s\") = %zu\n", str, ft_strlen(str));

    // --- Test ft_strdup ---
    char *dup = ft_strdup(str);
    printf("ft_strdup result = %s\n", dup);
    free(dup);

    // --- Test ft_isalpha ---
    printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
    printf("ft_isalpha('1') = %d\n", ft_isalpha('1'));

    // --- Test ft_tolower / ft_toupper ---
    printf("ft_tolower('Z') = %c\n", ft_tolower('Z'));
    printf("ft_toupper('a') = %c\n", ft_toupper('a'));

    // --- Test ft_strncmp ---
    printf("ft_strncmp(\"abc\", \"abd\", 2) = %d\n", ft_strncmp("abc", "abd", 2));
    printf("ft_strncmp(\"abc\", \"abd\", 3) = %d\n", ft_strncmp("abc", "abd", 3));

    // --- Test ft_memset ---
    char buf[10];
    ft_memset(buf, 'X', 5);
    buf[5] = '\0';
    printf("ft_memset result = %s\n", buf);

    return 0;
}
