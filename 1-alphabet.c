#include "main.h"
/**
 * print_alphabet - Prints the alphabet
 *
 * Return: 0 (sucsess)
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
