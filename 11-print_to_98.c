#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - prints all the numbers from n to 98
 *
 * @n: the integer
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n != 98)
				printf(", ");
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}
