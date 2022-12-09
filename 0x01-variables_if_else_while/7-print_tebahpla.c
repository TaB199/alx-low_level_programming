#include <stdio.h>

/**
  * main - Print alphabets in reverse
  * Return: Always 0
  */
int main(void)
{
	char tab;

	for (tab = 'z'; tab >= 'a'; tab--)
		putchar(tab);

	putchar('\n');

	return (0);
}
