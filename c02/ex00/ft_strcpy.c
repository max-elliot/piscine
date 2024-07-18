#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*orig_dest;

	*orig_dest = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (orig_dest);
}
/*
int main()
{
	char *source = "Hello!\0";
	char destination[8];
	
	printf("Before; %s\n", source);
	printf("Before: %s\n", destination);
	ft_strcpy(destination, source);
	printf("After: %s\n", destination);
	return (0);
}
*/