#include <stdio.h>
/**
 * main - three digits combination
 * Return: 0 always (excellent)
 */
int main(void)
{
int one1 = '0';
int ten1 = '0';
int hund1 = '0';
for (hund1 = '0'; hund1 <= '9'; hund1++)
{
	for (ten1 = '0'; ten1 <= '9'; ten1++)
	{
		for (one1 = '0'; one1 <= '9'; one1++)
		{
			if (!((one1 == ten1) || (ten1 == hund1) || (ten1 > one1) || (hund1 > ten1)))
			{
				putchar(hund1);
				putchar(ten1);
				putchar(one1);
				if (!(one1 == '9' && hund1 == '7' && ten1 == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
}
putchar('\n');
return (0);
}
