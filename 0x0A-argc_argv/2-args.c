#include "main.h"
/**
 * main - prints al argument its recieve
 * @argc: number of argument
 * @argv: the array of argument
 *
 * written by daniel
 * Return: o always excellent
 */
int main(int argc, char *argv[])
{
	int d;

	for (d = 0; d < argc; d++)
	{
		printf("%s\n", argv[d]);
	}
	return (0);
}
