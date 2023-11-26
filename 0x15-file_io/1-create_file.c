#include "main.h"
/**
 *create_file - creates and writes into a file
 *@filename: name of the file to create
 *@text_content: NULL terminated string to write to the file
 *
 *Return: 1 on sucess and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int lcount;/*number of letters*/
	int wr;/*write return-what will be printed out*/

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";
	/*get the length of text_content*/
	for (lcount = 0; text_content[lcount]; lcount++)
		;
	wr = write(fd, text_content, lcount);

	if (wr == -1)
		return (-1);
	close(fd);

	return (1);
}
