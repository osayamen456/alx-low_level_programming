#include "main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: the size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int num1, num2;

		for (num1 = 0; num1 < size; num1++)
		{
			for (num2 = 0; num2 < size; num2++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
