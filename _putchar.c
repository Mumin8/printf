#include <unistd.h>
/**
 * _putchar - the function to print the characters
 * @c: the character passed in
 * Return: the number of characters printed
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
