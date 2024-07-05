/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:36:01 by msaadat           #+#    #+#             */
/*   Updated: 2024/07/01 13:36:17 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include<stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src [i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*dup;

	len = ft_strlen(src) + 1;
	dup = (char *)malloc(len * sizeof(char));
	if (dup == NULL)
	{
		return (NULL);
	}
	ft_strcpy(dup, src);
	return (dup);
}

/*int	main(void)
{
	char src[] = {"abd_alashqar"};
	printf("this the duplication of the src => %s", ft_strdup(src));
}*/
