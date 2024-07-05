#include <stdio.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fac;

	fac = 1;
	i = 1;
	if (nb < 0)
	{
		return (0);
	}
	while (i <= nb)
	{
		fac *= i;
		i++;
	}
	return (fac);
}
/*
int main(void)
{
    int num = 4;

    printf("%d", ft_iterative_factorial(num));

    return 0;
}
*/
