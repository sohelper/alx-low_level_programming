#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * *_strdup -  function that returns pointer to allocated space in memory
 * @str:string
 * Return:NULL if str = NULL
 */
char *_strdup(char *str)
{
char *sahar;
unsigned int len;
unsigned int i;
if (str == 0)
{
return (NULL);
}
for (len = 0; str[len] != '\0'; len++)
;
sahar = malloc(sizeof(char) * (len + 1);
if (sahar == 0)
{
return (NULL);
}
for (i = 0; i <= len; i++)
sahar[i] = str[i];
return (sahar);
}
