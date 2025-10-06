#include <stdio.h>
#include <string.h>

int ft_strlen(const char  *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        i++;
    }
    return (i);
}

int	ft_strlcpy(char *dest, const char *src, int size)
{
	int	i;

	i = 0;
	if (size != 0)
	{
		while (src[i]  && i < (size - 1))
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (ft_strlen(src));
}

int main(void)
{
    char src[] = "Hello, world!";
    char dest[6];

    int result = ft_strlcpy(dest, src, sizeof(dest));

    printf("Destination: %s\n", dest);
    printf("Source length: %zu\n", result);

    if (result >= sizeof(dest))
        printf("Warning: String truncated!\n");

    return 0;
}