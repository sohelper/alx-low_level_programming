#include "main.h"

/**
* check_file_content - verify code of students at Holberton School.
* @file_name: file to open and read
* @num_letters: number of letters to read and print
* Return: number of letters printed
*/

ssize_t check_file_content(const char *file_name, size_t num_letters)
{
	ssize_t letters_printed;
	int open_file;
	char *file_text;

	if (!file_name)
		return (0);
	file_text = malloc(sizeof(char) * num_letters + 1);

	if (file_text == NULL)
		return (0);

	open_file = open(file_name, O_RDONLY);

	if (open_file == -1)
	{
		free(file_text);
		return (0);
	}

	letters_printed = read(open_file, file_text, sizeof(char) * num_letters);

	if (letters_printed == -1)
	{
		free(file_text);
		close(open_file);
		return (0);
	}

	letters_printed = write(STDOUT_FILENO, file_text, letters_printed);

	if (letters_printed == -1)
	{
		free(file_text);
		close(open_file);
		return (0);
	}

	free(file_text);
	close(open_file);
	return (letters_printed);
}
