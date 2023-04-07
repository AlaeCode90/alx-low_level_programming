#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: Pointer to destination string
 */

char *_strcpy(char *dest, char *src)
{
int l = 0;
int x;

while (*(src + l) != '\0')
{
l++;
}

for (x = 0; x < l; x++)
{
dest[x] = src[x];
}

dest[l] = '\0';

return (dest);
}
