/* ************************************************************************** /
/ /
/ ::: :::::::: /
/ ft_is_negative.c :+: :+: :+: /
/ +:+ +:+ +:+ /
/ By: msaadat marvin@42.fr +#+ +:+ +#+ /
/ +#+#+#+#+#+ +#+ /
/ Created: 2024/06/08 13:49:32 by msaadat #+# #+# /
/ Updated: 2024/06/08 14:08:27 by msaadat ### ########.fr /
/ /
/ ************************************************************************** */
#include<unistd.h>
void ft_is_negative(int n)
{
char n1;
char p;
n1 = 'N';
p = 'P';
if (n < 0)
{
	write(1, &n1, 1);
}
if (n >= 0)
{
	write(1, &p, 1);
}
}
/*
int main(void)
{
ft_is_negative(4);
return (0);
}*/
