#include <stdio.h>

int ft_strncmp(const char   *s1, const char *s2, int    n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
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
    int result = ft_strncmp(s1, s2, n);
    if (result == 0)
        printf("First %d characters are equal\n",n);
    else
        printf("First %d characters are different\n",n);

    return 0;
}