/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/08 15:19:47 by msaadat           #+#    #+#             */
/*   Updated: 2024/06/11 14:24:45 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	printval( char a, char b, char c, char d)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, " ", 1);
	write(1, &c, 1);
	write(1, &d, 1);
	if (!(a == '9' && b == '8' && c == '9' && d == '9' ))
	{
		write(1, ", ", 2);
	}
}

void	cal( char a, char b, char c, char d)
{
	a = '0';
	while (a <= '9')
	{
		b = '0';
		while (b < '9' )
		{
			c = a;
			while (c <= '9' )
			{
				d = b + 1;
				while (d <= '9' )
				{
					printval(a, b, c, d);
					d++;
				}
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_print_comb2(void)
{
	char	a;
	char	b;
	char	c;
	char	d;

	a = '0';
	b = '0';
	c = a;
	d = b + 1;
	cal(a, b, c, d);
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}*/
