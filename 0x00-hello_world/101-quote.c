#include <unistd.h>

/**
 * main - Program that prints a string to standard error
 *
 * Return: 0 if successful
 */

int main(void)
{
	write(2, "and that piece of art is useful\' - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
