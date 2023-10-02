#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a specified number of characters from a text file
 *                and writes them to the standard output (stdout).
 *
 * @filename: The path to the file to be read.
 * @letters: The number of characters to read and print.
 *
 * Return: The number of characters read and printed on success,
 *         or -1 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t open, read, write;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	open = open(filename, O_RDONLY);
	read = read(open, buffer, letters);
	write = write(STDOUT_FILENO, buffer, r);

	if (open == -1 || read == -1 || write == -1 || write != read)
	{
		free(buffer);
		return (0);
	}
}
