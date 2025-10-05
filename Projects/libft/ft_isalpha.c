#include <stdio.h>

int ft_isalpha(int  c)
{
    if ((c >= 65 && c <= 90) || (c >= 90 && c <= 122 ))
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
    c1 = 'a';

    printf("%d \n",ft_isalpha(c));
    printf("%d \n",ft_isalpha(c1));

    return (0);
}