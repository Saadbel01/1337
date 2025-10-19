#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void    ft_putstr_fd(char   *s,int  fd)
{
    int i;

    i = 0;
    while (s[i])
    {
        write(fd, s + i,1);
        i++;
    }
}

int main(void)
{
    int fd;

    fd = open("test.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1)
    {
        perror("Error opening file.");
        return 1;
    }
    
    ft_putstr_fd("This is a test!", fd);
    close(fd);
    return 0;
}
