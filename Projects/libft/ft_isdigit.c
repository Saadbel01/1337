#include <stdio.h>

int ft_isdigit(int  c)
{
    if ((c >= 48 && c <= 57))
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
    c1 = '2';

    printf("%d \n",ft_isdigit(c));
    printf("%d \n",ft_isdigit(c1));

    return (0);
}