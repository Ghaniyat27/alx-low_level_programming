#include <unistd.h>

/**
 * _putchar - Writes char c to stdout
 * @c: The char to be printed
 *
 * Return: Success 1.
 * On error, -1 should returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
