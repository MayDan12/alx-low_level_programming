#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int duf);

/**
 * create_buffer - This function Allocates 1024 bytes for a buffer to work.
 * @file: this is the name of the file buffer is storing chars for.
 * written by daniel oluwanimotele
 * Return: 0 success always.
 */
char *create_buffer(char *file)
{
	char *buffersd;

	buffersd = malloc(sizeof(char) * 1024);

	if (buffersd == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffersd);
}

/**
 * close_file - This function closes the file descriptors.
 * @duf: this is the file descriptor to be closed.
 */
void close_file(int duf)
{
	int K;

	K = close(duf);

	if (K == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", duf);
		exit(100);
	}
}

/**
 * main - This function copies the contents of a file to another file.
 * @argc: This is the number of arguments supplied to the program.
 * @argv: The array of pointers to the arguments.
 * mayowa daniel
 * Return: 0 on success and -1 if fails.
 *
 * Description: If the arguments count is incorrected - exit the code 97.
 * If file_from does not exist or cannot be read awlays - exit the code 98.
 * If file_to cannot be created or written to - exit the code 99.
 * If file_to or file_from cannot be closed - exit the code 100.
 */
int main(int argc, char *argv[])
{
	int froms, mu, R, W;
	char *buffers;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffers = create_buffer(argv[2]);
	froms = open(argv[1], O_RDONLY);
	R = read(froms, buffers, 1024);
	mu = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (froms == -1 || R == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffers);
			exit(98);
		}

		W = write(mu, buffers, R);
		if (mu == -1 || W == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffers);
			exit(99);
		}

		R = read(froms, buffers, 1024);
		mu = open(argv[2], O_WRONLY | O_APPEND);

	} while (R > 0);

	free(buffers);
	close_file(froms);
	close_file(mu);

	return (0);
}
