#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char *ft_strdup(char *src)
{
	char *dest;
	int i;

	i = 0;
	if ((dest = (char *)malloc(ft_strlen(src) * sizeof(char) + 1)) == NULL)
		return(0);
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main(void) 
{
	char *src = "hello";
	char *dest;
	printf("source: #%s# address: #%p#\n", src, src);
	dest = ft_strdup(src);
	printf("dest: #%s# address: #%p#\n", dest, dest);
}
