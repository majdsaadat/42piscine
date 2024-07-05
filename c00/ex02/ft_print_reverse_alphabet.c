/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                    +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created:  2024/06/05 12:53:49 by msaadat          #+#    #+#             */
/*   Updated:  2024/06/05 12:55:52 by msaadat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>
void ft_print_reverse_alphabet(void)
{
char charactor;
charactor = 'z';
while (charactor >= 'a' )
{
	write (1, &charactor, 1);
	charactor--;
}
}
