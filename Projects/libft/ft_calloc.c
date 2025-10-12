#include <stdio.h>
#include <stdlib.h>

void    *ft_calloc(int  nmemb, int  size)
{
    char    *ptr;
    int i;

    ptr = (char *) malloc(size * nmemb);

    if (!ptr)
        return (NULL);
    i = 0;
    while (i < nmemb * size)
    {
        ptr[i]= 0;
        i++;
    }
    return ((void   *) ptr);
}

int main(void)
{
    int *arr;
    size_t n = 5;

    arr = (int *)calloc(n, sizeof(int));  // allocate space for 5 integers
    if (!arr)
    {
        printf("Memory allocation failed\n");
        return (1);
    }

    for (size_t i = 0; i < n; i++)
        printf("arr[%zu] = %d\n", i, arr[i]);  // all elements are 0

    free(arr);
    return (0);
}
