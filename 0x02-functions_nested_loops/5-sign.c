#include "main.h"
/**
 *print_sign - Prints the sign of a number
 *@n: number to be checked
 *Return: 1 for pos number, -1 for neg number or zero for anything else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
