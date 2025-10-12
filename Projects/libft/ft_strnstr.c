#include <stdio.h>

char    *ft_strnstr(const char  *haystack, const char   *needle, int    len)
{
    int i;
    int j;

    i = 0;
    if (*needle == '\0')
        return ((char   *) haystack);

    while (haystack[i] && i < len)
    {
        j = 1;
        while ((haystack[i] == needle[0]))
        {
            if (needle[j] == '\0')
                return ((char   *) haystack + i);
            if (needle[j] == haystack[i + j])
                j++;
        }
        i++;
    }
    return (NULL);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello World";
    char *res;

    res = ft_strnstr(str, "World", 11);
    if (res)
        printf("Found: %s\n", res);
    else
        printf("Not found\n");

    res = ft_strnstr(str, "World", 5);
    if (res)
        printf("Found: %s\n", res);
    else
        printf("Not found within first 5 chars\n");

    return 0;
}
