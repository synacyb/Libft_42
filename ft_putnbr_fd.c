#include <stdio.h>
#include <unistd.h>
#include "libft.h"

static  void    ft_putchar(char c, int fd)
{
	write(fd, &c, 1);
}
void ft_putnbr_fd(int n, int fd)
{
    long	num;
	char	arr[10];
	int		i;

	num = n;
	i = 0;
	if (num < 0)
	{
		ft_putchar('-', fd);
		num = -num;
	}
	else if (num == 0)
		write(fd, "0", 1);
	while (num > 0)
	{
		arr[i] = (num % 10) + '0';
		num = num / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		write(fd, &arr[i], 1);
		i--;
	}
}
/*int main()
{
    ft_putnbr_fd(-120,1);
}*/