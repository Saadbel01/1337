#include <stdio.h>

char    *ft_strchr(const char    *s, int c)
{
    const char  *str = s;
    while (*str)
    {
        if (*str == c)
        {
            return ((char *) str);
        }
        str++;
    }
    return (0);
}

int main(void)
{
    char c = 'B';

    char *s = "hello B wold!";

    printf("here's the first occurence of the caractere: %s", ft_strchr(s,c));

    return 0;
}