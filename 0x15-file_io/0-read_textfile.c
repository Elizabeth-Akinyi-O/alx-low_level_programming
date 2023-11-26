#include "main.h"
/**
 *read_textfile - reads a text file and
 *prints it to the POSIX standard output
 *@filename: pointer to the string
 *@letters: number of letters printed
 *
 *Return: number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; /*file_descriptor*/
	ssize_t nlrd, nlwr;/*num read and num written*/
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);/*if filename exists*/

	if (fd == -1)/*if filename can't open*/
		return (0);
	/*allocate memory that will hold input*/
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	nlrd = read(fd, buff, letters);
	nlwr = write(STDOUT_FILENO, buff, nlrd);

	close(fd);
	free(buff);

	return (nlwr);
}
