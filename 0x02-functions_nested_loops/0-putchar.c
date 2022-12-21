#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	char cString[10] = "putchar\n";

	while (c < 10)
	{
		_putchar(cString[c]);
		c++;
	}
	_putchar('\n');

	return (0);
}
