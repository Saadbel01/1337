#include <stdio.h>

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	s;
	int	d;
	int	di;
	int	si;

	si = ft_strlen(src);
	if (!dst && size == 0)
		return (si);
	d = ft_strlen(dst);
	di = d;
	if (size <= di)
		return (size + si);
	s = 0;
	while (src[s] && d + 1 < size)
	{
		dst[d] = src[s];
		s++;
		d++;
	}
	dst[d] = 0;
	return (di + si);
}

int main(void)
{
    char dest[10] = "Hi";
    char *src = "World!";

    size_t res = ft_strlcat(dest, src, sizeof(dest));

    printf("Destination: %s\n", dest);  // Output: "HiWorld!"
    printf("Total length attempted: %zu\n", res);  // Output: 8

    return 0;
}