#include <stdio.h>
/**
 * main - lowercase and uppercase
 * Return:  0 Always (Success)
 */
int main(void)
{
char S;
char C;
S = 'a';
C = 'A';
while (S <= 'z')
{
putchar(S);
S++;
}
while (C <= 'Z')
{
putchar(C);
C++;
}
putchar('\n');
return (0);
}
