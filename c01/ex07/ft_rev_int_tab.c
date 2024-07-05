/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/12 11:34:11 by msaadat           #+#    #+#             */
/*   Updated: 2024/06/12 11:39:54 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = swap;
		i++;
	}
}
/*
int	main(void)
{
	int	num[6]={1,2,3,4,5,6};
	int	size1;
	size1 = 6;
	ft_rev_int_tab(num, size1);
	printf("%d, %d, %d, %d, %d, %d",
       	num[0], num[1], num[2], num[3], num[4], num[5]);
	return(0);
}*/
