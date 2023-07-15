#include <stdio.h>
/**
 * main - base 16 lowercase
 * Return: 0 always (excellent)
 */
int main(void)
{
char ran;
int dan;
ran = 'a';
dan = 0;
while (dan < 10)
{
	putchar(dan + '0');
	dan++;
}
while (ran <= 'f')
{
	putchar(ran);
	ran++;
}
putchar('\n');
return (0);
}
