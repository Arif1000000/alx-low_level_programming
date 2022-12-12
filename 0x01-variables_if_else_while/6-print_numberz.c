#include <stdio.h>

/**
 * main - Prits single digits in base 10
 * Return: Always 0
 */
int main(void)
{
	int al;

	for (al = '0'; al <= '9'; al++)
		putchar(al);

	putchar('\n');

	return (0);
}
