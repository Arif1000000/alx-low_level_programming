#include <stdio.h>

/**
 * main - Prints all combination of single digits
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		if (num >= '0' && num <= '9')
		{
			putchar(num);
		}
		if (num >= '0' && num < '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
