#include "main.h"
/**
* print_number - It prints an integer
*@n: The integer to be printed
*/
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}
		if ((a / 10) > 0)
			print_number(a / 10);
		_putchar((a % 10) + '0');
		}
