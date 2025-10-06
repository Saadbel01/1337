#include <stdio.h>

void    *ft_memcpy(void    *dest, const    void    *src, int    n)
{
    const char  *src_s;
    char    *dest_s;
    int i;

    i = 0;
    dest_s = dest;
    src_s = src;
    while (i < n-1)
    {
        dest_s[i] = src_s[i];
        i++;
    }
    dest_s[i] = '\0';
    return (dest);
}

int main(void)
{
    char src[] = "Hello";
    char dest[10];

    ft_memcpy(dest, src, 3); // copy n bytes (including '\0')

    printf("Source: %s\n", src);
    printf("Destination: %s\n", dest);

    return 0;
}