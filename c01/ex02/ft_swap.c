/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 10:11:32 by msaadat           #+#    #+#             */
/*   Updated: 2024/06/12 10:19:06 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	x;

	x = *a;
	*a = *b;
	*b = x;
}
/*
int	main(void)
{
	int	x;
	int	y;
	int	*ptr1;
	int	*ptr2;

	x = 12;
	y = 100;
	ptr1 = &x;
	ptr2 = &y;
	ft_swap(ptr1, ptr2);
	printf("%i", x);
	printf("%i", y);
	return (0);
}*/
