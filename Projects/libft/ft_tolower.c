#include <stdio.h>

int ft_tolower(int  c)
{
    if ((c >= 65 && c <= 90))
    {
        return (c + 32);
    }
    else
    {
        return (c);
    }
}

int main(void)
{
    char c1 = 'A';

    printf("%c -> %c\n", c1, ft_tolower(c1)); 

    return 0;
}
