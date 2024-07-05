
#include <unistd.h>
//#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;
	int	s;

	new_word = 1;
	i = 0;
	while (str[i] != '\0')
	{
		s = str[i];
		if (new_word == 1 && s >= 'a' && s <= 'z')
			str[i] -= 32;
		else if (new_word == 0 && s >= 'A' && s <= 'Z')
			str[i] += 32;
		if (s < '0' || (s > '9' && s < 'A') || (s > 'Z' && s < 'a') || s > 'z')
			new_word = 1;
		else
			new_word = 0;
		i++;
	}
	return (str);
}
/*
int main()
{
    char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    ft_strcapitalize(s);

    printf("%s", s);
    return 0;
}
*/
