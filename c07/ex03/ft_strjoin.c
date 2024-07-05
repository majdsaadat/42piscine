/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msaadat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/01 13:38:28 by msaadat           #+#    #+#             */
/*   Updated: 2024/07/01 13:38:46 by msaadat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*allocate_and_concatenate(int size, char **strs, char *sep,
		int total_length)
{
	char	*s;
	int		i;

	s = (char *)malloc(total_length + 1);
	if (!s)
		return (NULL);
	s[0] = '\0';
	i = 0;
	while (i < size)
	{
		if (i > 0)
			ft_strcat(s, sep);
		ft_strcat(s, strs[i]);
		i++;
	}
	return (s);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*s;
	int		total_length;
	int		i;

	if (size <= 0)
	{
		s = (char *)malloc(1);
		if (!s)
			return (NULL);
		s[0] = '\0';
		return (s);
	}
	total_length = 0;
	i = 0;
	while (i < size)
	{
		total_length += ft_strlen(strs[i]);
		i++;
	}
	total_length += ft_strlen(sep) * (size - 1);
	return (allocate_and_concatenate(size, strs, sep, total_length));
}

/*int	main(void)
{
	char	*strs[] = {"majd", "basil", "saadat"};
	char	*result= ft_strjoin(3, strs, "\\");
	printf("%s\n", result);
	free(result);
	return (0);
}*/
