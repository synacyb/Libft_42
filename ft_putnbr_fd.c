#include <stdio.h>
#include <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    char arr[12];
    long num;
    int i;

    num = n;
    i = 0;
    if(num < 0)
    {
        num = num * -1;
        write(fd, "-", 1);
    }
    if(num > 9)
    {
        char res;
        while (num > 0)
        {
            res = num % 10 + 48;
            arr[i] = res;
            num = num / 10;
            i++;
        }
        i--;
    }
    while (i >= 0)
    {
        write(fd, &arr[i], 1);
        i--;
    }
}
int main()
{
    ft_putnbr_fd(-120,1);
}