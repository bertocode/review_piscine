#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dest;
	int		len;
    int     n;

	len = 0;
    while(src[len]) 
        len++; // strlength
    dest = (char *)malloc(sizeof(char) * (len + 1)); // length n + lenght of '\0'
    while(src[n] != '\0')
    {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
	return (dest);
}