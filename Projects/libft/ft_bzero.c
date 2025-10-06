#include <stdio.h>

void *ft_memset(void  *str, int   value, int  num)
{
    int i;
    char    *str1;

    str1 = str;
    i = 0;
    while (i < num)
    {
        str1[i] = value;
        i++;
    }
    return (str);
}

void    ft_bzero(void  *s, int n)
{
    ft_memset(s,'\0',n);
}

int main(void)
{
    char buffer[10] = "Hello";

    printf("Before bzero: %s\n", buffer);

    ft_bzero(buffer, 5); // set first 5 bytes to '\0'

    printf("After bzero: %s\n", buffer);

    return 0;
}