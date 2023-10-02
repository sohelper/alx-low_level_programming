#include "main.h"

/**
 * create_file - a function name
 *
 * @filename: name of file
 * @text_content: string
 *
 * Return: 1 on success OR -1
*/
int create_file(const char *filename, char *text_content)
{
	int file, write_status, words = 0;

	if (filename == NULL)
		return (-1);


	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		write_status = write(file, text_content, words);
		if (write_status == -1)
			return (-1);
	}

	close(file);
	return (1);
}
