#include <stdio.h>
/**
*main - The entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int a = 0;

	do {
		printf("%d", a);
		a++;
	} while (a < 10);
	putchar('\n');
	return (0);
}
