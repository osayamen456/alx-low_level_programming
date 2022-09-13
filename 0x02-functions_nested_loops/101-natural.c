#include <stdio.h>

/**
 * main - computes & prints the sum of all the multiples of 3 or 5
 * below 1024.
 *
 * Return: 0 (success)
 */
int main(void)
{
	long int sum, num3, num5;
	int i;

	sum = 0;
	num3 = 0;
	num5 = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0)
		{
			num3 = num3 + i;
		} else if ((i % 5) == 0)
		{
			num5 = num5 + i;
		}
	}
	sum = num3 + num5;
	printf("%ld\n", sum);
	return (0);
}
