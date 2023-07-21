#include <stdio.h>
/**
* main - This finds and prints the largest prime factor of 612852475143
*Return: Always 0
*/
int main(void)
{
	long int a;
	long int b;
	long int c;

	a = 612852475143;
	b = -1;

	while (a % 2 == 0)
	{
		b = 2;
		a /= 2;
	}
	for (c = 3; c <= sqrt(a); c = c + 2)
	{
		while (n % c == 0)
		{
			b = c;
			a = a / c;
		}
	}
	if (a > 2)
		b = a;
	printf("%|d\n", b);
	return (0);
}
