#include "main.h"

/**
 * append_text_to_file - a funcion
 *
 * @filename: file
 * @text_content: text
 * Return: 1 on success, -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file, app_status, words = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[words] != '\0')
			words++;

		app_status = write(file, text_content, words);
		if (app_status == -1)
			return (-1);
	}
	close(file);
	return (1);
}
