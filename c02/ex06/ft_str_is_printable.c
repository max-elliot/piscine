#include <stdio.h>
#include <string.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
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
	char s[] = "r87hwfh9w8329efj?!";

	int n = ft_str_is_printable(s);
	printf("Result for char s: %d\n", n);
}
*/