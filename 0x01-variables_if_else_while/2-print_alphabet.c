#include <stdio.h>

/**
 * main - Print alphabets in lower case
 * Return: Always 0
 */

int main(void)
{
	char tab;

	for (tab = 'a'; tab <= 'z'; tab++)
	{
		putchar(tab);
	}
	putchar('\n');
	return (0);
}
