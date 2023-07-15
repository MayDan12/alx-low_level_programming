#include <stdio.h>
/**
* main - program that prints the alphabet in lowercase
* Return: Always 0 (success is good)
 */
int main(void)
{
char y;
y = 'a';
while (y <= 'z')
{
putchar(y);
y++;
}
putchar('\n');
return (0);
}
