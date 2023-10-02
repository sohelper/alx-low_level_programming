#include "main.h"

/**
* check_file_content - verify code of students at Holberton School.
* @file_name: file to open and read
* @num_letters: number of letters to read and print
* Return: number of letters printed
*/

ssize_t print_text_file(const char *file_name, size_t num_letters)
{
  int file_desc;
  int chars_read, chars_written;
  char *buffer;

  if (!file_name)
    return (0);

  file_desc = open(file_name, O_RDONLY);
  if (file_desc < 0)
    return (0);

  buffer = malloc(sizeof(char) * num_letters);
  if (!buffer)
    return (0);

  chars_read = read(file_desc, buffer, num_letters);
  if (chars_read < 0)
  {
    free(buffer);
    return (0);
  }

  buffer[chars_read] = '\0';
  close(file_desc);

  chars_written = write(STDOUT_FILENO, buffer, chars_read);
  if (chars_written < 0)
  {
    free(buffer);
    return (0);
  }

  free(buffer);
  return (chars_written);
}
