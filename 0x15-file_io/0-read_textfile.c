#include "main.h"
/**
 * read_textfile - This function read a textfile and read it to the posix
 * @filename: is the file that should be read
 * @letters: is the number of letters it should read and print
 * written by daniel oluwanimotele
 *
 * Return: 0 if filename is null
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int but;
	ssize_t Readby, Writeby;

	char *buffers;

	if (!filename)
		return (0);

	but = open(filename, O_RDONLY);
	if (but == -1)
		return (0);

	buffers = malloc(sizeof(char) * letters);
	if (buffers == NULL)
		return (0);

	Readby = read(but, buffers, letters);
	if (Readby == -1)
	{
		free(buffers);
		close(but);
		return (0);
	}

	Writeby = write(STDOUT_FILENO, buffers, Readby);
	if (Writeby == -1)
	{
		free(buffers);
		close(but);
		return (0);
	}
	close(but);
	return (Readby);
}
