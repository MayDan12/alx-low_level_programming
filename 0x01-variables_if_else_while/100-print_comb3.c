#include <stdio.h>
/**
 * main - combination of two digits
 * Return: 0 always (excellent)
 */
int main(void)
{
int danones = '0';
int dantens = '0';
for (dantens = '0'; dantens <= '9'; dantens++)
{
	for (danones = '0'; danones <= '9'; danones++)
	{
		if (!((danones == dantens) || (dantens > danones)))
		{
			putchar(dantens);
			putchar(danones);
			if (!(danones == '9' && dantens == '8'))
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
}
putchar('\n');
return (0);
}
