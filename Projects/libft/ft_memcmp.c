#include <stdio.h>

int ft_memcmp(const void   *s1, const void *s2, int    n)
{
    int i;
    const char  *str1;
    const char  *str2;

    i = 0;
    str1 = s1;
    str2 = s2;
    while (i < n)
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (0);
}


int main(void)
{
    char s1[] = "Hello";
    char s2[] = "Helium";
    int n = 4;
    int result = ft_memcmp(s1, s2, n);
    if (result == 0)
        printf("First %d characters are equal\n",n);
    else
        printf("First %d characters are different\n",n);

    return 0;
}