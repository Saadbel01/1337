#include <stdio.h>

void    *ft_memchr(const void   *s, int c, int n)
{
    int i;
    const char *str;

    str = s;
    i = 0;
    while (i < n)
    {
        if (str[i] == c)
        {
            return ((char   *) s + i);
        }
        i++;
    }
    return (NULL);
}

int main(void)
{
    char str[] = "Hello World";
    char *ptr = ft_memchr(str, 'o', 11);

    if (ptr != NULL)
        printf("'o' found at position: %ld\n", ptr - str);
    else
        printf("'o' not found\n");

    return 0;
}