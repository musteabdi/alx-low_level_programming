#include "main.h"

/**
 * main - primary function
 *Description: print string "main"
 using a while loop over the array
 * Return: 1 if the number is positve. 0 otherwise
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
