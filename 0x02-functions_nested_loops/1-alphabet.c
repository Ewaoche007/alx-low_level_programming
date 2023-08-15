#include "main.h"
/**
 * print_alphabet - print all alphabets in lowercases
 * Return: returns 0
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
