/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:37:00 by msaadat           #+#    #+#             */
/*   Updated: 2024/07/01 13:37:19 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	i;
	int	size;

	if (min >= max)
	{
		return (0);
	}
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (range == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

/*int	main(void)
{
	int min = 3;
	int max = 9;

	int *result = ft_range(min, max);

	if (result != NULL)
	{
		printf("this the range => ");
		int i = 0;
		while (i < max - min)
		{
			printf("%d", result[i]);
			i++;
		}
		printf(" <=\n");
		free(result);
	} else 
	{
		printf ("ERROR\n");
	}
}*/
