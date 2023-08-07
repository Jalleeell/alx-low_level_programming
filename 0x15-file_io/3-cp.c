#include "main.h"
#include <stdio.h>

/**
 * file_err - checks if files can be opened.
 * @file_o: file_o.
 * @file_l: file_l.
 * @argv: arguments vector.
 * Return: no return.
 */
void file_err(int file_o, int file_l, char *argv[])
{
	if (file_o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_l == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int file_o, file_l, enderr;
	ssize_t chars, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_o file_l");
		exit(97);
	}

	file_o = open(argv[1], O_RDONLY);
	file_l = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	file_err(file_o, file_l, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_o, buf, 1024);
		if (chars == -1)
			file_err(-1, 0, argv);
		wr = write(file_l, buf, chars);
		if (wr == -1)
			file_err(0, -1, argv);
	}

	enderr = close(file_o);
	if (enderr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_o);
		exit(100);
	}

	enderr = close(file_l);
	if (enderr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_o);
		exit(100);
	}
	return (0);
}
