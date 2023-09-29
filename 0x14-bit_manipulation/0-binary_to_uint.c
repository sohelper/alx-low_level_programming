#include "main.h"

unsigned int str_to_uint(const char *str) 
{
  int i;
  unsigned int dec = 0;

  if (!str)
    return (0);

  for(i = 0; str[i]; i++)
  {
    if(str[i] < '0' || str[i] > '1')
      return (0);
    dec = 2 * dec + (str[i] - '0'); 
  }

  return (dec);
}
