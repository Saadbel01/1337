#include <stdio.h>

int calc_num(const char   *str)
{
    int i;
    int res;

    i = 0;
    res = 0;
    while (str[i])
    {
        if (str[i] >= 48 && str[i] <= 57)
        {
            res = res * 10 + (str[i] - '0');
        }
        else
        {
            return (res);
        }
        i++;
    }
    return (res);
}

int ft_atoi(const char  *str)
{
    int i;
    int nb;

    i = 0;
    nb = 0;
    while (str[i] == ' ' || str[i] == '\t')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
        {
            nb++;
        }
        i++; 
    }
    if (nb == 1)
        return (calc_num(str + i) * -1);
    else
        return (calc_num(str + i));
    return (calc_num(str + i));
}


int main(void)
{
    printf("%d\n", ft_atoi("   -12a34abc"));  // -1234
    printf("%d\n", ft_atoi("+42"));          // 42
    printf("%d\n", ft_atoi("   007"));       // 7
    printf("%d\n", ft_atoi("abc"));          // 0 (no digits)

    return 0;
}
