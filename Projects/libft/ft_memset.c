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

int main()
{
    char str[20] = "12345Test this!";
    printf("Before memset: %s\n", str);

    // Replace first 5 characters with '-'
    ft_memset(str, '-', 5);

    printf("After memset:  %s\n", str);

    return 0;
}