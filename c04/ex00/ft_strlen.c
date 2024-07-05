#include<unistd.h>
#include<stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
/*
int	main(void)
{
	int result;
	char c[20]= "majd";

	result = ft_strlen(c);
	printf("%d\n",result);
	return (0);
}
*/
