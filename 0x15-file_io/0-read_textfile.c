#include "main.h"

/**
* check_file_content - verify code of students at Holberton School.
* @file_name: file to open and read
* @num_letters: number of letters to read and print
* Return: number of letters printed
*/

ssize_t print_text_file(const char *file_name, size_t num_letters)
{
ssize_t open_fd, chars_read, chars_written;
char *buf;

if (file_name == NULL)
	return (0);
buf = malloc(sizeof(char) * num_letters);
if (buf == NULL)
	return (0);
open_fd = open(file_name, O_RDONLY);
chars_read = read(open_fd, buf, num_letters);
chars_written = write(STDOUT_FILENO, buf, chars_read);

if (open_fd == -1 || chars_read == -1 || chars_written == -1 || chars_written != chars_read)
{
	free(buf);
	return (0);
}
free(buf);
close(open_fd);
return (chars_written);
}
