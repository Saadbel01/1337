#include <stdio.h>

int ft_toupper(int  c)
{
    if ((c >= 97 && c <= 122))
    {
        return (c - 32);
    }
    else
    {
        return (c);
    }
}

int main(void)
{
    char c1 = 'a';
    char c2 = 'B';
    char c3 = '1';

    printf("%c -> %c\n", c1, ft_toupper(c1));  // Output: a -> A
    printf("%c -> %c\n", c2, ft_toupper(c2));  // Output: B -> B
    printf("%c -> %c\n", c3, ft_toupper(c3));  // Output: 1 -> 1

    return 0;
}
