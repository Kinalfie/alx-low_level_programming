#include <stdio.h>
#include <stdlib.h>
/**
*main - The entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int x, z;

	for (x = 0; x < 100; x++)
	{
		for (z = 0; z < 100; z++)
		{
			if (x < z)
			{
				putchar((x / 10) + 48);
				putchar((x % 10) + 48);
				putchar(' ');
				putchar((z / 10) + 48);
				putchar((z % 10) + 48);
				if (x != 98 || z != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
