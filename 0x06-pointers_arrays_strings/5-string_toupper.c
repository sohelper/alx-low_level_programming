/**
 * string_toupper - a function that changes all
 *             lowercase letters of a string
 *             to uppercase.
 * @s : pointer to input char
 * Return: @s
*/

char *string_toupper(char *s)
{
int y = 0;

while (s[y] != '\0')
{
if (s[y] >= 97 && s[y] <= 122)
s[y] = s[y] - 32;
y++;
}
return (s);
}
