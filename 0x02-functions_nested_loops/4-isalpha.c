#include "main.h"

/**
 * _isalpha - checks for alphabetic character 
 *
 * Return: 1 on success and 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
