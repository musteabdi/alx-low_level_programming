#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - Prints alphabets in lowercase, then in uppercase
* Return: 0
**/

int main(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i <= 51; i++)
	{
		putchar(letters[i]);
	}
	putchar('\n');
	return (0);
}
