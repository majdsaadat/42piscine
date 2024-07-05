/* ************************************************************************** /
/ /
/ ::: :::::::: /
/ ft_print_numbers.c :+: :+: :+: /
/ +:+ +:+ +:+ /
/ By: msaadat marvin@42.fr +#+ +:+ +#+ /
/ +#+#+#+#+#+ +#+ /
/ Created: 2024/06/05 13:17:01 by msaadat #+# #+# /
/ Updated: 2024/06/11 12:28:38 by msaadat ### ########.fr /
/ /
/ ************************************************************************** */
#include<unistd.h>
void ft_print_numbers(void)
{
int number;
number = '0';
while (number <= '9')
{
	write (1, &number, 1);
	number++;
}
}
/*
int main()
{
ft_print_numbers();
return (0);
}*/
