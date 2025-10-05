#include <stdio.h>

int ft_isprint(int  c)
{
    if ((c >= 32 && c <= 126))
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
    c1 = '\n';

    printf("%d \n",ft_isprint(c));
    printf("%d \n",ft_isprint(c1));

    return (0);
}