#include <stdio.h>

/**
  * main - Prints the alphabet in lower case
  * followed by a new line, except q and e
  * Return: Always 0
  */

int main(void)
{
	char tab;

	for (tab = 'a'; tab <= 'z'; tab++)
	{
		if (tab != 'e' && tab != 'q')
			putchar(tab);
	}

	putchar('\n');

	return (0);
}
