#include <stdio.h>
/**
* main - Prints the numbers from 1 to 100 but
* for multiples of three Fizz is printed
*for multiples of 5 Buzz
*and for multiples of both three and five, FizzBuzz is printed
* Return: Always 0.
*/
int main(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if ((x % 3) == 0 && (x % 5) == 0)
			printf("FizzBuzz");
		else if ((x % 3) == 0)
			printf("Fizz");
		else if ((x % 5) == 0)
			printf("Buzz");
		else
			printf("%d", x);
		if (x == 100)
			continue;
			printf(" ");
	}
	printf("\n");
	return (0);
}
