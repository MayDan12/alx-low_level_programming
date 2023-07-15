#include <stdio.h>
/**
 * main - alphabet without q and e
 * Return: 0 Always (Success is good)
 */

int main(void)
{
char daniel;

for (daniel = 'a'; daniel <= 'z'; daniel++)
{
if (daniel != 'q' && daniel != 'e')
{
putchar(daniel);
}
}
putchar('\n');
return (0);
}

