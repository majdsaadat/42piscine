#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	as;

	i = 0;
	sign = 1;
	as = 0;
	while (str [i] == 32 || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	while (str [i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
		{
			sign = -sign;
		}
		i++;
	}
	while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
	{
		as = (as * 10) + str[i] - '0';
		i++;
	}
	return (sign * as);
}
/*
int     main(void)
{
        char str1[] = " ---+--+1234ab567";
        int     val =ft_atoi(str1);
        printf("%d", val);
        return (0);
}
*/
