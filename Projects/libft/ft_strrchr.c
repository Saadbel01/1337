#include <stdio.h>

char    *ft_strrchr(const char    *s, int c)
{
    const char  *res;
    while (*s)
    {
        if (*s == c)
        {
            res = s;
        }
        s++;
    }
    if (c == '\0')
        res = s;
    return ((char *) res);
}

int main(void)
{
    char c = '\0';

    char *s = "he";

    printf("here's the last occurence of the caractere: %s", ft_strrchr(s,c));

    return 0;
}