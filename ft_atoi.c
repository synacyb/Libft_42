#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr)
{
	long	r;
	int		signe;

	r = 0;
	signe = 1;
	while (*nptr == ' ' || (*nptr >= 9 && *nptr <= 13))
		nptr++;
	if (*nptr == '+' || *nptr == '-')
	{
		if (*nptr == '-')
			signe *= -1;
		nptr++;
	}
	while (*nptr != '\0' && (*nptr >= '0' && *nptr <= '9'))
	{
		r = r * 10 + (*nptr - 48);
		nptr++;
	}
	r = r * signe;
	if (r < (-2147483648))
		return (0);
	else if (r > 2147483647)
		return (-1);
	return (r);
}
/*int main()
{
    char str[] = "36562725726767297856743726";
    printf("my atoi : %d\n", ft_atoi(str));
    printf("atoi standar : %d\n", atoi(str));
}*/
