#include <stdio.h>

/**
 * main - function that prints numbers from 1 to 100
 * But for multiples of three print Fizz instead of the number
 * for the multiples of five print Buzz
 *
 * Return: Always nothing.
 */
int main(void)
{
	int i;

	for (i = 1; i < 101; i++)
	{
		if ((i % 15) == 0)
		{
			printf("FizzBuzz");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i < 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}