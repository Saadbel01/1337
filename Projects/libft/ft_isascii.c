#include <stdio.h>

int ft_isascii(int  c)
{
    if ((c >= 0 && c <= 127))
    {
        return (c);
    }
    else
    {
        return (0);
    }
}

int main()
{
    char    c;
    char    c1;

    c = 'F';
    c1 = 200;

    printf("%d \n",ft_isascii(c));
    printf("%d \n",ft_isascii(c1));

    return (0);
}