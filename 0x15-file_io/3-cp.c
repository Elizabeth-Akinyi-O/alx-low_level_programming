#include "main.h"
#include <stdio.h>
/**
 *check_err_file - checks for errors in an opened file
 *@file_from: source file
 *@file_to: destination file
 *@argv: argument vector
 */
void check_err_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)/*after opening the file*/
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)/*after opening the file*/
	{
		dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
		exit(99);
	}
}
/**
 *main - copy content of a file from source to destination file
 *@argc: argument count
 *@argv: argument vector
 *
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t chars_count, num_wr;
	char buff[1024];/*copies 1024 at a go*/

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	check_err_file(file_from, file_to, argv);

	chars_count = 1024;
	while (chars_count == 1024)
	{
		chars_count = read(file_from, buff, 1024);
		if (chars_count == -1)
			check_err_file(-1, 0, argv);
		num_wr = write(file_to, buff, 1024);
		if (num_wr == -1)
			check_err_file(0, -1, argv);
	}
	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
