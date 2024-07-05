
#include<unistd.h>

void	print(char p)
{
	write(1, &p, 1);
}

int	bs(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
		{
			return (0);
		}
		if (i != 0 && base[i] == base[i - 1])
		{
			return (0);
		}
		i++;
	}
	if (i <= 1)
		return (0);
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	n;

	i = bs(base);
	if (i == 0)
	{
		return ;
	}
	if (nbr < 0)
	{
		write(1, "-", 1);
		ft_putnbr_base(-nbr, base);
		return ;
	}
	if (nbr >= i)
	{
		ft_putnbr_base(nbr / i, base);
	}
	n = nbr % i;
	print(base[n]);
}
/*
int	main(void)
{
	ft_putnbr_base(12, "01");
	write(1,"\n",1);
	 ft_putnbr_base(13, "0123456789ABCDEF");
	write(1, "\n",1);
	ft_putnbr_base(7,"ponevif");
	write(1, "\n",1);
	return (0);
}
*/
