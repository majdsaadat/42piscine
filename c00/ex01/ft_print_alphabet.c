/* ************************************************************************** /
/ /
/ ::: :::::::: /
/ ft_print_alphabet.c :+: :+: :+: /
/ +:+ +:+ +:+ /
/ By: msaadat marvin@42.fr +#+ +:+ +#+ /
/ +#+#+#+#+#+ +#+ /
/ Created: 2024/06/05 12:17:54 by msaadat #+# #+# /
/ Updated: 2024/06/05 12:43:08 by msaadat ### ########.fr /
/ /
/ ************************************************************************** */
#include<unistd.h>
void ft_print_alphabet(void)
{
char charactor;
charactor = 'a';
while (charactor <= 'z' )
{
	write (1, &charactor, 1);
	charactor++;
}
}
