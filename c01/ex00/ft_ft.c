/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  2024/06/11 14:37:55 by msaadat          #+#    #+#             */
/*   Updated:  2024/06/11 14:39:17 by msaadat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void ft_ft(int *nbr)
{
nbr = 42;
}
/
int main(void)
{
int a;
int *ptr;

a = 0;
ptr = &a;
ft_ft(ptr);
printf("%i", a);
}*/
