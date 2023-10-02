#include "main.h"

/**
 * main - copy
 * @argc: arguments passed to the program
 * @argv: array
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int Ofd_r, Wfd_w, r, a, b;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	Ofd_r = open(argv[1], O_RDONLY);
	if (Ofd_r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	Wfd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((r = read(Ofd_r, buf, BUFSIZ)) > 0)
	{
		if (Wfd_w < 0 || write(Wfd_w, buf, r) != r)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(Ofd_r);
			exit(99);
		}
	}
	if (r < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	a = close(Ofd_r);
	b = close(Wfd_w);
	if (a < 0 || b < 0)
	{
		if (a < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Ofd_r);
		if (b < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", Wfd_w);
		exit(100);
	}
	return (0);
}
