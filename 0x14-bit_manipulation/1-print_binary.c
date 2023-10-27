#include "main.h"

/**
 * _pow - function that calc (base ^ power)
 * @base: base of the exponent
 * @power: power of the exponent
 *
 * Return: value of (base ^ power)
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int num;
	unsigned int b;

	num = 1;
	for (b = 1; b <= power; b++)
		num *= base;
	return (num);
}

/**
 * print_binary - A number is printed using binary notation.
 * @n: number to be printed
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int factor, check;
	char flag;

	flag = 0;
	factor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (factor != 0)
	{
		check = n & factor;
		if (check == factor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || factor == 1)
		{
			_putchar('0');
		}
		factor >>= 1;
	}
}
