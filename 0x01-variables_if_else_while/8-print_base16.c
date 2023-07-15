#include <stdio.h>
/**
*main - The entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	char d;
	int i;

	d = 'a';
	i = 0;
	while
		(i < 10) {
			putchar(i + '0');
			i++;
		}
	while
		(d <= 'f') {
			putchar(d);
			d++;
		}
	putchar('\n');
	return (0);
}
