#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

void    ft_putnbr_fd(int    n, int  fd)
{
    char    c;
    unsigned long    nbr;

    nbr = n;
    if (n < 0)
    {
        c = '-';
        write(fd, &c, 1);
        nbr = nbr * -1;
    }
    if (nbr < 10)
    {
        c = '0' + nbr;
        write(fd, &c, 1);
    }    
    else
    {
        ft_putnbr_fd(nbr / 10, fd);
        c = '0' + (nbr % 10) ;
        write(fd, &c, 1);
    }
}

int main(void)
{
    int fd;
    fd = open("test1.txt",O_WRONLY | O_CREAT | O_TRUNC, 0644);

    if (fd == -1)
    {
        perror("Error opening file.");
        return 1;
    }
    
    ft_putnbr_fd(-2147483648,fd);
    
    close(fd);
    return 0;
}