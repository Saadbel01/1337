#include <stdio.h>

void    *ft_memmove(void    *dest, const    void    *src, int    n)
{
    const char  *src_s;
    char    *dest_s;
    int i;

    dest_s = dest;
    src_s = src;
    if (dest > src)
    {
        while (n-- > 0)
        {
            dest_s[n] = src_s[n];
        }
    }
    else
    {
        i = 0;
        while (i < n)
        {
            dest_s[i] = src_s[i];
            i++;
        }
    }
    return (dest);
}

int main(void)
{
    char str[] = "12345";

    // Overlapping copy: source and destination overlap
    ft_memmove(str + 2, str, 3); // move "123" two positions to the right

    printf("Result: %s\n", str);

    return 0;
}
