#include <stdio.h>
#include <string.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z' || str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		else
		{
			i++;
		}
	}
	return (1);
}
/*
int main()
{
	char s[] = "8wjhe0908fwhf";
	
	int n = ft_str_is_alpha(s);
	printf("Result for char s: %d\n", n);
}
*/