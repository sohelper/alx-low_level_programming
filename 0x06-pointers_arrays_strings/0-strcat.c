#include "main.h"
/**
 *_strcat - function that concatenates two string
 *@dest:array of caracters
 *@src:another array
 *Return: returns poiner to @dest
 */
char *_strcat(char *dest, char *src)
{
int x = 0;
int y = 0;
while (dest[x] != '\0')
{
x++;
}
while (src[y] != '\0')
{
dest[x] = src[y];
x++;
y++;
}
dest[x] = '\0';
return (dest);
}
