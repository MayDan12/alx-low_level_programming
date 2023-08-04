#include "main.h"
/**
 * main - print the number of argument
 * @argc: number of argument passed
 * @argv: the array of argument
 * written by daniel
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	(void) argv; /*this ignore argv*/
		printf("%d\n", argc - 1);

		return (0);
}
