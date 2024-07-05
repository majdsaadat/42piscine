/* ************************************************************************** /
/ /
/ ::: :::::::: /
/ ft_print_comb.c :+: :+: :+: /
/ +:+ +:+ +:+ /
/ By: msaadat marvin@42.fr +#+ +:+ +#+ /
/ +#+#+#+#+#+ +#+ /
/ Created: 2024/06/08 12:51:23 by msaadat #+# #+# /
/ Updated: 2024/06/08 13:40:55 by msaadat ### ########.fr /
/ /
/ ************************************************************************** */
#include<unistd.h>
void printval( char a, char b, char c)
{
write(1, &a, 1);
write(1, &b, 1);
write(1, &c, 1);
if (!(a == '7' && b == '8' && c == '9' ))
{
write(1, ", ", 2);
}
}
void ft_print_comb(void)
{
char a;
char b;
char c;
a = '0';
while (a <= '7' )
{
	b = a + 1;
	while (b <= '8' )
	{
		c = b + 1;
		while (c <= '9' )
{
			printval(a, b, c);
			c++;
		}
		b++;
	}
	a++;
}
}
/*
int main(void)
{
ft_print_comb();
return (0);
}*/
