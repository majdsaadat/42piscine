
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	int		i;
	int		negative;
	char	int_size[12];

	i = 0;
	negative = 0;
	if (nb == 0)
		return ((void)ft_putchar('0'));
	if (nb < 0)
	{
		if (nb == -2147483648)
			return ((void)write(1, "-2147483648", 11));
		negative = 1;
		nb = -nb;
	}
	while (nb)
	{
		int_size[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	if (negative)
		int_size[i++] = '-';
	while (i--)
		ft_putchar(int_size[i]);
}
/*
int	main(void)
{
	ft_putnbr(822003);
	return (0);
}
*/
