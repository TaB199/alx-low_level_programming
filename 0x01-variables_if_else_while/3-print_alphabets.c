#include <stdio.h>

/**
 * main - Print alphabets in lower and upper case
 * Return: Always 0
 */
int main(void)
{
	char tab;

	for (tab = 'a'; tab <= 'z'; tab++)
		putchar(tab);

	for (tab = 'A'; tab <= 'Z'; tab++)
		putchar (tab);

	putchar('\n');

	return (0);
}
