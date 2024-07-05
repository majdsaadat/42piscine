#include<stdio.h>
#include<unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int	main (void)
{
	char a[50] = "majd";
	char b[] = "saadat";

	ft_strcat(a, b);
	printf("%s", a);
	return (0);
}
*/
