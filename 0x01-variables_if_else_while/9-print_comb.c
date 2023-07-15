#include <stdio.h>
/**
 * main - possible combinations of digits
 * Return: o always (excellent)
 */
int main(void)
{
int good;
for (good = 0; good < 10; good++)
{
putchar(good + '0');
if (good < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
