#include <stdio.h>
/**
 * Main - Entry point
 * Description: 'To print alphabets in lowercases)'
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
