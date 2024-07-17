#include <stdio.h>
#include <string.h>

char 	*ft_strcpy(char *dest, char *src)
{
	// copy string from a source to a destination
	char *orig_dest = dest;
	while(*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return orig_dest;
	
}

int main()
{
	char source[] = "Hello!";
	char destination [50];

	*ft_strcpy(destination, source);
	
	printf("Source: %s\n", source);
	printf("Destination: %s\n", destination);
	return (0);
}