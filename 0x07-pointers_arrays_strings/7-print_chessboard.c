#include "main.h"
/**
 * print_chessboard - This is the entry point
 * @a: array to use
 * written by daniel oluwanimotele
 * Return: 0 nexcelent
 */
void print_chessboard(char (*a)[8])
{
	int d;
	int m;

	for (d = 0; d < 8; d++)
	{
		for (m = 0; m < 8; m++)
			_putchar(a[d][m]);
		_putchar('\n');
	}
}
