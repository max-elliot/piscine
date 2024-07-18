#include <stdio.h>
#include <string.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char s[] = "kkslkdlkdlskd";

	int n = ft_str_is_lowercase(s);
	printf("Result for char s: %d\n", n);
}
*/