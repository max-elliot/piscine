#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int main()
{
	char source[] = "Hello World!";
	char destination[20];
	
	ft_strcpy(destination, source, 5);
	printf("After 5 char: %s\n", destination);
	
	ft_strcpy(destination, source, 20);
	printf("After 20 char: %s\n", destination);
	return (0);
}
*/