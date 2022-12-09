#include <stdio.h>

/**
  * main - Print all numbers of base 16 in lower case
  * Return: Always 0
  */
int main(void)
{
	int num;
	char tab;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	for (tab = 'a'; tab <= 'f'; tab++)
		putchar(tab);

	putchar('\n');

	return (0);
}
