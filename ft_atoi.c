#include "libft.h"

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
		if(r > (LONG_MAX - (*nptr -48)) / 10)
			return(-signe * (signe == 1));
		r = r * 10 + (*nptr - 48);
		nptr++;
	}
	r = r * signe;
	return (r);
}
/*int main()
{
    char str[] = "922337203685472";
    printf("my atoi : %d\n", ft_atoi(str));
    printf("atoi standar : %d\n", atoi(str));
}*/

