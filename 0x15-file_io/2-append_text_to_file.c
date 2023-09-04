#include "main.h"
/**
 * append_text_to_file - This function appends a text at the end of a file
 * @filename: this is the name of the file used
 * @text_content: This is the null terminated string to add to the end
 * of the file
 *
 * written by daniel oluwanimotele
 * Return: i if successful and -1 if it fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int G, Y, lenft = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenft = 0; text_content[lenft];)
			lenft++;
	}

	G = open(filename, O_WRONLY | O_APPEND);
	Y = write(G, text_content, lenft);

	if (G == -1 || Y == -1)
		return (-1);

	close(G);

	return (1);

}
