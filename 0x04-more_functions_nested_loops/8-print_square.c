#include "main.h"
/**
* print_square - this prints a square
*@size: this is the size of square
*/
void print_square(int size)
{
	int d;
	int e;

	e = 0;
	if (size < 1)
		_putchar('\n');
	while (e < size)
	{
		d = 0;
		while (d < size)
		{
			_putchar('#');
			d++;
		}
		_putchar('\n');
		e++;
	}
}
