/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:28:50 by msaadat           #+#    #+#             */
/*   Updated: 2024/06/12 10:34:32 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include<unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	a1;
	int	b1;

	a1 = *a / *b;
	b1 = *a % *b;
	*a = a1;
	*b = b1;
}
/*
int	main(void)
{
	int	firstvalue;
	int	secondvalue;
	int	*ptr1;
	int	*ptr2;

	firstvalue = 19;
	secondvalue = 2;
	ptr1 = &firstvalue;
	ptr2 = &secondvalue;
	ft_ultimate_div_mod(ptr1, ptr2);
	printf("%i", firstvalue);
	printf("%i", secondvalue);
	return (0);
}*/
