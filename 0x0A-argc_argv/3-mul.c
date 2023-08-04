#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * written by daniel oluwanimotele
 * Return: the int converted from the string 0
 */
int _atoi(char *s)
{
	int a, b, c, len, f, digit;

	a = 0;
	b = 0;
	c = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;
	while (a < len && f == 0)
	{
		if (s[a] == '-')
			++b;
		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			c = c * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (c);
}

/**
 * main - multiplies two numbers of int
 * @argc: number of arguments
 * @argv: array of arguments
 * written by daniel
 * Return: 0 (Success,excellent), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int result, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
