/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:22:26 by msaadat           #+#    #+#             */
/*   Updated: 2024/06/12 10:27:31 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int	firstvalue;
	int	secondvalue;
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	firstvalue = 9;
	secondvalue = 2;
	ptr1 = &a;
	ptr2 = &b;
	ft_div_mod(firstvalue, secondvalue, ptr1, ptr2);
	printf("%i", a);
	printf("%i", b);
	return (0);
}*/
