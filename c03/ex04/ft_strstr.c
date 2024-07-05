#include <unistd.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char s1[] = {"majd_saadat"};
	char s2[] = {"saadat"};

	char *result = ft_strstr(s1, s2);
	printf("%s\n",result);
	return (0);
}
*/
