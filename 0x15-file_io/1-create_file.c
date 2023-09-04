#include "main.h"
/**
 * create_file - This is a function that creats a file
 * @filename: This is the name of the file to create
 * @text_content: this ia a NULL terminated string to write to the file
 * written by daniel oluwanimotle
 *
 * Return: -1 if it fails and 0 if success
 */
int create_file(const char *filename, char *text_content)
{
	int files;
	int Results = 1, Counts = 0;

	if (!filename)
		return (-1);
	files = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (files == -1)
		return (-1);

	if (text_content)
	{
		while (text_content[Counts])
			Counts++;
		Results = write(files, text_content, Counts);
	}
	if (Results == -1)
		return (-1);
	close(files);
	return (1);
}
