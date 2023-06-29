#include "main.h"
/**
 * *leet - tashfeer
 * @str : string
 * Return: nan
 */
char *leet(char *str)
{
	int index1, index2;
	char chars_to_replace[] = "aAeEoOtTlL";
	char replacements[] = "4433007711";

	for (index1 = 0; *(str + index1); index1++)
	{
		for (index2 = 0; index2 <= 9; index2++)
		{
			if (chars_to_replace[index2] == str[index1])
				str[index1] = replacements[index2];
		}
	}
	return (str);
}
