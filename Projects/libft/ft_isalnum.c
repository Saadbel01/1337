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

int ft_isalnum(int  c)
{
    if (ft_isalpha(c) || ft_isdigit(c))
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
    char    c2;

    c = 'F';
    c1 = '/';
    c2 = '8';

    printf("%d \n",ft_isalnum(c));
    printf("%d \n",ft_isalnum(c1));
    printf("%d \n",ft_isalnum(c2));

    return (0);
}