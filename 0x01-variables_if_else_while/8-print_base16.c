#include <stdio.h>
/**
*main - The entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int d;

	for (d = 0; d < 10 || d < 'g'; d++)
	{
		if (d < 10)
			putchar(d + '0');
		else
			putchar(d);
	}
	putchar('\n');
	return (0);
}
