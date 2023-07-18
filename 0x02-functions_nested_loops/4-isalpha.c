#include "main.h"

/**
 * _isalpha - verifys alphabetic character
 * @m: what character to be checked
 * Return: 1 if m a letter, otherwise 0
 */
int _isalpha(int m)
{
	return ((m >= 'a' && m <= 'z') || (m >= 'A' && m <= 'Z'));
}
